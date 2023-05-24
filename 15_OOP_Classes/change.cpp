#include<iostream>
#include<vector>
using namespace std;

class Time {
private:
	int hours, minutes, seconds, total_seconds;

public:
	Time(int total_seconds) {
		this->total_seconds = total_seconds;
		get_hms();
		SetTime(hours, minutes, seconds);
	}

	void get_hms(){
		int hrs = total_seconds / 3600;
		int rsecs = total_seconds - (hrs * 3600);
		int mins = rsecs / 60;
		rsecs -= (mins*60);
		this->hours = hrs;
		this->minutes = mins;
		this->seconds = rsecs;
	}
	void SetTime(int hours, int minutes, int seconds) {
		this->hours = hours;
		this->minutes = minutes;
		this->seconds = seconds;
	}

	int GetTotalSeconds() {
		return hours * 60 * 60 + minutes * 60 + seconds;
	}

	int GetTotalMinutes() {
		return hours * 60 + minutes;
	}

	void PrintHHMMSS() {
		cout << hours << ":" << minutes << ":" << seconds << "\n";
	}

	int GetHours() {
		return hours;
	}

	void SetHours(int hours) {
        if (hours < 0)
            hours = 0;
		this->hours = hours;
	}

	int GetMinutes() {
		return minutes;
	}

	void SetMinutes(int minutes) {
		if (minutes < 0)
			minutes = 0;
		this->minutes = minutes;
	}

	int GetSeconds() {
		return seconds;
	}
    
	void SetSeconds(int seconds) {
		if (seconds < 0)
			seconds = 0;
		this->seconds = seconds;
	}
};

int main() {
	Time t(8274);
	t.PrintHHMMSS();
	return 0;
}
