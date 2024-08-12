FUN1 (VAR1* VAR2,
bool* VAR3,
VAR4 *VAR5,
VAR4 *VAR6)
{
tree VAR7;
enum tag_types VAR8;
tree VAR9 = VAR10;
tree VAR11 = VAR10;
tree VAR12;
bool VAR13 = false;
bool VAR14 = false;
bool VAR15 = false;
bool VAR16 = false;
tree VAR17 = VAR10;
unsigned VAR18;


*VAR3 = false;

VAR18 = 0;


VAR8 = FUN2 (VAR2);
if (VAR8 == VAR19)
return VAR20;


VAR12 = FUN3 (VAR2);


if (FUN4 (VAR2, false))
VAR14 = true;

FUN5 (VAR21);


VAR7
= FUN6 (VAR2,
false,
false,
false,
false);

if (VAR7)
{

FUN7 (VAR2);
VAR11 = FUN8 (VAR2,
false,
false,
VAR22,
false,
true,
false);

if (!FUN9 (VAR2))
{
VAR15 = true;
VAR9 = FUN10 (VAR2);
if (VAR9 == VAR20)
VAR9 = VAR10;
}

if (VAR11 == VAR20)
VAR7 = VAR10;

else
{
tree VAR23;

for (VAR23 = FUN11 (VAR11);
VAR23 && FUN12 (VAR23) != VAR24;
VAR23 = (FUN13 (VAR23)
? FUN14 (VAR23)
: FUN15 (VAR23)))
if (FUN13 (VAR23)
&& FUN16 (VAR23)
&& FUN17 (VAR23)
&& FUN18 (FUN19 (VAR23))
&& !FUN20 (VAR23))
++VAR18;
}
}

else
{

FUN7 (VAR2);

VAR9 = FUN21 (VAR2,
false,
true,
true);

if (!FUN9 (VAR2))
{
if (FUN22 (VAR2->VAR25, VAR26))
VAR9 = FUN10 (VAR2);
else
VAR9 = VAR10;
}
else
{
VAR13 = true;
++VAR18;
}
}

FUN23 ();

if (VAR9)
FUN24 (VAR2, VAR9);


if (!FUN25 (VAR2))
{
FUN26 (VAR2, "");
return VAR20;
}


FUN27 (VAR2);

if (VAR14)
FUN26 (VAR2,
"");
else if (VAR15)
FUN26 (VAR2,
"");
else if (VAR7)
{
tree VAR23;


if (!FUN28 (VAR11))
{
FUN29 ("", VAR11);
VAR11 = VAR10;
goto VAR27;
}


VAR23 = FUN30 ();

if (VAR23 && !FUN31 (VAR23, VAR7))
{
FUN29 ("",
VAR11, VAR23, VAR7);
VAR11 = VAR10;
goto VAR27;
}

if (VAR23 == VAR7)
{
FUN32 ("");
VAR7 = VAR10;
VAR18 = 0;
}
}

if (FUN33 ()
&& VAR2->VAR28 == 0
&& VAR13)
{
FUN29 ("");
VAR16 = true;

++VAR2->VAR28;
FUN34 ();
}


if (!FUN35 (VAR2, VAR18))
{

VAR11 = VAR10;
goto VAR27;
}


if (VAR13)
{
VAR11 = FUN11 (VAR9);
VAR11 = FUN36 (VAR11);
if (VAR7)
VAR17 = FUN37 (VAR7);
}
else if (VAR7)
{
tree VAR22;


if (FUN12 (FUN11 (VAR11)) == VAR29)
{
VAR22 = FUN38 (FUN11 (VAR11),
false);
if (VAR22 != VAR20)
VAR11 = FUN39 (VAR22);
else
{
FUN26 (VAR2, "");
VAR11 = VAR20;
}
}

FUN36 (FUN11 (VAR11));
VAR22 = VAR30;

VAR17 = FUN37 (VAR7);

VAR11 = FUN40 (FUN11 (VAR11));
if (FUN41 ()
&& !FUN20 (FUN11 (VAR11)))
{
VAR11 = FUN42 (VAR11);
if (VAR11 == VAR20)
{
VAR11 = VAR10;
goto VAR27;
}
}

VAR11 = FUN11 (VAR11);
*VAR3 = true;
}
else      
{

if (!VAR9)
VAR9 = FUN43 ();
VAR11 = FUN44 (VAR8, VAR9, VAR31,
VAR2->VAR28);
}


if (FUN12 (VAR11) == VAR32)
FUN45 (VAR11) = (VAR8 == VAR22);
FUN46 (VAR8, VAR11);


if (VAR11 != VAR20 && FUN47 (VAR11))
{
FUN29 ("", VAR11);
FUN29 ("", VAR11);
VAR11 = VAR10;
goto VAR27;
}
else if (VAR11 == VAR20)
VAR11 = VAR10;


*VAR6 = VAR10;


if (FUN22 (VAR2->VAR25, VAR33))
*VAR6 = FUN48 (VAR2);

VAR27:

if (VAR17)
FUN49 (VAR17);

if (VAR16)
{
FUN50 ();
--VAR2->VAR28;
}
*VAR5 = VAR12;
return VAR11;
}