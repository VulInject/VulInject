static void FUN1(const char *VAR1, struct VAR2 *VAR3,
const struct VAR4 *VAR5, int VAR6)
{
struct strbuf VAR7 = VAR8;
struct strbuf VAR9 = VAR8;
strbuf_getline_fn VAR10;

VAR10 = VAR11 ? VAR12 : VAR13;
while (FUN2(&VAR7, stdin) != VAR14) {
if (!VAR11 && VAR7.VAR7[0] == '') {
FUN3(&VAR9);
if (FUN4(&VAR9, VAR7.VAR7, NULL))
FUN5("");
FUN6(&VAR7, &VAR9);
}
FUN7(VAR1, VAR3, VAR5, VAR6, VAR7.VAR7);
FUN8(VAR15, "");
}
FUN9(&VAR7);
FUN9(&VAR9);
}