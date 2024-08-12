void
FUN1(const struct option VAR1[])
{
struct ds VAR2 = VAR3;

for (; VAR1->VAR4; VAR1++) {
const struct VAR5 *VAR6 = VAR1;
const char *VAR7 = VAR6->VAR8 == VAR9 ? "" : "";

FUN2(&VAR2, "", VAR6->VAR4, VAR6->VAR8 ? "" : "",
VAR6->VAR8 ? VAR7 : "");
if (VAR6->VAR10 == NULL && VAR6->VAR11 > 0 && VAR6->VAR11 <= VAR12) {
FUN2(&VAR2, "", VAR6->VAR11, VAR6->VAR8 ? VAR7 : "");
}
}
FUN3("", VAR2.VAR13);
FUN4(&VAR2);
}