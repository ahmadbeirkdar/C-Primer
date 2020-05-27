#include <string>
#include <vector>
class Screen;
class Window_mgr{
    public:
        using ScreenIndex = std::vector<Screen>::size_type;
        void clear(ScreenIndex i);
    private:
        std::vector<Screen> screens;
};

class Screen{

    friend void Window_mgr::clear(ScreenIndex i);

    public:
        using pos = std::string::size_type;
        Screen() = default;
        Screen(pos ht, pos wd, char c)
            :height(ht),width(wd), contents(ht*wd,c) {};
        Screen(pos ht, pos wd)
            :height(ht),width(wd),contents(ht*wd, ' ') {};
        char get() const { return contents[cursor]; }
        char get(pos r, pos c) const { return contents[r*width+c]; }
        Screen &move(pos r, pos c);
        Screen &set(char c);
        Screen &display(std::ostream &os);
    
    private:
        pos cursor = 0;
        pos height = 0, width = 0;
        std::string contents;


};

void Window_mgr::clear(ScreenIndex i){
    Screen &s = screens[i];
    s.contents = std::string(s.height*s.width, ' ');
}

Screen &Screen::move(pos r, pos c){
    pos row = r * width;
    cursor = row + c;
    return *this;
}

Screen &Screen::set(char c){
    contents[cursor] = c;
    return *this;
}
Screen &Screen::display(std::ostream &os){
    os << contents;
    return *this;
}