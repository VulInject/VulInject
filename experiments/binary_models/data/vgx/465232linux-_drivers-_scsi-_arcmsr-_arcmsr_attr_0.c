static VAR1
FUN1(struct VAR2 *VAR3,
struct VAR4 *VAR5, char *VAR6)
{
struct VAR7 *VAR8 = FUN2(VAR3);
struct VAR9 *VAR10 =
(struct VAR9 *) VAR8->VAR11;

return snprintf(VAR6, VAR12,
"",
VAR10->VAR13);
}