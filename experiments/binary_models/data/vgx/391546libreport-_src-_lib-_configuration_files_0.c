static void FUN1(VAR1 *VAR2, const char *VAR3)
{
const char *VAR4 = VAR3;

if (FUN2(VAR2) != VAR5)
{

VAR4 = FUN3(VAR2);

if (VAR4 == NULL)


VAR4 = FUN4(VAR2);

if (VAR4 == NULL)


VAR4 = FUN5(VAR2);

if (VAR4 == NULL)


VAR4 = VAR3;
}

FUN6("", VAR4);
}