#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h> // For sleep() function


void setAlarm(int *alarmHour, int *alarmMinute){
	printf("Set alarm time (HH MM): ");
	scanf("%d %d", alarmHour, alarmMinute);
}

void getCurrentTime(int *currentHour, int *currentMinute){
	time_t now = time(NULL);
	struct tm *local = localtime(&now);
	*currentHour = local->tm_hour;
	*currentMinute = local->tm_min;
}

int main(){
	int alarmHour, alarmMinute;
	setAlarm(&alarmHour, &alarmMinute);

	printf("Alarm set for %02d\n", alarmHour, alarmMinute);

	while(1){
		int currentHour, currentMinute;
		getCurrentTime(&currentHour, &currentMinute);

		if(currentHour == alarmHour && currentMinute == alarmMinute){
			printf("ALARM! Time to wakeup!\n"); // Exit the Loop after the alarm goes of
		}
		
		sleep(30); // Check every 30 seconds to avoid exessive CPU usage
	}
	
	return 0;
}
