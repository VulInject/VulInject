static void
FUN1(const VAR1 *VAR2)
{
size_t VAR3 = 0;
size_t VAR4;
char *VAR5;

if (VAR6->VAR7) {
FUN2(VAR8, ""
""
, VAR6->VAR9, FUN3(VAR2, 1));
return;
}

VAR6->VAR7 = FUN4(VAR2);

if (FUN5(VAR2) > 2) {
for (VAR4 = 2; VAR4 < FUN5(VAR2); VAR4++)
VAR3 += strlen(FUN3(VAR2, VAR4)) + 1;

VAR6->VAR10 = VAR5 = FUN6(VAR3);
VAR6->VAR11 = VAR3;
for (VAR4 = 2; VAR4 < FUN5(VAR2); VAR4++) {
strcpy(VAR5, FUN3(VAR2, VAR4));
VAR5 += strlen(FUN3(VAR2, VAR4)) + 1;
}

if (VAR6->VAR12 == VAR13)
VAR6->VAR12 = VAR14;

VAR6->VAR15 = true;
}

VAR3 += strlen(VAR6->VAR7) + 1;
if (VAR3 > VAR16->VAR17)
VAR16->VAR17 = VAR3;
}