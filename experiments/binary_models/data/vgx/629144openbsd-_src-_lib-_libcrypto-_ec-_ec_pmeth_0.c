static int
FUN1(VAR1 *VAR2, unsigned char *VAR3, VAR4 *VAR5)
{
int VAR6;
size_t VAR7;
const VAR8 *VAR9 = NULL;
VAR10 *VAR11;
VAR12 *VAR13 = VAR2->VAR14;

if (!VAR2->VAR15 || !VAR2->VAR16) {
FUN2(VAR17);
return 0;
}

VAR11 = VAR13->VAR18 ? VAR13->VAR18 : VAR2->VAR15->VAR15.VAR19;
if (!VAR3) {
const VAR20 *VAR21;
VAR21 = FUN3(VAR11);
*VAR5 = (FUN4(VAR21) + 7) / 8;
return 1;
}
VAR9 = FUN5(VAR2->VAR16->VAR15.VAR19);



VAR7 = *VAR5;

VAR6 = FUN6(VAR3, VAR7, VAR9, VAR11, 0);
if (VAR6 <= 0)
return 0;

*VAR5 = VAR6;

return 1;
}