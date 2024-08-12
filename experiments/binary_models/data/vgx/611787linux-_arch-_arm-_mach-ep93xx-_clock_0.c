static struct VAR1 *FUN1(const char *VAR2,
const char *VAR3,
void VAR4 *VAR5,
u8 VAR6)
{
struct clk_init_data VAR7;
struct VAR8 *VAR9;
struct VAR10 *VAR10;

VAR9 = FUN2(sizeof(*VAR9), VAR11);
if (!VAR9)
return FUN3(-VAR12);

VAR7.VAR2 = VAR2;
VAR7.VAR13 = &VAR14;
VAR7.VAR15 = VAR16;
VAR7.VAR17 = (VAR3 ? &VAR3 : NULL);
VAR7.VAR18 = (VAR3 ? 1 : 0);

VAR9->VAR5 = VAR5;
VAR9->VAR6 = VAR6;
VAR9->VAR19.VAR7 = &VAR7;
VAR9->VAR20 = &VAR21;

VAR10 = FUN4(NULL, &VAR9->VAR19);
if (FUN5(VAR10)) {
FUN6(VAR9);
return FUN7(VAR10);
}

return &VAR9->VAR19;
}