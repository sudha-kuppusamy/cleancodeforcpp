#include <IVital.h>

class bpm : public IVital
{
  bpm();
  virtual ~bpm();
  virtual RegisterVital(char* name, float &minValue, float &maxValue);
}
