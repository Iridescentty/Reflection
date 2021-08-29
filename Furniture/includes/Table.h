/*
 * @Descripttion: 桌子类
 * @version: 
 * @Author: pomelo
 * @Date: 2021-08-03 15:35:41
 * @LastEditTime: 2021-08-27 11:23:14
 */
#include "Furniture.h"

class CFurnitureTable : public CFurniture
{
public:
    // using CFurniture::CFurniture;
    CFurnitureTable(int uCustomerNum) : CFurniture(uCustomerNum)
    {
        std::cout << "construct table." << std::endl;
    }
    
    ~CFurnitureTable()
    {
        std::cout << "destroy table." << std::endl;
    }

    /**
     * @Description: 家具制作流程
     * @param {*}
     * @return {*}
     */  
    void make();
};