static int FUN1(uint16_t VAR1);


static int FUN1(uint16_t VAR1) {
if ((VAR1 & 0x0f0f) != 0x0a0a) {
return 0;
} else {
VAR2 *VAR3 = (VAR2 *)&VAR1;
return VAR3[0] == VAR3[1] ? 1 : 0;
}


}