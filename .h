#ifndef GAMEPAD_H
#define GAMEPAD_H

#include <Xinput.h>

class Gamepad
{
public:
     // Function prototypes
     //---------------------//

     // Constructors
     Gamepad();
     Gamepad(int a_iIndex);

     // Utility functions
     XINPUT_STATE GetState(); // Return gamepad state
     int GetIndex();          // Return gamepad index
     bool Connected();        // Return true if gamepad is connected

private:
     // Member variables
     //---------------------//

     XINPUT_STATE m_State; // Current gamepad state
     int m_iGamepadIndex;  // Gamepad index (eg. 1,2,3,4)
};

#endif // GAMEPAD_H
