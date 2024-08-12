FUN1 (int VAR1,
VAR2 *(*VAR3) (int, VAR2 *, VAR4))
{
char *VAR5;
char VAR6;
char *VAR7;
offsetT VAR8, VAR9;
VAR2 *VAR10 = NULL;
char *VAR11 = NULL;
char VAR12;
expressionS VAR13;

if (VAR14)
VAR11 = FUN2 (&VAR12);

VAR5 = VAR15;
VAR6 = FUN3 ();

VAR7 = VAR15;
*VAR7 = VAR6;

if (VAR5 == VAR7)
{
FUN4 (FUN5(""));
FUN6 ();
goto VAR16;
}

FUN7 ();


if (*VAR15 == '')
VAR15++;

VAR8 = FUN8 (&VAR13);
VAR9 = VAR8;
VAR9 &= ((VAR17) 2 << (VAR18->VAR19->VAR20 - 1)) - 1;
if (VAR13.VAR21 == VAR22)
{
FUN4 (FUN5(""));
FUN6 ();
goto VAR16;
}
else if (VAR8 != VAR9 || !VAR13.VAR23)
{
FUN9 (FUN5(""), (long) VAR8);
FUN6 ();
goto VAR16;
}

*VAR7 = 0;
VAR10 = FUN10 (VAR5);
if ((FUN11 (VAR10) || FUN12 (VAR10))
&& !FUN13 (VAR10))
{
if (!FUN14 (VAR10))
{
VAR10 = NULL;
FUN4 (FUN5(""), VAR5);
*VAR7 = VAR6;
FUN6 ();
goto VAR16;
}

if (1 || !FUN15 (VAR10))
VAR10 = FUN16 (VAR10, 1);
FUN17 (VAR10, VAR24);
FUN18 (VAR10, 0);
FUN19 (VAR10, &VAR25);
FUN20 (VAR10);
}

VAR9 = FUN21 (VAR10);
if (VAR9 == 0)
VAR9 = VAR8;
else if (VAR9 != VAR8)
FUN9 (FUN5(""%VAR26\""),
VAR5, (long) VAR9, (long) VAR8);

*VAR7 = VAR6;
if (VAR3 != NULL)
VAR10 = (*VAR3) (VAR1, VAR10, VAR9);
else
{
FUN18 (VAR10, (VAR27) VAR9);
FUN22 (VAR10);
FUN17 (VAR10, VAR28);
{
extern int VAR29;
if (VAR9 == 0 || !VAR29)
FUN23 (VAR10) = VAR30;
}
}

FUN24 ();
VAR16:
if (VAR14)
FUN25 (VAR11, VAR12);
return VAR10;
}