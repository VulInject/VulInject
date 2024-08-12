static void FUN1(struct  VAR1 *VAR2,
VAR3 *VAR4, u8 VAR5)
{
if (VAR2->VAR6) {
switch (VAR5) {
case 1:
*VAR4 = *((VAR7 *)VAR2->VAR6);
VAR2->VAR6 += 1;
*VAR4 |= 0xFFFFFF00;
break;
case 2:
*VAR4 = *((VAR7 *)VAR2->VAR6);
VAR2->VAR6 += 1;
*VAR4 |= (*((VAR7 *)VAR2->VAR6) << 8);
VAR2->VAR6 += 1;
*VAR4 |= 0xFFFF0000;
break;
case 3:
*VAR4 = *((VAR7 *)VAR2->VAR6);
VAR2->VAR6 += 1;
*VAR4 |= (*((VAR7 *)VAR2->VAR6) << 8);
VAR2->VAR6 += 1;
*VAR4 |= (*((VAR7 *)VAR2->VAR6) << 16);
VAR2->VAR6 += 1;
*VAR4 |= 0xFF000000;
break;
case 4:

memcpy(VAR4, VAR2->VAR6, VAR5);
VAR2->VAR6 += 4;
break;
default:

break;
}
} else {
*VAR4 = 0;
}

FUN2("", VAR8,
*VAR4, (VAR3)VAR2->VAR6, VAR5);

VAR2->VAR9 -= VAR5;
if (VAR2->VAR9 < 0)
VAR2->VAR9 = 0;
}