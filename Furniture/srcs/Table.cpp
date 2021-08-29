/*
 * @Descripttion: 桌子类的实现
 * @version: 
 * @Author: pomelo
 * @Date: 2021-08-03 15:36:35
 * @LastEditTime: 2021-08-25 23:37:23
 */
#include "FurnitureFactory.h"
#include "Table.h"

RegisterClass(2, CFurnitureTable);

void CFurnitureTable::make()
{
    std::cout << "make table." << std::endl;
}
