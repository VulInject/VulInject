static VAR1 FUN1(struct VAR2 *VAR3,
struct VAR4 *VAR5, char *VAR6)
{
struct VAR7 *VAR8 =
FUN2(FUN3(VAR3->VAR9->VAR9));
struct VAR10 *VAR11 =
FUN4(FUN5(VAR3->VAR9->VAR9));
struct arvo_mode_key VAR12;
int VAR13;

FUN6(&VAR8->VAR14);
VAR13 = FUN7(VAR11, VAR15,
&VAR12, sizeof(struct VAR16));
FUN8(&VAR8->VAR14);
if (VAR13)
return VAR13;

return snprintf(VAR6, VAR17, "", VAR12.VAR18);
}