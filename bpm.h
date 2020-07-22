#include <IVital.h>

class bpm : public IVital
{
  bpm();
  ~bpm();
  RegisterVital(char* name, float &minValue, float &maxValue)
  {
    if(name != nullptr)
    {
        strcpy(name, "bpm");
        minValue = 70;
        maxValue = 150;
    }
  }
}
