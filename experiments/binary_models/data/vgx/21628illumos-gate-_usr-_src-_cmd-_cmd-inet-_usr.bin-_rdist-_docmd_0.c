static void
FUN1(struct VAR1 *VAR2)
{
VAR3 *VAR4;
struct VAR5 *VAR6;
char *VAR7;
char *VAR8;
int VAR9;

if (VAR10)
FUN2("", VAR2);

if ((VAR4 = FUN3(VAR11)) == NULL) {
FUN4("", VAR11, strerror(VAR12));
return;
}
VAR8 = VAR13;
VAR9 = VAR13 - VAR11;
while (VAR6 = FUN5(VAR4)) {
if ((strcmp(VAR6->VAR14, "") == 0) ||
(strcmp(VAR6->VAR14, "") == 0))
continue;
if (VAR9 + 1 + strlen(VAR6->VAR14) >= VAR15 - 1) {
FUN4("", VAR11, VAR6->VAR14);
continue;
}
VAR13 = VAR8;
*VAR13++ = '';
VAR7 = VAR6->VAR14;
while (*VAR13++ = *VAR7++)
;
VAR13--;
FUN6(VAR11);
}
FUN7(VAR4);
VAR13 = VAR8;
*VAR13 = '';
}