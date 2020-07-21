
// static bool compare(float param, float minValue, float maxValue);
// static bool compare(float param, float minValue);

// static bool compare(float param, float minValue, float maxValue)
// {
//   return (param < minValue) || (param > maxValue);
// }

// static bool compare(float param, float minValue)
// {
//   return (param < minValue);
// }

template<typename T>
bool vitalsAreOk(T var)
{
  if ((var < 80) || (var > 60))
    return false;
  else
    return true;
}
template<typename T, typename... Args>
bool vitalsAreOk(T var1, Args... var2) {
  if(vitalAreOk(var1)  ) 
    return vitalsAreOk(var2...);
  else
    return false;
}
//   if(compare(bpm, 70, 150) || compare (spo2, 80) || compare(respRate, 30, 60))
//     return true;
//   else
//    return false;
// }
