static int FUN1(struct VAR1 *VAR2, u32 VAR3,
int VAR4, unsigned long VAR5)
{
struct set_schib_struct VAR6;
int VAR7 = -VAR8;

FUN2(VAR2->VAR9);
if (!VAR2->private->VAR10)
goto VAR11;

VAR7 = FUN3(VAR2, VAR3, VAR4, VAR5);
if (VAR7 != -VAR12)
goto VAR11;


if (VAR2->private->VAR13 != VAR14)
goto VAR11;

FUN4(&VAR6.VAR15);
VAR6.VAR3 = VAR3;
VAR6.VAR4 = VAR4;
VAR6.VAR5 = VAR5;
VAR6.VAR7 = VAR16;

VAR2->private->VAR13 = VAR17;
VAR2->private->VAR18 = &VAR6;
FUN5(VAR2->VAR9);

VAR7 = FUN6(VAR6.VAR15,
VAR6.VAR7 != VAR16,
VAR19);
FUN2(VAR2->VAR9);
if (VAR7 <= 0) {
if (VAR6.VAR7 == VAR16) {
VAR6.VAR7 = (VAR7 == 0) ? -VAR20 : VAR7;
if (VAR2->private->VAR13 == VAR17)
VAR2->private->VAR13 = VAR14;
}
}
VAR2->private->VAR18 = NULL;
VAR7 = VAR6.VAR7;
VAR11:
FUN5(VAR2->VAR9);
return VAR7;
}