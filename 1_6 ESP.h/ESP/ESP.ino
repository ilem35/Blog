#include <Esp.h>
#include "ESPSTD.h"

void setup()
{
  Serial.begin(115200);
}

void loop()
{
  Serial.printf("Chip Revision = %u\n", ESP.getChipRevision());
  Serial.printf("SdkVersion = %s\n\n", ESP.getSdkVersion());

  Serial.printf("CpuFreqMHz = %u Mhz\n", ESP.getCpuFreqMHz());
  Serial.printf("Cycle Count = %u\n", ESP.getCycleCount());

  Serial.printf("total Psram size = %u MB\n", ESP.getPsramSize()/1000000);
  Serial.printf("available Psram = %u MB\n", ESP.getFreePsram()/1000000);

  Serial.printf("total Flash Size  = %u MB\n", ESP.getFlashChipSize()/1000000);
  Serial.printf("Flash Speed = %u Mhz\n\n", ESP.getFlashChipSpeed()/1000000);

  ESPSTD::printFlashMode();
  Serial.printf("lowest level of free Psram since boot = %u MB\n", ESP.getMinFreePsram()/1000000);
  Serial.printf("largest block of Psram that can be allocated at once = %u MB\n\n", ESP.getMinFreePsram()/1000000);

  delay(5000);
}
