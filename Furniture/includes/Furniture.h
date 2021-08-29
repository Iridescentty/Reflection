/*
 * @Descripttion: 家具抽象类
 * @version: 
 * @Author: pomelo
 * @Date: 2021-08-03 15:33:05
 * @LastEditTime: 2021-08-27 11:26:00
 */
class CFurniture
{
public:
    CFurniture(int uCustomerNum) {}
    virtual ~CFurniture() {}
   
    /**
     * @Description: 家具制作流程
     * @param {*}
     * @return {*}
     */    
    virtual void make() {}
};