static int FUN1(VAR1 *VAR2, unsigned int VAR3)
{
int VAR4, VAR5, VAR6;
uint32_t VAR7;

VAR6 = FUN2(VAR2, &VAR5, &VAR4, VAR3);
if (VAR6)
return VAR6;


if (VAR2->VAR8 == VAR9) {
VAR7 = FUN3(VAR10, VAR5);
VAR7 |= 1 << VAR4;
VAR7 = FUN4(VAR10, VAR5, VAR7);
return VAR6;
}


VAR7 = FUN3(VAR10, VAR11);
FUN5("", VAR2->VAR12,
VAR11, (unsigned int) VAR7);
VAR7 |= 1 << VAR4;
FUN4(VAR10, VAR11, VAR7);

FUN5("",
VAR2->VAR12, VAR11, VAR4,
(unsigned int) VAR7, VAR3);


FUN4(VAR10, VAR5, 0);
VAR13[VAR2->VAR8][VAR3] = 0;

return 0;
}