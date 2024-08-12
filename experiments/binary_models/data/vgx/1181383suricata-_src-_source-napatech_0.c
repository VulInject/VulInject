static int FUN1(uint8_t VAR1[16], uint8_t VAR2[16]) {
uint16_t VAR3;
for (VAR3 = 0; VAR3 < 16; ++VAR3) {
if (VAR1[VAR3] < VAR2[VAR3]) {
return -1;
} else if (VAR1[VAR3] > VAR2[VAR3]) {
return 1;
} 
}


return 0;
}