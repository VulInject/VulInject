bool FUN1(struct VAR1 *VAR2,
struct VAR3 *VAR4,
struct VAR5 *VAR6,
int VAR7)
{
struct VAR8 *VAR9;
struct VAR10 *VAR11;
bool VAR12 = false;

VAR9 = FUN2(VAR2);
if (!VAR9)
goto VAR13;


if (!FUN3(VAR4, sizeof(*VAR11),
VAR6))
goto VAR13;

VAR11 = (struct VAR10 *)VAR4->VAR14;
VAR11->VAR15.VAR16 = VAR17;
FUN4(VAR11->VAR18, VAR9->VAR19->VAR20);
VAR11->VAR21 = VAR7;
VAR11->VAR22 = 0;

VAR12 = true;
VAR13:
FUN5(VAR9);
return VAR12;
}