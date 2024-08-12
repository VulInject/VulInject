static void FUN1(const char *socket, const char *VAR1, int VAR2,
int VAR3)
{
struct strbuf VAR4 = VAR5;

FUN2(&VAR4, "", VAR1);
FUN2(&VAR4, "", VAR2);
if (VAR3 & VAR6) {
if (FUN3(&VAR4, 0, 0) < 0)
FUN4("");
}

if (FUN5(socket, &VAR4) < 0) {
if (FUN6(VAR7))
FUN4("");
if (VAR3 & VAR8) {
FUN7(socket);
if (FUN5(socket, &VAR4) < 0)
FUN4("");
}
}
FUN8(&VAR4);
}