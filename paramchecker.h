
//bool vitalsAreOk(float bpm, float spo2, float respRate);
static bool compareVitals(T var, T minVal, T maxVal);
static bool bool compareVitals(T var, T Val);

static int paramCount=1;
bool compareVitals(T var, T minVal, T maxVal)
{
  if((var < minVal) || (var > maxVal)
     return false;
   else
     return true;
}
     
bool compareVitals(T var, T Val)
{
  if(var < minVal)
     return false;
   else
     return true;
}
template<typename T>
bool vitalsAreOk(T var)
{
  bool ret;
  switch(paramCount)
  {
    case 1: 
      ret = compareVitals(var, 70, 150); //bpm
      break;
    case 2:
      ret = compareVitals(var, 80);     //spo2
      break;
    case 3:
      ret = compareVitals(var, 30, 60); //respRate
      break;
    default:
      // parameter count is exceeded than expected, not sure how to handle
      break;
  }
      
    paramCount++;
    return ret;
}
template<typename T, typename... Args>
bool vitalsAreOk(T var1, Args... var2) {
  if(vitalsAreOk(var1) && vitalsAreOk(var2...))
    return true;
  else
    return false;
}
