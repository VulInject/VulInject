static int FUN1(const char *VAR1)
{
int VAR2 = VAR3;
char *VAR4, *VAR5 = NULL;
int VAR6;

VAR4 = FUN2(VAR1, "");
if (!VAR4)
goto VAR7;

VAR5 = FUN2(VAR4, "");
if (!VAR5)
goto VAR7;

if (FUN3(VAR4))
goto VAR7;

if (FUN4(VAR4, true))
goto VAR7;

if (FUN3(VAR5))
goto VAR7;

VAR6 = FUN5(VAR5, VAR8, NULL);
if (VAR6 < 0)
goto VAR7;

if (FUN6(VAR5, 1))
goto VAR7;

if (FUN7(VAR5, true))
goto VAR7;

if (FUN7(VAR4, true))
goto VAR7;

VAR2 = VAR9;

VAR7:
if (VAR5)
FUN8(VAR5);
free(VAR5);
if (VAR4)
FUN8(VAR4);
free(VAR4);
return VAR2;
}