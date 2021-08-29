/*
 * @Descripttion: 床类
 * @version: 
 * @Author: pomelo
 * @Date: 2021-08-03 15:35:55
 * @LastEditTime: 2021-08-27 11:24:04
 */
#include "Furniture.h"

class CFurnitureBed : public CFurniture
{
public:
    // using CFurniture::CFurniture;
    CFurnitureBed(int uCustomerNum) : CFurniture(uCustomerNum)
    {
        std::cout << "construct bed." << std::endl;
    }

    ~CFurnitureBed()
    {
        std::cout << "destroy bed." << std::endl;
    }

    /**
     * @Description: 家具制作流程
     * @param {*}
     * @return {*}
     */  
    void make();
};