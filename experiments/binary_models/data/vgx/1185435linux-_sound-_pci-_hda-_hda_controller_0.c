int FUN1(struct VAR1 *VAR2, const char *VAR3)
{
struct VAR4 *VAR5 = &VAR2->VAR5;
int VAR6;

VAR6 = FUN2(&VAR5->VAR7, VAR2->VAR8->VAR9, &VAR10);
if (VAR6 < 0)
return VAR6;

VAR5->VAR8 = VAR2->VAR8;
FUN3(&VAR5->VAR11);
VAR5->VAR12 = VAR2->VAR12;
VAR5->VAR13 = VAR3;
VAR5->VAR14 = -1;
VAR5->VAR7.VAR15 = FUN4(VAR2);
if (VAR2->VAR16[0] != VAR17 ||
VAR2->VAR16[1] != VAR17)
VAR5->VAR7.VAR18 = true;
VAR5->VAR7.VAR19 = VAR2->VAR19;
if (VAR2->VAR20 & VAR21)
VAR5->VAR7.VAR22 = true;

if (VAR2->VAR20 & VAR23)
VAR5->VAR7.VAR24 = true;


VAR5->VAR7.VAR25 = 1;

return 0;
}