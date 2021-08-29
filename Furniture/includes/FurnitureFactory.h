/*
 * @Descripttion: 家具工厂类
 * @version: 
 * @Author: pomelo
 * @Date: 2021-08-03 15:38:07
 * @LastEditTime: 2021-08-27 13:32:02
 */
#include <iostream>
#include <map>
#include <memory>
#include <string>
// #include "Furniture.h"
class CFurniture;

typedef std::shared_ptr<CFurniture> (*SPCreateObject)();
class CFurnitureFactory
{
public:
    ~CFurnitureFactory() {}
 
    /**
     * @Description: 获取家具工厂类实例
     * @param {*}
     * @return {*}
     */      
    static CFurnitureFactory& GetInstance();

    /**
     * @Description: 根据客户要求生产对应的家具，一个客户的要求对应一种家具
     * @param {const int&} uCustomerNum：客户编号，如1表示生产沙发，2表示生产桌子，3表示生产椅子，4表示生产床
     * @return {std::shared_ptr<CFurniture>} 家具类实例对象
     */    
    std::shared_ptr<CFurniture> CreateObject(const int& uCustomerNum);

    /**
     * @Description: 注册家具子类
     * @param {const int} uCustomerNum：客户编号
     * @param {SPCreateObject} spCreateObj：创建函数
     * @return {*}
     */     
    void RegistClass(const int& uCustomerNum, SPCreateObject spCreateObj);

private:
    CFurnitureFactory() {}

private:
    std::map<int, SPCreateObject> m_mapObjs;
};

class Register
{
public:  
    /**
     * @Description: 构造函数
     * @param {const int} uCustomerNum：客户编号
     * @param {SPCreateObject} spCreateObj：创建函数
     * @return {*}
     */      
    Register(const int& uCustomerNum, SPCreateObject spCreateObj)
    {
        CFurnitureFactory& factory = CFurnitureFactory::GetInstance();
        std::string strFurniture = "";
        if (1 == uCustomerNum)
        {
            strFurniture = "Sofa";
        }
        else if (2 == uCustomerNum)
        {
            strFurniture = "Table";
        }
        else if (3 == uCustomerNum)
        {
            strFurniture = "Chair";
        }
        else if (4 == uCustomerNum)
        {
            strFurniture = "Bed";
        }
        std::cout << "Register Customer " << strFurniture << "." << std::endl;
        factory.RegistClass(uCustomerNum, spCreateObj);
    }
    ~Register() {}
};

#define RegisterClass(uCustomerNum, className)                                  \
class className##Register##uCustomerNum                                         \
{                                                                               \
public:                                                                         \
    static std::shared_ptr<CFurniture> CreateObject()                           \
    {                                                                           \
        std::shared_ptr<className> spObject(new className(uCustomerNum));       \
        return spObject;                                                        \
    }                                                                           \
private:                                                                        \
    static std::shared_ptr<Register> s_register;                                \
};                                                                              \
std::shared_ptr<Register> className##Register##uCustomerNum::s_register(        \
    new Register(uCustomerNum, className##Register##uCustomerNum::CreateObject))