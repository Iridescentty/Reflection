/*
 * @Descripttion: 家具工厂类实现
 * @version: 
 * @Author: pomelo
 * @Date: 2021-08-03 15:38:17
 * @LastEditTime: 2021-08-27 11:07:23
 */
#include "FurnitureFactory.h"

CFurnitureFactory& CFurnitureFactory::GetInstance()
{
    static CFurnitureFactory factory;
    return factory;
}

std::shared_ptr<CFurniture> CFurnitureFactory::CreateObject(const int& uCustomerNum)
{
    // 根据客户编号查找家具子类实例对象
    auto it = m_mapObjs.find(uCustomerNum);
    if (it != m_mapObjs.end())
    {
        return (it->second)();
    }
    else
    {
        std::cout << "Furniture" << uCustomerNum << " doesn't exit." << std::endl;
    }

    return nullptr;
}

void CFurnitureFactory::RegistClass(const int& uCustomerNum, SPCreateObject spCreateObj)
{
    auto it = m_mapObjs.find(uCustomerNum);
    if (it != m_mapObjs.end())
    {
        std::cout << "Furniture" << uCustomerNum << "was exited." << std::endl;
        return;
    }
    m_mapObjs.insert(std::pair<int, SPCreateObject>(uCustomerNum, spCreateObj));
}