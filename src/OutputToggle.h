 #ifndef OutputToggle_h
  #define OutputToggle_h
  #if ARDUINO >= 100
    #include <Arduino.h>
    #else
    #include <WProgram.h>
  #endif // end of if ARDUINO
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
