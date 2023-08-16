#include <cpp_api/navigation_bridge.h>
#include <iostream>

Navigation nav;
int main(int argc, char *argv[])
{
    nav.take_off(5.0);						//Taking Off
    nav.position_set(6.5,0,-5);				//Sending Position Setpoints
    nav.position_set(6.5,6.5,-5);
    nav.position_set(0,6.5,-5);
    nav.position_set(0,0,-5);
    nav.land(false);									//Landing
}
