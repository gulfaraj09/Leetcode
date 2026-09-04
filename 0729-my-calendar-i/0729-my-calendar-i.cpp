class MyCalendar {
private:
    vector<pair<int,int>> calender;
public:
    bool book(int startTime, int endTime) {
        for (auto [s, e] : calender){
            if(e > startTime && s < endTime) return false;
        }
        calender.emplace_back(startTime, endTime);
        return true;
    }
};

/**
 * Your MyCalendar object will be instantiated and called as such:
 * MyCalendar* obj = new MyCalendar();
 * bool param_1 = obj->book(startTime,endTime);
 */