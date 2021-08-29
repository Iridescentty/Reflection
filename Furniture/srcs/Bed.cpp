/*
 * @Descripttion: 床类的实现
 * @version: 
 * @Author: pomelo
 * @Date: 2021-08-03 15:36:53
 * @LastEditTime: 2021-08-25 23:36:27
 */
#include "FurnitureFactory.h"
#include "Bed.h"

RegisterClass(4, CFurnitureBed);

void CFurnitureBed::make()
{
    std::cout << "make bed." << std::endl;
}