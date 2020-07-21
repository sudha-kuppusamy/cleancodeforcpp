
bool compare(float param, float minValue, float maxValue)
{
  return (param < minValue) || (param > maxValue);
}

book compare(float param, float minValue)
{
  return (param < minValue)
}

bool vitalsAreOk(float bpm, float spo2, float respRate) {
  bool ret = true;
  ret = compare(bpm, 70, 150);
  if(!ret) return ret;
  
  ret = compare (spo2, 80)
  if(!ret) return false;
  
  ret = compare(erspRate, 30, 60);
  if(!ret) return false;
  
   return true;
}
