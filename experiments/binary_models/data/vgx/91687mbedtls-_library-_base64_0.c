int FUN1(unsigned char *VAR1, size_t VAR2, VAR3 *VAR4,
const unsigned char *VAR5, size_t VAR6)
{
size_t VAR7, VAR8;
int VAR9, VAR10, VAR11;
unsigned char *VAR12;

if (VAR6 == 0) {
*VAR4 = 0;
return 0;
}

VAR8 = VAR6 / 3 + (VAR6 % 3 != 0);

if (VAR8 > (VAR13 - 1) / 4) {
*VAR4 = VAR13;
return VAR14;
}

VAR8 *= 4;

if ((VAR2 < VAR8 + 1) || (NULL == VAR1)) {
*VAR4 = VAR8 + 1;
return VAR14;
}

VAR8 = (VAR6 / 3) * 3;

for (VAR7 = 0, VAR12 = VAR1; VAR7 < VAR8; VAR7 += 3) {
VAR9 = *VAR5++;
VAR10 = *VAR5++;
VAR11 = *VAR5++;

*VAR12++ = FUN2((VAR9 >> 2) & 0x3F);
*VAR12++ = FUN2((((VAR9 &  3) << 4) + (VAR10 >> 4))
& 0x3F);
*VAR12++ = FUN2((((VAR10 & 15) << 2) + (VAR11 >> 6))
& 0x3F);
*VAR12++ = FUN2(VAR11 & 0x3F);
}

if (VAR7 < VAR6) {
VAR9 = *VAR5++;
VAR10 = ((VAR7 + 1) < VAR6) ? *VAR5++ : 0;

*VAR12++ = FUN2((VAR9 >> 2) & 0x3F);
*VAR12++ = FUN2((((VAR9 & 3) << 4) + (VAR10 >> 4))
& 0x3F);

if ((VAR7 + 1) < VAR6) {
*VAR12++ = FUN2(((VAR10 & 15) << 2) & 0x3F);
} else {
*VAR12++ = '';
}

*VAR12++ = '';
}

*VAR4 = VAR12 - VAR1;
*VAR12 = 0;

return 0;
}