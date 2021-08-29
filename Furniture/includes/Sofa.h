/*
 * @Descripttion: 沙发类
 * @version: 
 * @Author: pomelo
 * @Date: 2021-08-03 15:33:46
 * @LastEditTime: 2021-08-27 11:22:12
 */
#include "Furniture.h"

class CFurnitureSofa : public CFurniture
{
public:
    CFurnitureSofa(int uCustomerNum) : CFurniture(uCustomerNum)
    {
        std::cout << "construct sofa." << std::endl;
    }
    
    ~CFurnitureSofa()
    {
        std::cout << "destroy sofa." << std::endl;
    }

    /**
     * @Description: 家具制作流程
     * @param {*}
     * @return {*}
     */  
    void make();
};