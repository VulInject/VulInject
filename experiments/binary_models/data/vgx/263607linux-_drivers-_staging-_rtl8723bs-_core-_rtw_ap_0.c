VAR1 FUN1(struct VAR2 *VAR3, struct VAR4 *VAR5)
{
struct VAR6 *VAR7;
struct VAR8	*VAR9;
struct VAR10 *VAR11 = &VAR3->VAR12;
u8 VAR13 = VAR14;

VAR7 = FUN2(sizeof(struct VAR6));
if (!VAR7) {
VAR13 = VAR15;
goto VAR16;
}

VAR9 = FUN2(sizeof(struct VAR8));
if (!VAR9) {
FUN3(VAR7);
VAR13 = VAR15;
goto VAR16;
}

FUN4(VAR7, VAR9, VAR17);

VAR9->VAR18 = (VAR1)VAR5->VAR19;

memcpy(VAR9->VAR20, VAR5->VAR21, VAR22);

memcpy(VAR9->VAR23, &VAR5->VAR24, 16);

VAR13 = FUN5(VAR11, VAR7);

VAR16:

return VAR13;
}