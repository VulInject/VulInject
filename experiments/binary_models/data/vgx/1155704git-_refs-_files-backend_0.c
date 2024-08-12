static int FUN1(int VAR1, const struct VAR2 *VAR3,
const struct VAR2 *VAR4,
const char *VAR5, const char *VAR6)
{
struct strbuf VAR7 = VAR8;
int VAR9 = 0;

FUN2(&VAR7, "", FUN3(VAR3), FUN3(VAR4), VAR5);
if (VAR6 && *VAR6) {
FUN4(&VAR7, '');
FUN5(&VAR7, VAR6);
}
FUN4(&VAR7, '');
if (FUN6(VAR1, VAR7.VAR10, VAR7.VAR11) < 0)
VAR9 = -1;
FUN7(&VAR7);
return VAR9;
}