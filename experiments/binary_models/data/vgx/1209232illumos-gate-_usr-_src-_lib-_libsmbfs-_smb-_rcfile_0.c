static void
FUN1(struct VAR1 *VAR2, struct VAR3 *VAR4, struct VAR5 *VAR6,
char *VAR7)
{
int VAR8, new;
char *VAR9 = "";

if (VAR10 != 0)
VAR9 = "";

if (strcmp(VAR6->VAR11, "") == 0) {
VAR8 = FUN2(VAR6->VAR12);
new = FUN2(VAR7);
if (new <= VAR8) {
if (VAR13)
fprintf(VAR14,
""
"",
VAR6->VAR11, VAR7,
VAR4->VAR15, VAR9);
return;
}
}
if (VAR13)
fprintf(VAR14,
"",
VAR6->VAR11, VAR7, VAR4->VAR15, VAR9);
VAR6->VAR12 = strdup(VAR7);
}