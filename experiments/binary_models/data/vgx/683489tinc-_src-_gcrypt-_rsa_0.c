static int FUN1(unsigned char **VAR1, VAR2 *VAR3) {
if(*VAR3 <= 0) {
return -1;
}

if((**VAR1 & 0x1f) == 0x1f) {
int VAR4 = 0;
bool VAR5;

while(*VAR3 > 0) {
VAR4 <<= 7;
VAR4 |= **VAR1 & 0x7f;
VAR5 = *(*VAR1)++ & 0x80;
(*VAR3)--;

if(!VAR5) {
break;
}
}

return VAR4;
} else {
(*VAR3)--;
return *(*VAR1)++ & 0x1f;
}
}