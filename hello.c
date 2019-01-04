#define q char
#define b printf
int main(){
q *d = "000000000038840?\
271>14131821?0???0??1010\
2018<007000000000000";q i;
for(i=0;i<strlen(d);i+=2){
if(i%4==0)b("\n");
q c=(((d[i]-48)&0xF)<<4)|\
(d[i+1]-48)&0xF;q j;
for(j=0;j<8;j++){b("%c",
c&1?'*':' ');c>>=1;}}}
