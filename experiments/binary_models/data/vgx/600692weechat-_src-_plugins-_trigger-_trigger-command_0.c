FUN1 (struct VAR1 *VAR2, const char *VAR3)
{
char *VAR4, *VAR5;

VAR4 = strdup (VAR2->VAR4);
VAR5 = FUN2 (VAR3, """);

if (VAR4 && VAR5)
{

if (!FUN3 (VAR5))
{
FUN4 (NULL, 0, "",
FUN5(""%VAR6\""),
FUN6 (""),
VAR7,
VAR5);
goto VAR8;
}

if (FUN7 (VAR5))
{
FUN4 (NULL, 0, "",
FUN5(""%VAR6\""
""),
FUN6 (""), VAR7,
VAR5);
goto VAR8;
}

if (FUN8 (VAR2, VAR5))
{
FUN4 (NULL, 0, "",
FUN5(""%VAR6\""%VAR6\""),
VAR4, VAR2->VAR4);
}
else
{
FUN4 (NULL, 0, "",
FUN5(""
""%VAR6\""),
FUN6 (""),
VAR7,
VAR4);
}
}

VAR8:
if (VAR4)
free (VAR4);
if (VAR5)
free (VAR5);
}