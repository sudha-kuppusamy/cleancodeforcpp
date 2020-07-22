class IVital
{
  IVital();
  virtual ~IVital();
  virtual void RegisterVital(char* name, float &minValue, float &maxValue) = 0;
}
