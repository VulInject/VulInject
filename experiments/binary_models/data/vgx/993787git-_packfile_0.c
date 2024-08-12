unsigned long FUN1(const unsigned char *VAR1,
unsigned long VAR2, enum VAR3 *VAR4, unsigned long *VAR5)
{
unsigned VAR6;
size_t VAR7, VAR8;
unsigned long VAR9 = 0;

VAR8 = VAR1[VAR9++];
*VAR4 = (VAR8 >> 4) & 7;
VAR7 = VAR8 & 15;
VAR6 = 4;
while (VAR8 & 0x80) {
if (VAR2 <= VAR9 || (FUN2(long) - 7) < VAR6) {
FUN3("");
VAR7 = VAR9 = 0;
break;
}
VAR8 = VAR1[VAR9++];
VAR7 = FUN4(VAR7, FUN5(VAR8 & 0x7f, VAR6));
VAR6 += 7;
}
*VAR5 = FUN6(VAR7);
return VAR9;
}