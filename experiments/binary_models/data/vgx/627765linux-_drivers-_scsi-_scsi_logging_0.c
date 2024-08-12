void FUN1(const char *VAR1, const struct VAR2 *VAR3,
const char *VAR4, ...)
{
va_list VAR5;
char *VAR6;
size_t VAR7 = 0, VAR8;

if (!VAR3)
return;

VAR6 = FUN2(&VAR8);
if (!VAR6)
return;
VAR7 = FUN3(VAR6, VAR8, FUN4(VAR3),
FUN5((struct VAR2 *)VAR3)->VAR9);
if (VAR7 < VAR8) {
FUN6(VAR5, VAR4);
VAR7 += FUN7(VAR6 + VAR7, VAR8 - VAR7, VAR4, VAR5);
FUN8(VAR5);
}
FUN9(VAR1, &VAR3->VAR10->VAR11, "", VAR6);
FUN10(VAR6);
}