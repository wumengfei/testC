//
//  main.cpp
//  testC
//
//  Created by 吴梦飞 on 15/9/14.
//  Copyright (c) 2015年 吴梦飞. All rights reserved.
//

#include <iostream>
#include <vector>
using namespace std;
//class solution{
//public:
//    vector<vector<int>> generate(int numRows) {
//        vector<vector<int>> vals;
//        vals.resize(numRows);
//        for (int i=0; i<numRows; i++) {
//            vals[i].resize(i+1);
//            vals[i][0]=1;
//            vals[i][vals[i].size()-1]=1;
//            for (int j=1; j<vals[i].size()-1; j++) {
//                vals[i][j]=vals[i-1][j-1]+vals[i-1][j];
//            }
//        }
//        for (int k=0; k<numRows; k++) {
//            for (int m=0; m<vals[k].size(); m++) {
//                cout<<vals[k][m];
//            }
//            cout<<endl;
//        }
//        return vals;
//    }
    
//triangle2
//    vector<int> getRow(int rowIndex){
//        vector<int> vals;
//        vals.resize(rowIndex+1,1);
//        
//        for (int i=0; i<rowIndex+1; i++) {
//            for (int j=i-1; j>=1; j--) {
//                vals[j]=vals[j]+vals[j-1];
//            }
//        }
//        for (int k=0; k<rowIndex+1; k++) {
//            cout<<vals[k]<<' ';
//        }
//        return vals;
//    }
//};

class A{
public:
    void print(){
        cout<<"this is an A class"<<endl;
    }
};
class B{
public:
    void print(){
        cout<<"this is a B class"<<endl;
    }
};
int main(int argc, const char * argv[]) {
    // insert code here...
    A a;
    B b;
    a.print();
    b.print();
    
    return 0;
}
