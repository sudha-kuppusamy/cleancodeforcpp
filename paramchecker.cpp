
static bool compare(float param, float minValue, float maxValue);
static bool compare(float param, float minValue);

static bool compare(float param, float minValue, float maxValue)
{
  return (param < minValue) || (param > maxValue);
}

static bool compare(float param, float minValue)
{
  return (param < minValue);
}

bool vitalsAreOk(float bpm, float spo2, float respRate) {
  bool ret = true;
  ret = compare(bpm, 70, 150);
  if(!ret) return ret;
  
  ret = compare (spo2, 80);
  if(!ret) return ret;
  
  ret = compare(respRate, 30, 60);
  if(!ret) return ret;
  
   return ret;
}
