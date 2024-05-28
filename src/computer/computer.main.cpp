#include "computer.h"
void Check(Computer status)
{
     switch (status) {  
        case FREE:  
            std::cout << "物品当前处于空闲状态。" << std::endl;  
            break;  
        case BUSY:  
            std::cout << "物品当前正在使用中。" << std::endl;  
            break;  
        case RESERVED:  
            std::cout << "物品已被预约。" << std::endl;  
            break;  
        case BROKEN:  
            std::cout << "物品已损坏。" << std::endl;  
            break;  
}
