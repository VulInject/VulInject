static int FUN1(struct VAR1 *VAR2, u8 VAR3)
{
switch (VAR2->VAR2) {
case VAR4:
VAR2->VAR5 = VAR3 & 0x7f;
VAR2->VAR2 = (VAR3 & 0x80) ? VAR6
: VAR7;

VAR2->VAR8 = 0;
VAR2->VAR9 = 0;
return 0;
case VAR6:
VAR2->VAR5 |= VAR3 << 7;
VAR2->VAR2 = VAR7;
return 0;
case VAR7:
VAR2->VAR10 = VAR3;

if (VAR2->VAR10 > sizeof(VAR2->VAR8))
return -VAR11;

VAR2->VAR2 = VAR2->VAR10 ? VAR12 : VAR4;
return 0;
case VAR12:
VAR2->VAR8 |= ((VAR13)VAR3) << (VAR2->VAR9 * 8);
VAR2->VAR9++;
if (VAR2->VAR9 >= VAR2->VAR10)
VAR2->VAR2 = VAR4;
return 0;
default: 
FUN2(1);
return -VAR14;
}
}