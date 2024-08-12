static int FUN1(unsigned VAR1,
unsigned VAR2, unsigned VAR3, unsigned VAR4,
unsigned VAR5, struct VAR6 *VAR7)
{
struct VAR8 *VAR9 = VAR7->VAR9;
unsigned int VAR10;

switch (VAR7->VAR11.VAR12) {
case VAR13:
if (VAR1 < 16) {
VAR10  = FUN2(VAR2,   &VAR7->VAR14.VAR2);
VAR10 |= FUN2(VAR3, &VAR7->VAR14.VAR3);
VAR10 |= FUN2(VAR4,  &VAR7->VAR14.VAR4);
VAR9->VAR15[VAR1] = VAR10;
}
break;
case VAR16:
if (VAR1 < 256) {
VAR10 = (VAR2 >> 8) << 16;
VAR10 |= (VAR3 >> 8) << 8;
VAR10 |= VAR4 >> 8;
FUN3(VAR17, VAR18 + (VAR1 * 4), VAR10);
}
break;
default:
return 1;   
}
return 0;
}