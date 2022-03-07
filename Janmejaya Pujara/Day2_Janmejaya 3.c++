#include <iostream>
#include<ctime>
using namespace std;

class Date{
    public: 
        int day,month,year;
    Date setDate(){
        time_t now = time(0);
        tm *ltm = localtime(&now);
        day = ltm->tm_mday;
        month = 1 + ltm->tm_mon;
        year = 1900 + ltm->tm_year;
        
        Date temp;
        temp.day = day;
        temp.month = month;
        temp.year = year;
        
        return temp;
    }
    void getDate(){
        cout << "Day " << day <<"\n";
        cout << "Month: " << month <<"\n";
        cout << "Year: " << year <<"\n";
    }
    Date setDob(int d,int m,int y){
        Date temp;
        temp.day = d;
        temp.month = m;
        temp.year = y;
        
        return temp;
    }
    void findAge(Date ad, Date bd){
        int day,month,year;
        year = ad.year - bd.year;
        month = bd.month - ad.month;
        day = bd.day - ad.day;
        
        cout<<"You are "<<year<<" years "<<month<<" month and "<<day<<"'s old..! \n";
    }
    
};

class Time{
  private:
    int hr,min,sec;
    
public:
    void setTime(){
        time_t now = time(0);
        tm *ltm = localtime(&now);
        
        hr = ltm->tm_hour;
        min = ltm->tm_min;
        sec = ltm->tm_sec;
        
    }
    void getTime(){
        cout << "Hour: " << hr <<"\n";
        cout << "Min: " << min <<"\n";
        cout << "Sec: " << sec <<"\n";
        
    }
    Time sleepTime(Time at,Time st){
        Time temp; 
        temp.hr = at.hr-st.hr;
        temp.min = at.min-st.min;
        temp.sec = at.sec-st.sec;
        return temp;
    }
};

int main()
{
    Time t1,t2,t3;
    t1.setTime();
    t2.setTime();
    t1.getTime();
    cout<<"\n";
    t3 = t1.sleepTime(t1,t2);
    t3.getTime();
    cout<<"\n";
    int day, month, year;
    Date d1,d2,bd1;
    d2 = d1.setDate();
    d1.getDate();
    cout<<"\n";
    cout<<"Enter Birth-day: \n";
    cin>>day;
    cout<<"Enter Birth-Month  \n";
    cin>>month;
    cout<<"Enter Birth-Year: \n";
    cin>>year;
    bd1 = d1.setDob(day,month,year);
    
    d1.findAge(d2,bd1);
    return 0;
}
