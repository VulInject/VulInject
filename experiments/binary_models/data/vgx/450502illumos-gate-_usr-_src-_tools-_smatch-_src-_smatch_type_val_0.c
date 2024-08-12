static void FUN1(char *VAR1, struct VAR2 *VAR3, int VAR4)
{
struct VAR5 *VAR6, *VAR7, *new;

VAR1 = FUN2(VAR1);
VAR6 = FUN3(VAR8, VAR9, VAR1, NULL);
if (VAR6 && strcmp(VAR6->VAR10, "") == 0)
return;
if (VAR4 && VAR6 && strcmp(VAR6->VAR10, "") == 0)
return;
VAR7 = FUN4(VAR3);
if (VAR6) {
new = FUN5(VAR6, VAR7);
} else {
new = VAR7;
if (VAR4)
new->VAR10 = FUN2("");
else
new->VAR10 = FUN2("");
}
FUN6(&VAR8, VAR9, VAR1, NULL, new);
}