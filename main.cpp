/*
 * @Descripttion: 使用示例
 * @version: 
 * @Author: pomelo
 * @Date: 2021-08-03 15:31:47
 * @LastEditTime: 2021-08-27 13:31:30
 */
#include "FurnitureFactory.h"
#include "Sofa.h"

int main()
{
    // 生产沙发
    int uCustomer = 1;
    std::shared_ptr<CFurniture> spFurniture = CFurnitureFactory::GetInstance().CreateObject(uCustomer);
    if (spFurniture)
    {
        spFurniture->make();
    }
    std::cout << std::endl;

    // 生产桌子
    uCustomer = 2;
    spFurniture = CFurnitureFactory::GetInstance().CreateObject(uCustomer);
    if (spFurniture)
    {
        spFurniture->make();
    }
    std::cout << std::endl;

    // 生产椅子
    uCustomer = 3;
    spFurniture = CFurnitureFactory::GetInstance().CreateObject(uCustomer);
    if (spFurniture)
    {
        spFurniture->make();
    }
    std::cout << std::endl;

    // 生产床
    uCustomer = 4;
    spFurniture = CFurnitureFactory::GetInstance().CreateObject(uCustomer);
    if (spFurniture)
    {
        spFurniture->make();
    }
    std::cout << std::endl;

    // 生产不存在的家具
    uCustomer = 5;
    spFurniture = CFurnitureFactory::GetInstance().CreateObject(uCustomer);
    if (spFurniture)
    {
        spFurniture->make();
    }

    return 0;
}