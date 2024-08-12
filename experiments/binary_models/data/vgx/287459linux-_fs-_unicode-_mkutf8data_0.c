static unsigned int FUN1(const char *VAR1)
{
const unsigned char *VAR2 = (const unsigned char*)VAR1;
unsigned int VAR3 = 0;

if (*VAR2 < 0x80) {
VAR3 = *VAR2;
} else if (*VAR2 < VAR4) {
VAR3 = *VAR2++ & 0x1F;
VAR3 <<= VAR5;
VAR3 |= *VAR2 & 0x3F;
} else if (*VAR2 < VAR6) {
VAR3 = *VAR2++ & 0x0F;
VAR3 <<= VAR5;
VAR3 |= *VAR2++ & 0x3F;
VAR3 <<= VAR5;
VAR3 |= *VAR2 & 0x3F;
} else {
VAR3 = *VAR2++ & 0x0F;
VAR3 <<= VAR5;
VAR3 |= *VAR2++ & 0x3F;
VAR3 <<= VAR5;
VAR3 |= *VAR2++ & 0x3F;
VAR3 <<= VAR5;
VAR3 |= *VAR2 & 0x3F;
}
return VAR3;
}