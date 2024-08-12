FUN1 (const char *VAR1, int VAR2)
{
struct VAR3 *VAR4, *VAR5;
struct VAR6 *VAR7;
struct VAR8 * VAR9;

if (VAR10 == 0)
{
if (VAR2)
FUN2 ("");
else
return 0;
}

VAR4 = FUN3 (VAR10);
if (!VAR4)
{
if (VAR2)
FUN2 ("", VAR1);
else
return 0;
}

VAR7 = FUN4 (VAR4);
if (FUN5 (FUN6 (VAR7)))
{
if (VAR2)
FUN2 ("", VAR1);
else
return 0;
}


VAR5 = FUN7 (VAR7, VAR1, NULL, VAR11);
if (VAR5 == NULL)
{
if (VAR2)
FUN2 ("", VAR1);
else
return NULL;
}

VAR9 = FUN8 (VAR5, VAR10);
if (VAR9 == 0 && VAR2)
FUN2 ("", VAR1);
return VAR9;
}