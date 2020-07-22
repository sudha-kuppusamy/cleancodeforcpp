std::map < std::string, <float, float>> vitalsList =
{
  {"bpm", {70, 150}},
  {"spo2", {80, 100}},
  {"respRate", {30, 60}}
}

bool vitalsAreOk(float bpm, float spo2, float respRate);
