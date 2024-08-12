FUN1 (int VAR1)
{
VAR2 *VAR3;
VAR3 = FUN2 ("",
VAR4,
NULL);
VAR3->VAR5 = VAR6 = FUN3 ("", VAR7);
if (VAR6 == NULL
|| !FUN4 (VAR6,
FUN5 (VAR7),
FUN6 (VAR7)))
{
FUN7 ("");
return;
}

if (VAR1)
{
VAR8 = FUN8 (VAR6, "");
if (VAR8 == NULL
|| !FUN9 (VAR6, VAR8,
(VAR9
| VAR10
| VAR11
| VAR12
| VAR13)))
{
FUN7 ("");
return;
}
FUN10 (VAR6, VAR8, VAR14);
}

VAR15 = FUN8 (VAR6, "");
if (VAR15 == NULL
|| !FUN9 (VAR6, VAR15,
(VAR9
| VAR10
| VAR11
| VAR12
| VAR13)))
{
FUN7 ("");
return;
}

FUN10 (VAR6, VAR15, 0);

FUN11 (VAR3);
}