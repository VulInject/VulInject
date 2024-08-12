FUN1 (rtx VAR1, rtx VAR2)
{
int VAR3;
RTX_CODE VAR4 = FUN2 (VAR1);
const char *VAR5;
int VAR6;

if (VAR1 == VAR2)
return 1;
if ((VAR4 == VAR7 || (VAR4 == VAR8 && FUN3 (FUN4 (VAR1))))
&& (FUN3 (VAR2) || (FUN2 (VAR2) == VAR8
&& FUN3 (FUN4 (VAR2)))))
{
int VAR9;

if (VAR4 == VAR8)
{
VAR3 = FUN5 (FUN4 (VAR1));
if (VAR3 >= VAR10)
goto VAR11;
VAR3 += FUN6 (FUN5 (FUN4 (VAR1)),
FUN7 (FUN4 (VAR1)),
FUN8 (VAR1),
FUN7 (VAR1));
}
else
VAR3 = FUN5 (VAR1);

if (FUN2 (VAR2) == VAR8)
{
VAR9 = FUN5 (FUN4 (VAR2));
if (VAR9 >= VAR10)
goto VAR11;
VAR9 += FUN6 (FUN5 (FUN4 (VAR2)),
FUN7 (FUN4 (VAR2)),
FUN8 (VAR2),
FUN7 (VAR2));
}
else
VAR9 = FUN5 (VAR2);


if (VAR12 && FUN9 (FUN7 (VAR1)) > VAR13
&& FUN10 (FUN7 (VAR1))
&& VAR3 < VAR10)
VAR3 += VAR14[VAR3][FUN7 (VAR1)] - 1;
if (VAR12 && FUN9 (FUN7 (VAR2)) > VAR13
&& FUN10 (FUN7 (VAR2))
&& VAR9 < VAR10)
VAR9 += VAR14[VAR9][FUN7 (VAR2)] - 1;

return VAR3 == VAR9;
}

if (VAR4 == VAR15 || VAR4 == VAR16 || VAR4 == VAR17)
return FUN1 (FUN11 (VAR1, 0), VAR2);

if (FUN2 (VAR2) == VAR18 || FUN2 (VAR2) == VAR19
|| FUN2 (VAR2) == VAR20)
return FUN1 (VAR1, FUN11 (VAR2, 0)) ? 2 : 0;

VAR11:


if (VAR4 != FUN2 (VAR2))
return 0;


if (FUN7 (VAR1) != FUN7 (VAR2))
return 0;

switch (VAR4)
{
case VAR21:
case VAR22:
return 0;

case VAR23:
return FUN11 (VAR1, 0) == FUN11 (VAR2, 0);
case VAR24:
return FUN12 (VAR1, 0) == FUN12 (VAR2, 0);

default:
break;
}



VAR6 = 0;
VAR5 = FUN13 (VAR4);
for (VAR3 = FUN14 (VAR4) - 1; VAR3 >= 0; VAR3--)
{
int VAR25, VAR9;
switch (VAR5[VAR3])
{
case '':
if (FUN15 (VAR1, VAR3) != FUN15 (VAR2, VAR3))
return 0;
break;

case '':
if (FUN16 (VAR1, VAR3) != FUN16 (VAR2, VAR3))
return 0;
break;

case '':
VAR25 = FUN1 (FUN11 (VAR1, VAR3), FUN11 (VAR2, VAR3));
if (VAR25 == 0)
return 0;

if (VAR25 == 2)
VAR6 = 1;
break;

case '':
break;

case '':
if (FUN17 (VAR1, VAR3) != FUN17 (VAR2, VAR3))
return 0;
for (VAR9 = FUN17 (VAR1, VAR3) - 1; VAR9 >= 0; --VAR9)
{
VAR25 = FUN1 (FUN18 (VAR1, VAR3, VAR9), FUN18 (VAR2, VAR3, VAR9));
if (VAR25 == 0)
return 0;
if (VAR25 == 2)
VAR6 = 1;
}
break;


default:
FUN19 ();
}
}
return 1 + VAR6;
}