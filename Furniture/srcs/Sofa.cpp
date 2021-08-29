/*
 * @Descripttion: 沙发类的实现
 * @version: 
 * @Author: pomelo
 * @Date: 2021-08-03 15:33:58
 * @LastEditTime: 2021-08-25 23:36:31
 */
#include "FurnitureFactory.h"
#include "Sofa.h"

RegisterClass(1, CFurnitureSofa);

void CFurnitureSofa::make()
{
    std::cout << "make sofa." << std::endl;
}