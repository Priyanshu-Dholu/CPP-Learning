// #include <iostream>
// using namespace std;
// class time{
//     int hour;
//     int min;
//     public:
//     // Getting Time
//         void get_time(int h,int m){
//             hour = h;
//             min = m;
//         }
//     // Making Time Function through object
//     // I am making time because I also have to return object
//         time add_time(time time1,time time2){
//             time t4;
//             t4.hour = time1.hour+time2.hour;
//             t4.min = time1.min+time2.min;

//             return t4;
//         }
//     // Displaying Time
//         void disp(){
//             cout<<"Hour: "<<hour<<endl;
//             cout<<"Minute: "<<min<<endl;
//         }

// };
// int main(){
//     time t1,t2,t3,result;
//     t1.get_time(2,3);
//     t2.get_time(3,6);
//     // We will pass object t1 and t2 as argument to time add_time function in class time
//     t3 = result.add_time(t1,t2);
//     t3.disp();
//     return 0;
// }

// Another Example

#include <iostream>
using namespace std;
class obj{
    int no;
    public:
        void setData(int num){
            no = num;
        }
        obj addNum(obj o1,obj o2){
            obj o3;
            o3.no = o1.no + o2.no;
            cout<<o3.no;
            return o3;
        }
};
int main(){
    obj a;
    a.setData(50);
    obj b;
    b.setData(5);

    // This Object is used to add object a and b
    // So we are passing object a and b as argument
    obj c;
    c.addNum(a,b);
    return 0;
}