class IVital
{
  IVital();
  ~IVital();
  virtual void RegisterVital(char* name, float &minValue, float &maxValue) = 0;
}
