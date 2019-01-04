int main() {
  char *d = "000000000038840?271>14131821?0???0??10102018<007000000000000";
  char i;
  for (i = 0; i < strlen(d); i+=2) {
    if (i%4==0) printf("\n");
    char c = (((d[i]-48)&0xF)<<4)|(d[i+1]-48)&0xF;
    char j;
    for (j = 0; j < 8; j++) {
      printf("%c", c&1?'*':' ');
      c>>=1;
    }
  }
}
