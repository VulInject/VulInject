static VAR1 FUN1(struct VAR2 *VAR3, struct VAR4 *VAR5, char *VAR6)
{
struct VAR7 *VAR7 = FUN2(VAR3);

return snprintf(VAR6, VAR8, "",
FUN3(VAR7->VAR9, VAR10) + 1,
FUN3(VAR7->VAR9, VAR11) + 1);
}