#include "sales.h"
#include <iostream>

int main(){



    Sales_data total;
   
    // if (std::cin >> total.bookNo >> total.units_sold >> total.revenue)
    // {
    //     Sales_data trans;
    //     while (std::cin >> trans.bookNo >> trans.units_sold >> trans.revenue) {
    //         if (total.isbn() == trans.isbn())
    //             total.combine(trans);
    //         else {
    //             std::cout << total.bookNo << " " << total.units_sold << " " << total.revenue << std::endl;
    //             total = trans;
    //         }
    //     }
    //     std::cout << total.bookNo << " " << total.units_sold << " " << total.revenue << std::endl;
    // }
    // else
    // {
    //     std::cerr << "No data?!" << std::endl;
    //     return -1;
    // }

    // if (read(std::cin, total))
    // {
    //     Sales_data trans;
    //     while (read(std::cin, trans)) {
    //         if (total.isbn() == trans.isbn())
    //             total.combine(trans);
    //         else {
    //             print(std::cout, total) << std::endl;
    //             total = trans;
    //         }
    //     }
    //     print(std::cout, total) << std::endl;
    // }
    // else
    // {
    //     std::cerr << "No data?!" << std::endl;
    //     return -1;
    // }
    
    Sales_data item1;
    print(std::cout, item1) << std::endl;
    
    Sales_data item2("0-201-78345-X");
    print(std::cout, item2) << std::endl;
    
    Sales_data item3("0-201-78345-X", 3, 20.00);
    print(std::cout, item3) << std::endl;
    
    Sales_data item4(std::cin);
    print(std::cout, item4) << std::endl;








    return 0;
}