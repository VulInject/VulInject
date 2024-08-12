static void FUN1(const char * VAR1, rpmds VAR2, VAR3 * VAR4)
{
if (VAR4 == NULL) VAR4 = VAR5;

if (VAR1)
fprintf(VAR4, "", VAR1);

VAR2 = FUN2(VAR2);
while (FUN3(VAR2) >= 0)
fprintf(VAR4, "", FUN4(VAR2)+2);
}