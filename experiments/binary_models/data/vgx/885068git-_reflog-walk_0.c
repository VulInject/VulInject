void FUN1(struct VAR1 *VAR2, int VAR3,
const struct VAR4 *VAR5, int VAR6)
{
if (VAR2 && VAR2->VAR7) {
struct VAR8 *VAR8 = VAR2->VAR7;
struct VAR2 *VAR9;
struct strbuf VAR10 = VAR11;

VAR9 = &VAR8->VAR12->VAR13[VAR8->VAR14+1];
FUN2(&VAR10, VAR2, VAR5, VAR6, 0);
if (VAR3) {
FUN3("", VAR10.VAR15, VAR9->VAR16);
}
else {
FUN3("",
VAR10.VAR15, VAR9->VAR17, VAR9->VAR16);
}

FUN4(&VAR10);
}
}