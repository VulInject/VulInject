static int
FUN1(VAR1 *VAR2, mrb_value VAR3, mrb_value VAR4, mrb_int VAR5, int VAR6)
{
mrb_int VAR7;
unsigned long VAR8;
mrb_int VAR9, VAR10;
char *VAR11, *VAR12, *VAR13;

VAR11 = FUN2(VAR3);
VAR10 = FUN3(VAR3);

if (VAR10 == 0)  
return 0;

if (VAR6 != 0 && VAR6 < 3) {  
VAR6 = 45;
} else if (VAR6 >= 3) {
VAR6 -= VAR6 % 3;
}

VAR7 = (VAR10+2) / 3 * 4;
if (VAR6 > 0) {
VAR7 += (VAR10 / VAR6) + ((VAR10 % VAR6) == 0 ? 0 : 1);
}
VAR4 = FUN4(VAR2, VAR4, VAR5 + VAR7);
VAR12 = FUN2(VAR4) + VAR5;

VAR13 = VAR12;
for (VAR9 = 3; VAR10 >= 3; VAR10 -= 3, VAR9 += 3) {
VAR8 = (unsigned char)*VAR11++ << 16;
VAR8 += (unsigned char)*VAR11++ << 8;
VAR8 += (unsigned char)*VAR11++;

*VAR12++ = VAR14[(VAR8 >> 18) & 0x3f];
*VAR12++ = VAR14[(VAR8 >> 12) & 0x3f];
*VAR12++ = VAR14[(VAR8 >>  6) & 0x3f];
*VAR12++ = VAR14[ VAR8        & 0x3f];

if (VAR9 == VAR6) {
*VAR12++ = '';
VAR9 = 0;
}
}
if (VAR10 == 1) {
VAR8 = (unsigned char)*VAR11++ << 16;
*VAR12++ = VAR14[(VAR8 >> 18) & 0x3f];
*VAR12++ = VAR14[(VAR8 >> 12) & 0x3f];
*VAR12++ = '';
*VAR12++ = '';
VAR9 += 3;
} else if (VAR10 == 2) {
VAR8 = (unsigned char)*VAR11++ << 16;
VAR8 += (unsigned char)*VAR11++ << 8;
*VAR12++ = VAR14[(VAR8 >> 18) & 0x3f];
*VAR12++ = VAR14[(VAR8 >> 12) & 0x3f];
*VAR12++ = VAR14[(VAR8 >>  6) & 0x3f];
*VAR12++ = '';
VAR9 += 3;
}
if (VAR9 > 0 && VAR6 > 0) {
*VAR12++ = '';
}

return (int)(VAR12 - VAR13);
}