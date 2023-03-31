namespace ESPSTD {
void printFlashMode() {
  if (ESP.getFlashChipMode() == FM_QIO) {
    Serial.println("The Flash Mode is QIO");
  }

  else if (ESP.getFlashChipMode() == FM_QOUT) {
    Serial.println("The Flash Mode is QOUT");
  }

  else if (ESP.getFlashChipMode() == FM_DIO) {
    Serial.println("The Flash Mode is DIO");
  }

  else if (ESP.getFlashChipMode() == FM_DOUT) {
    Serial.println("The Flash Mode is DOUT");
  }

  else if (ESP.getFlashChipMode() == FM_FAST_READ) {
    Serial.println("The Flash Mode is FAST_READ");
  }

  else if (ESP.getFlashChipMode() == FM_SLOW_READ) {
    Serial.println("The Flash Mode is SLOW_READ");
  }

  else {
    Serial.println("FlashMode is Unknown");
  }
}
}
