void fade_white() {
#ifdef DEBUG
  Serial.println("<100");
  Serial.print("RedNow: ");
  Serial.println(RedNow);
  Serial.print("GreenNow: ");
  Serial.println(GreenNow);
  Serial.print("BlueNow: ");
  Serial.println(BlueNow);
#endif
  RedNow = RedNow +  1;
  GreenNow = GreenNow +  1;
  BlueNow = BlueNow +  1;
  if (RedNow > 255) RedNow = 255;
  if (GreenNow > 255) GreenNow = 255;
  if (BlueNow > 255) BlueNow = 255;
  if ((RedNow == 255) && (GreenNow == 255) && (BlueNow == 255)) {
#ifdef DEBUG
    Serial.println("((RedNow == 255) && (GreenNow == 255) && (BlueNow == 255))");
#endif
    state = 2;
    trig();
  }
  dmxbuffer[1] = (RedNow * RedNow) / 255;
  dmxbuffer[2] = (GreenNow * GreenNow) / 255;
  dmxbuffer[3] = (BlueNow * BlueNow) / 255;
  copyDMXToOutput();
  i = 0;
}

void fade_pink() {
#ifdef DEBUG
  Serial.println("fade_pink()");
#endif
  jRedNow = jRedNow +  1;
  jGreenNow = 0;
  jBlueNow = jBlueNow +  1;
  if (jRedNow > 255) jRedNow = 255;
  if (jBlueNow > 200) jBlueNow = 200;
  dmxbuffer[1] = (jRedNow * jRedNow) / 255;
  dmxbuffer[2] = (jGreenNow * jGreenNow) / 255;
  dmxbuffer[3] = (jBlueNow * jBlueNow) / 255;
  copyDMXToOutput();
  j = 0;
}

void fade_lavender() {
#ifdef DEBUG
  Serial.println("fade_lavender()");
#endif
  kRedNow = kRedNow +  1;
  kGreenNow = 0;
  kBlueNow = kBlueNow +  1;
  if (kRedNow > 200) kRedNow = 200;
  if (kBlueNow > 255) kBlueNow = 255;
  dmxbuffer[1] = (kRedNow * kRedNow) / 255;
  dmxbuffer[2] = (kGreenNow * kGreenNow) / 255;
  dmxbuffer[3] = (kBlueNow * kBlueNow) / 255;
  copyDMXToOutput();
  k = 0;
}
void fade_pink_lavender() {
#ifdef DEBUG
  Serial.println("fade_pink_lavender()");
#endif
  if (pink_lav = 0) {
    lRedNow = lRedNow +  1;
    lGreenNow = 0;
    lBlueNow = lBlueNow +  1;
    if (lRedNow > 255) lRedNow = 255;
    if (lBlueNow > 200) lBlueNow = 200;
    if ((lRedNow == 255) && (lBlueNow == 200)) {
      pink_lav = 1;
    }
  }
  if (pink_lav = 1) {
    lRedNow = lRedNow -  1;
    lGreenNow = 0;
    lBlueNow = lBlueNow +  1;
    if (lRedNow > 200) lRedNow = 200;
    if (lBlueNow > 255) lBlueNow = 255;
    if ((lRedNow == 200) && (lBlueNow == 255)) {
      pink_lav = 2;
    }
  }
  if (pink_lav = 2) {
    lRedNow = lRedNow +  1;
    lGreenNow = 0;
    lBlueNow = lBlueNow -  1;
    if (lRedNow > 255) lRedNow = 255;
    if (lBlueNow > 200) lBlueNow = 200;
    if ((lRedNow == 255) && (lBlueNow == 200)) {
      pink_lav = 1;
    }
  }
  dmxbuffer[1] = (lRedNow * lRedNow) / 255;
  dmxbuffer[2] = (lGreenNow * lGreenNow) / 255;
  dmxbuffer[3] = (lBlueNow * lBlueNow) / 255;
  copyDMXToOutput();
  l = 0;
}

void fade_seq() {
#ifdef DEBUG
  Serial.println("fade_seq()");
#endif
  mRedNow = mRedNow - 1;
  mGreenNow = mGreenNow - 1;
  mBlueNow = mBlueNow - 1;
  if (mRedNow > 80) mRedNow = 80;
  if (mGreenNow > 50) mGreenNow = 50;
  if (mBlueNow > 0) mBlueNow = 0;
  if ((mRedNow == 80) && (mGreenNow == 50) && (mBlueNow == 0)) {
    state = 0;
    h = 0;
  }

  dmxbuffer[1] = (mRedNow * mRedNow) / 255;
  dmxbuffer[2] = (mGreenNow * mGreenNow) / 255;
  dmxbuffer[3] = (mBlueNow * mBlueNow) / 255;
  copyDMXToOutput();
  h = 0;
}

