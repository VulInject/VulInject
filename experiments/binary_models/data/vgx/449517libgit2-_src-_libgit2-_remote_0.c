static int FUN1(
VAR1 *VAR2,
const char *VAR3,
int VAR4,
const VAR5 *VAR6)
{
FUN2(VAR4);
FUN2(VAR6);
git_buf VAR7 = VAR8;
int VAR9;

if (VAR6 && VAR6->VAR10) {
VAR9 = VAR6->FUN1(&VAR7, VAR3, VAR4, VAR6->VAR11);

if (VAR9 != VAR12) {
FUN3(VAR9, "");

FUN4(VAR2, VAR7.VAR13, VAR7.VAR14);
FUN5(&VAR7);

return VAR9;
}
}

return FUN6(VAR2, VAR3);
}