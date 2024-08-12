int FUN1(const void *VAR1, size_t VAR2, char *VAR3, size_t VAR4)
{
const unsigned char *VAR5 = VAR1, *VAR6 = VAR5 + VAR2;
unsigned long VAR7;
unsigned char VAR8;
size_t VAR9;
int VAR10;

if (VAR5 >= VAR6)
goto VAR11;

VAR8 = *VAR5++;
VAR9 = VAR10 = snprintf(VAR3, VAR4, "", VAR8 / 40, VAR8 % 40);
if (VAR10 >= VAR4)
return -VAR12;
VAR3 += VAR10;
VAR4 -= VAR10;

while (VAR5 < VAR6) {
VAR7 = 0;
VAR8 = *VAR5++;
if (!(VAR8 & 0x80)) {
VAR7 = VAR8;
} else {
VAR7 = VAR8 & 0x7f;
do {
if (VAR5 >= VAR6)
goto VAR11;
VAR8 = *VAR5++;
VAR7 <<= 7;
VAR7 |= VAR8 & 0x7f;
} while (VAR8 & 0x80);
}
VAR9 += VAR10 = snprintf(VAR3, VAR4, "", VAR7);
if (VAR10 >= VAR4)
return -VAR12;
VAR3 += VAR10;
VAR4 -= VAR10;
}

return VAR9;

VAR11:
snprintf(VAR3, VAR4, "");
return -VAR13;
}