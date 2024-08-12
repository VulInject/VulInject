static struct VAR1 *FUN1(struct VAR2 *VAR3,
const struct VAR4 *VAR5)
{
struct VAR6 *VAR7 = FUN2(VAR3);
struct VAR8 *VAR9;
unsigned int VAR10 = VAR5->VAR11[0];

if (VAR10 >= VAR12) {
FUN3(VAR7->VAR13, "", VAR10);
return FUN4(-VAR14);
}

VAR9 = &VAR7->VAR9[VAR10];
VAR9->VAR15 = VAR5->VAR11[1];
VAR9->VAR16 = VAR5->VAR11[2];

return &VAR7->VAR17[VAR10];
}