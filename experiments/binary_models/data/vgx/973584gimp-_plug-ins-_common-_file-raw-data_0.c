FUN1 (VAR1     *VAR2,
VAR3                  *VAR4,
VAR3                  *VAR5,
VAR3                  *VAR6,
VAR7                 *VAR8,
VAR9             *VAR10,
VAR11           *VAR12,
VAR13  *VAR14,
VAR3                  *VAR15,
VAR16          *VAR17,
VAR18                  **VAR19)
{
VAR20 *VAR21;

VAR21 = FUN2 (VAR2);

if (FUN3 (FUN4 (VAR21), VAR22) == 0)
{
gint VAR23;

FUN5 (VAR2,
"", &VAR23,
NULL);

if (VAR23 == VAR24)
*VAR5 = *VAR6 = 1201;
else
*VAR5 = *VAR6 = 3601;

*VAR4          = 0;
*VAR8           = VAR25;
*VAR10             = VAR26;
*VAR12           = VAR27;
*VAR14 = VAR28;
*VAR15       = 0;
*VAR17         = VAR29;
*VAR19         = NULL;
}
else
{
FUN5 (VAR2,
"",               VAR4,
"",                VAR5,
"",               VAR6,
"",         VAR8,
"",            VAR10,
"",           VAR12,
"", VAR14,
"",       VAR15,
"",         VAR17,
"",         VAR19,
NULL);
}
}