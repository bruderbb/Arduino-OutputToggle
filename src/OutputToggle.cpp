#include <OutputToggle.h>


// constructor
OutputToggle::OutputToggle (uint8_t pin)
{
  pin_ = pin;
}

// functions
void OutputToggle::begin ()
{
  // reset output pin
  pinStatus_ = false;
  digitalWrite (pin_, pinStatus_);
}

bool OutputToggle::toggle ()
{
  // toggle pin
  pinStatus_ = ! pinStatus_;
  // writes new output
  digitalWrite(pin_, pinStatus_);
  return pinStatus_;
}

bool OutputToggle::currentValue ()
{
  // read current pin status
  return pinStatus_;
}
