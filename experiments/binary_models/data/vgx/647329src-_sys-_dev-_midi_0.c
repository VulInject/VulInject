int
FUN1(dev_t VAR1, int VAR2, int VAR3, struct VAR4 *VAR5)
{
struct VAR6 *VAR7;
int VAR8;

VAR7 = (struct VAR6 *)FUN2(&VAR9, FUN3(VAR1));
if (VAR7 == NULL)
return VAR10;
VAR8 = 0;
if (VAR7->VAR2) {
VAR8 = VAR11;
goto VAR12;
}
FUN4(&VAR7->VAR13);
FUN4(&VAR7->VAR14);
VAR7->VAR15 = 0;
VAR7->VAR13.VAR16 = VAR7->VAR14.VAR16 = 0;
VAR7->VAR2 = VAR2;
VAR8 = VAR7->VAR17->open(VAR7->VAR18, VAR2, VAR19, VAR20, VAR7);
if (VAR8)
VAR7->VAR2 = 0;
VAR12:
FUN5(&VAR7->VAR1);
return VAR8;
}