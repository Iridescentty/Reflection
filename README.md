# 背景介绍
[反射](https://baike.baidu.com/item/%E5%8F%8D%E5%B0%84%E6%9C%BA%E5%88%B6/10957326?fr=aladdin)的概念是由`Smith`在1982年首次提出的，主要是指程序可以访问、检测和修改它本身状态或行为的一种能力。在计算机科学领域，反射是指一类应用，它们能够自描述和自控制。这类应用通过采用某种机制来实现对自己行为的描述和监测，并能够根据自身行为的状态和结果，调整或修改应用所描述行为的状态和相关的语义。

反射机制在Java中是一种常用且强大的工具。它允许运行中的Java程序对自身进行检查，并能直接操作程序的内部属性。简单说，可以通过参数（比如从配置文件中读取）在运行时动态加载类并获取类的详细信息，比如通过类名称生成类对象。

但是在`C/C++`语言中没有办法直接使用反射机制，需要自己实现；而实现反射机制就需要使用工厂方法模式。下面使用`C++`结合工厂方法模式实现一个简易版本的反射机制：通过类的名称生成相应的实例对象。

# 项目功能
实现反射机制中的通过参数创建类的功能，项目中模拟了一个示例：家具工厂可以生产沙发、桌子、椅子和床。

在该实例中，通过输入的编号决定生产哪种家具：1表示生产沙发，2表示生产桌子，3表示生产椅子，4表示生产床。

# 运行
在`main.cpp`中给了一个使用示例，具体运行方法如下：
```
mkdir build
cd build
cmake ../
make -j4
cd bin/
./Reflection
```
运行结果为：
```
Register Customer Bed.
Register Customer Chair.
Register Customer Sofa.
Register Customer Table.
construct sofa.
make sofa.

construct table.
destroy sofa.
make table.

construct chair.
destroy table.
make chair.

construct bed.
destroy chair.
make bed.

Furniture5 doesn't exit.
destroy bed.
```
可以看到，在程序运行过程中，就创建了所有的家具子类；后续在使用的时候，只需要根据参数（即编号）就可以拿到相应的子类实例对象。