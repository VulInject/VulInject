static int FUN1(struct VAR1 *VAR2)
{
int VAR3;
unsigned int VAR4, VAR5;

VAR4 = (VAR2->VAR6 || VAR2->VAR7) ? 0x01 : 0x00;
VAR5 = (VAR2->VAR6 || VAR2->VAR8) ? 0x01 : 0x00;

VAR3 = FUN2(VAR2->VAR9,
FUN3(VAR10, VAR11,
VAR12, VAR13), VAR4);
if (VAR3 < 0)
return VAR3;

VAR3 = FUN2(VAR2->VAR9,
FUN3(VAR10, VAR11,
VAR12, VAR14), VAR5);
if (VAR3 < 0)
return VAR3;

return 0;
}