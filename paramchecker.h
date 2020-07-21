
//bool vitalsAreOk(float bpm, float spo2, float respRate);

template<typename T>
bool vitalsAreOk(T var)
{
  if (var < 80) 
    return false;
  else if (var > 150)
    return false;
  else
    return true;
}
template<typename T, typename... Args>
bool vitalsAreOk(T var1, Args... var2) {
  if(vitalsAreOk(var1)  ) 
    return vitalsAreOk(var2...);
  else
    return false;
}
