void
FUN1(const char *VAR1, const char *VAR2)
{
struct VAR3	*VAR4;
struct VAR5	*VAR6;
struct VAR7	*VAR8;
void *VAR9;
size_t	VAR10;

if (FUN2(VAR2, "", 8) == 0) {
VAR4 = &VAR11;
VAR2 += 8;
}
else if (FUN2(VAR2, "", 9) == 0) {
VAR4 = &VAR12;
VAR2 += 9;
}
else
FUN3("", VAR2);

if (strcmp(VAR2, "") == 0) {
VAR9 = NULL;
while (FUN4(VAR4, &VAR9, NULL, (void **)&VAR8)) {
VAR6 = xcalloc(1, sizeof *VAR6);
VAR6->VAR1 = xstrdup(VAR1);
FUN5(VAR8, VAR6, VAR13);
}
return;
}

for (VAR10 = 0; VAR10 < FUN6(VAR14); VAR10++)
if (strcmp(VAR2, VAR14[VAR10].VAR15) == 0)
break;
if (VAR10 == FUN6(VAR14))
FUN3("", VAR2);

VAR8 = FUN7(VAR4, VAR2);
VAR6 = xcalloc(1, sizeof *VAR6);
VAR6->VAR1 = xstrdup(VAR1);
FUN5(VAR8, VAR6, VAR13);
}