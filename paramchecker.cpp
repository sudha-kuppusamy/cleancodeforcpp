
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
  if(compare(bpm, 70, 150) || compare (spo2, 80) || compare(respRate, 30, 60))
    return true;
  else
   return false;
}
