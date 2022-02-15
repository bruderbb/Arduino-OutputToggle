#ifndef OutputToggle_h
#define OutputToggle_h
#include <Arduino.h>

  class OutputToggle
  {
  public:
    // constructor
    OutputToggle (
      const uint8_t pin   // the input pin
    );

    // functions
    void begin ();        // instantiates the Toggle function
    bool toggle ();       // toggles the output pin
    bool currentValue (); // Returnes the current pin status


  private:
    uint8_t   pin_;       // the input pin
    bool      pinStatus_; // current pinStatus
  }; // end of class OutputToggle
#endif
