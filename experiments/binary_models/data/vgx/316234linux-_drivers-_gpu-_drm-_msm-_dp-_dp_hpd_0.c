struct VAR1 *FUN1(struct VAR2 *VAR3, struct VAR4 *VAR5)
{
struct VAR6 *VAR7;

if (!VAR5) {
FUN2("");
return FUN3(-VAR8);
}

VAR7 = FUN4(VAR3, sizeof(*VAR7), VAR9);
if (!VAR7)
return FUN3(-VAR10);

VAR7->VAR3 = VAR3;
VAR7->VAR11 = VAR5;

VAR7->VAR1.connect = VAR12;

return &VAR7->VAR1;
}