static VAR1
FUN1(zip_uint32_t VAR2, VAR3 *VAR4) {
if (VAR2 < 0x0080) {
VAR4[0] = VAR2 & 0xff;
return 1;
}
if (VAR2 < 0x0800) {
VAR4[0] = (VAR3)(VAR5 | ((VAR2 >> 6) & 0x1f));
VAR4[1] = (VAR3)(VAR6 | (VAR2 & 0x3f));
return 2;
}
if (VAR2 < 0x10000) {
VAR4[0] = (VAR3)(VAR7 | ((VAR2 >> 12) & 0x0f));
VAR4[1] = (VAR3)(VAR6 | ((VAR2 >> 6) & 0x3f));
VAR4[2] = (VAR3)(VAR6 | (VAR2 & 0x3f));
return 3;
}
VAR4[0] = (VAR3)(VAR8 | ((VAR2 >> 18) & 0x07));
VAR4[1] = (VAR3)(VAR6 | ((VAR2 >> 12) & 0x3f));
VAR4[2] = (VAR3)(VAR6 | ((VAR2 >> 6) & 0x3f));
VAR4[3] = (VAR3)(VAR6 | (VAR2 & 0x3f));
return 4;
}