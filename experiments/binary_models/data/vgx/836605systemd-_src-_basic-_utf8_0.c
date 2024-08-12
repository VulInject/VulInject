VAR1 FUN1(char *VAR2, char32_t VAR3) {

if (VAR3 < (1 << 7)) {
if (VAR2)
VAR2[0] = VAR3 & 0x7f;
return 1;
} else if (VAR3 < (1 << 11)) {
if (VAR2) {
VAR2[0] = 0xc0 | ((VAR3 >> 6) & 0x1f);
VAR2[1] = 0x80 | (VAR3 & 0x3f);
}
return 2;
} else if (VAR3 < (1 << 16)) {
if (VAR2) {
VAR2[0] = 0xe0 | ((VAR3 >> 12) & 0x0f);
VAR2[1] = 0x80 | ((VAR3 >> 6) & 0x3f);
VAR2[2] = 0x80 | (VAR3 & 0x3f);
}
return 3;
} else if (VAR3 < (1 << 21)) {
if (VAR2) {
VAR2[0] = 0xf0 | ((VAR3 >> 18) & 0x07);
VAR2[1] = 0x80 | ((VAR3 >> 12) & 0x3f);
VAR2[2] = 0x80 | ((VAR3 >> 6) & 0x3f);
VAR2[3] = 0x80 | (VAR3 & 0x3f);
}
return 4;
}

return 0;
}