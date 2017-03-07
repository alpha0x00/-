//
//  main.cpp
//  Coursera
//
//  Created by Alpha0x00 on 2017/3/5.
//  Copyright © 2017年 Alpha0x00. All rights reserved.
//

//#include <iostream>
//
//int main(int argc, const char * argv[]) {
//    // insert code here...
//    std::cout << "Hello, World!\n";
//    return 0;
//}

#include <iostream>
using namespace std;
int main()
{
//    // char 一个字符
//    char a = 'A';
//    cout<<"猜猜我是哪个字母："<<endl;
//    cin>>a;
//    if(a!='G')
//        cout<<"你猜错了！"<<endl;
//    else if(a=='G')
//        cout<<"被你猜中了！"<<endl;
    
//    int i = 0;
//    cout << "20以内的奇数：" << endl;
//    // i++ 等于 i=i+1
//    for(i=0;i<20;i++)
//    {
//        if(i % 2 != 0)
//            cout << i << endl;
//    }
    
    
//    int i = 0;
//    // 定义单字符数组
//    char a[10] = {'a','b','c','d','e','f','g','h','i','j'};
//    // 奇数，前五个，a[0,2,4,6,8]
//    cout << "字符表中序号为奇数的前五个字母" << endl;
//    for(i=0;i<10;i=i+2)
//    {
//        cout << a[i] << endl;
//    }
    
    
    // 用于存放用户输入的字母
    // char a = ''; 会报错
//    char a;
//    int i = 0;
//    cout << "猜错我是哪个字母，最多猜五次喔：" << endl;
//    for(i=0;i<5;i++)
//    {
//        cin >> a;
//        if(a=='G')
//        {
//            cout << "被你猜中了！" << endl;
//            break;
//        }
//        else
//        {
//            cout << "你猜错了！接着猜吧！" << endl;
//        }
//        if(i==4 && a != 'G')
//        {
//            cout << "你已经猜过五次不能再猜了！！！" << endl;
//        }
//    }
    
    // 冒泡排序算法
//    int n, a[1000];
//    cin >> n;
//    for(int i=0;i<n;i++)
//    {
//        cin >> a[i];
//    }
//    for(int i=0;i<n-1;i++)
//    {
//        for(int j=1;j<n-i;j++)
//        {
//            if(a[j-1]>a[j])
//            {
//                int temp = a[j];
//                a[j] = a[j-1];
//                a[j-1] = temp;
//            }
//
//        }
//    }
//    for(int i=0;i<n;i++)
//    {
//        cout << a[i] << endl;
//    }
    
    
//    int a[10];
//    for (int i=0; i<10; i++) {
//        cin >> a[i];
//    }
//    // 冒泡，不断比较相邻的两个数，如果顺序错了，那么就交换
//    for (int i=0; i<9; i++) {
//        for (int j=1; j<10-i; j++) {
//            bool leftIsEven = a[j-1]%2 == 0;
//            bool rightIsEven =a[j]%2 == 0;
//            // 如果左边为偶数，右边为奇数，那么顺序也需要交换
//            if ((leftIsEven && !rightIsEven) || (leftIsEven == rightIsEven && a[j-1] > a[j])) {
//                int temp = a[j];
//                a[j] = a[j-1];
//                a[j-1] = temp;
//            }
//        }
//    }
//    for (int i=0; i<10; i++) {
//        cout << a[i] << endl;
//    }
    
//    int nFeet;
//    cin >> nFeet;
////    for (i=0; i<nFeet/2; i++) {
////        cin >> nFeet;
//        if (nFeet % 2 != 0)
//        {
//            cout << "0 0" << endl;
//        }
//        else if (nFeet % 4 != 0)
//        {
//            cout << nFeet/4+1 << " " << nFeet/2 << endl;
//        }
//        else
//            cout << nFeet/4 << " " << nFeet/2 << endl;
////    }
    
    
    int x,y,z;
    cout << "\t母鸡\t\t 公鸡\t\t 小鸡\t\t";
    for (x=0; x<=100; x++) {
        for (y=0; y<=100; y++) {
            for (z=0; z<=100; z++) {
                if ((x+y+z)==100 && (3*x+2*y+0.5*z)==100) {
                    cout << "\t" << x << "\t\t" << y << "\t\t" << z << endl;
                }
            }
        }
    }
    
    
    return 0;
}
// 什么样的程序是“好程序”
// 1，运行正确，解决问题
// 2，更容易被人看懂，只有那些易于被人读懂的程序才能够更长久的维护下去，才具有生命力
// 3，结构清晰，更美
// 对于初学者我们暂时不重视，你少使用了几个变量，你的程序行数比较少，你的程序运行起来快了一些

