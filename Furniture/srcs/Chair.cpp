/*
 * @Descripttion: 椅子类的实现
 * @version: 
 * @Author: pomelo
 * @Date: 2021-08-03 15:36:47
 * @LastEditTime: 2021-08-25 23:36:28
 */
#include "FurnitureFactory.h"
#include "Chair.h"

RegisterClass(3, CFurnitureChair);

void CFurnitureChair::make()
{
    std::cout << "make chair." << std::endl;
}