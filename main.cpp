/* Leobardo Delgado 
Unit 8, Part 2  CPP - STRUCT VERSION
2-24-2020
*/

#include "appDate.h" 
#include "timeOfDay.h"
#include "event.h"

/** 
* main STRUCT instantiations of event, timeOfDay, and appDate
* @author (Dr. Tysn McMillan)
* @version (2-24-2020)
*/


void createEvent(timeOfDay t, appDate a, event e)
{
  short h = 0, m = 0, s = 0;
  short mo = 0, d = 0;
  int y = 0, decision = 0;
  string urgent = "";
  string eName = "";

  //populate timeOfDay 
  cout << "Enter hour: ";
  cin >> h;
  t.hour = h;  //set the values based upon usr input 

  cout << "Enter Minutes: ";
  cin >> m;
  t.minute = m;   //set the values based upon usr input 

  cout << "Enter Seconds: ";
  cin >> s;
  t.second = s;  //set the values based upon usr input 


  //populate appDate 
  cout << "Enter Month: ";
  cin >> mo;
  a.month = mo; //set the values based upon usr input 

  cout << "Enter Day: ";
  cin >> d;
  a.dayOfMonth = d;   //set the values based upon usr input 

  cout << "Enter Year: ";
  cin >> y;
  a.year = y;  //set the values based upon usr input 

  //set event details
  //get event info 
  cout << "Enter Event Name: ";
  cin >> eName;
  e.eventName = eName;

  cout << "Is the event urgent? (1 = yes , 2 = no: )";

  cin >> decision;
  if(decision == 1)
  {
    e.isUrgent = true;
    urgent = "yes";
  }
  else if (decision == 2)
  {
    e.isUrgent = false;
    urgent = "no";
  }
  else
  {
    cout << "invalid input";
  }

  //put dMain in event eMain
  e.eventDate = a;
  //put tMain in event eMain
  e.eventTime = t;

  //print the event 
  cout << "\nEVENT DETAILS: " << endl;
  cout << "Event name: " + e.eventName << endl;
  cout << "\nIs urgent: " << e.isUrgent << "-->" << urgent << endl;
  cout << e.toString();  //print the date and time calling toString() override

}

int main() 
{
// declare the instances of the STRUCT we need for this work
event eMain;

//Create a timeOfDay to share with eMain
timeOfDay tMain;

//Create a day of month to share with eMain
appDate dMain;

createEvent(tMain, dMain, eMain); //populate and print new event

return 0;
}