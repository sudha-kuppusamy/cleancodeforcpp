
//bool vitalsAreOk(float bpm, float spo2, float respRate);

static int paramCount=1;
template<typename T>
bool vitalsAreOk(T var)
{
  bool ret;
  switch(paramCount)
  {
    case 1: 
      ret = ((var < 70) || (var > 150)) ? true : false; //bpm
      break;
    case 2:
      ret = (var < 80) ? true : false;     //spo2
      break;
    case 3:
      ret = ((var < 30) || (var > 60)) ? true : false; //respRate
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
