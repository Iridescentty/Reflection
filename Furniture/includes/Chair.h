/*
 * @Descripttion: 椅子类
 * @version: 
 * @Author: pomelo
 * @Date: 2021-08-03 15:35:48
 * @LastEditTime: 2021-08-27 11:23:43
 */
#include "Furniture.h"

class CFurnitureChair : public CFurniture
{
public:
    CFurnitureChair(int uCustomerNum) : CFurniture(uCustomerNum)
    {
        std::cout << "construct chair." << std::endl;
    }

    ~CFurnitureChair()
    {
        std::cout << "destroy chair." << std::endl;
    }

    /**
     * @Description: 家具制作流程
     * @param {*}
     * @return {*}
     */  
    void make();
};