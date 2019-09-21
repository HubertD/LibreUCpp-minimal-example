#include <LibreUCpp/HAL/Port.h>
#include <LibreUCpp/HAL/Pin.h>

using namespace LibreUCpp::HAL;

extern "C" int main()
{
    Pin led { Port::D[12] };

    led.EnablePeripheral();
    led.SetDirection(Pin::Direction::OUTPUT);

    while (true)
    {
        led.Toggle();
        for (int i=0; i<1000000; i++) { asm("nop"); }
    }
}
