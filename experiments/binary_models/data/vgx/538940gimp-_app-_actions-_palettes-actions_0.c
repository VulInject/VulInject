FUN1 (VAR1 *VAR2,
gpointer         VAR3)
{
VAR4 *VAR5   = FUN2 (VAR3);
VAR6 *VAR7   = NULL;
VAR8    *VAR9      = NULL;
VAR10       *VAR11      = NULL;
gint         VAR12 = 0;

if (VAR5)
{
VAR7 = FUN3 (VAR5);

VAR12 = FUN4 (VAR3);

if (VAR12 > 1)
{
VAR7 = NULL;
}

if (VAR7)
{
VAR9 = FUN5 (VAR7);

VAR11 = FUN6 (VAR9);
}
}

FUN7 (VAR2, VAR13, (VAR14) != 0, NULL)

FUN8 ("",                 VAR7);
FUN8 ("",            VAR7 && FUN9 (VAR9));
FUN8 ("",                VAR12 > 1);
FUN8 ("",        VAR11);
FUN8 ("", VAR11);
FUN8 ("",               VAR7 && FUN10 (VAR9));

}