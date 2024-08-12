FUN1 (const char *VAR1)
{
unsigned VAR2[4];
unsigned VAR3 = 0;

if (!FUN2 (VAR1, 1))
{
fprintf (VAR4, "", VAR1);
return;
}


{
unsigned VAR5 = FUN3 ();
unsigned VAR6;
const char *VAR7 = NULL;
int VAR8 = 0;
char VAR9[4], VAR10[4];

if ((VAR8 = FUN4 (VAR5, VAR11)))
VAR7 = "";
else if ((VAR8 = FUN4 (VAR5, VAR12)))
VAR7 = "";
else
{
FUN5 ("", VAR1);
FUN6 ();
return;
}
VAR6 = FUN3 ();
FUN7 (VAR10, VAR6);
FUN7 (VAR9, VAR5);

FUN5 ("", VAR1, VAR7,
VAR9, VAR10, VAR8 < 0 ? "" : "");
if (VAR6 != VAR13)
{
char VAR14[4];

FUN7 (VAR14, VAR13);
FUN5 ("", VAR1, VAR14);
}
}


{
unsigned VAR15 = FUN3 ();

FUN5 ("", VAR1, (unsigned long)VAR15);
}

while (1)
{
gcov_position_t VAR16, VAR17 = FUN8 ();
unsigned VAR18, VAR19;
tag_format_t const *VAR20;
unsigned VAR21;
int VAR22;
unsigned VAR23;

VAR18 = FUN3 ();
if (!VAR18)
break;
VAR19 = FUN3 ();
VAR16 = FUN8 ();
VAR23 = FUN9 (VAR18) >> 1;
for (VAR21 = 4; VAR23; VAR23 >>= 8)
{
if ((VAR23 & 0xff) != 0xff)
{
FUN5 ("", VAR1, VAR18);
break;
}
VAR21--;
}
for (VAR20 = VAR24; VAR20->VAR25; VAR20++)
if (VAR20->VAR18 == VAR18)
goto VAR26;
VAR20 = &VAR24[FUN10 (VAR18) ? 2 : 1];
VAR26:;
if (VAR18)
{
if (VAR3 && VAR3 < VAR21)
{
if (!FUN11 (VAR2[VAR3 - 1], VAR18))
FUN5 ("",
VAR1, VAR18);
}
VAR3 = VAR21;
VAR2[VAR3 - 1] = VAR18;
}

FUN12 (VAR1, VAR21, VAR17);
FUN5 ("", VAR18, VAR19, VAR20->VAR25);
if (VAR20->VAR27)
(*VAR20->VAR27) (VAR1, VAR18, VAR19);

FUN5 ("");
if (VAR28 && VAR20->VAR27)
{
unsigned long VAR29 = FUN8 () - VAR16;

if (VAR29 > VAR19)
FUN5 ("",
VAR1, VAR29 - VAR19);
else if (VAR19 > VAR29)
FUN5 ("",
VAR1, VAR19 - VAR29);
}
FUN13 (VAR16, VAR19);
if ((VAR22 = FUN14 ()))
{
FUN5 (VAR22 < 0 ? "" :
"", VAR1,
(long unsigned) FUN8 ());
break;
}
}
FUN6 ();
}