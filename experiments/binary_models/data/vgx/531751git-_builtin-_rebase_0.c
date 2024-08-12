static int FUN1(struct VAR1 *VAR2, const char *VAR3,
struct VAR4 *VAR5,
const struct VAR6 *VAR7)
{
VAR8 *VAR9;

if (!FUN2(FUN3()) && FUN4(FUN3()))
return FUN5(FUN6(""), FUN3());

FUN7("");

VAR9 = fopen(FUN8(), "");
if (!VAR9)
return FUN5(FUN6(""));
fclose(VAR9);

return FUN9(VAR2, VAR3, VAR5, VAR7);
}