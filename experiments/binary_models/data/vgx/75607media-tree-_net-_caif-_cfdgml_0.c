struct VAR1 *FUN1(u8 VAR2, struct VAR3 *VAR3)
{
struct VAR4 *VAR5 = FUN2(sizeof(struct VAR4), VAR6);
if (!VAR5)
return NULL;
FUN3(FUN4(struct VAR4, VAR7) == 0);
FUN5(VAR5, VAR2, VAR3, true);
VAR5->VAR7.VAR8 = VAR9;
VAR5->VAR7.VAR10 = VAR11;
snprintf(VAR5->VAR7.VAR12, VAR13 - 1, "", VAR2);
VAR5->VAR7.VAR12[VAR13 - 1] = '';
return &VAR5->VAR7;
}