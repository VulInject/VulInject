FUN1 (rtx VAR1, enum routine_type VAR2)
{
rtx VAR3;
const char *VAR4 = FUN2 (VAR1, VAR2 == VAR5 ? 2 : 1);
int VAR6 = FUN3 (VAR4);
struct VAR7 *VAR8;
struct VAR9 *VAR10, **VAR11;
struct decision_head VAR12;
char VAR13[2];


FUN4 (VAR6);

VAR13[0] = '';
if (VAR2 == VAR14)
{
int VAR15, VAR16;


VAR3 = FUN5 (VAR17);
FUN6 (VAR3, VAR18);
FUN7 (VAR3, 0) = FUN8 (FUN9 (VAR1, 0));
for (VAR15 = VAR16 = 0; VAR15 < FUN9 (VAR1, 0); VAR15++)
{
rtx VAR19 = FUN10 (VAR1, 0, VAR15);
if (FUN11 (VAR19) != VAR20 && FUN11 (VAR19) != VAR21)
{
FUN10 (VAR3, 0, VAR16) = VAR19;
VAR16++;
}
}
FUN9 (VAR3, 0) = VAR16;

VAR13[0] = '' + VAR16 - 1;
VAR13[1] = '';
}
else if (FUN9 (VAR1, VAR2 == VAR5) == 1)
VAR3 = FUN10 (VAR1, VAR2 == VAR5, 0);
else
{
VAR3 = FUN5 (VAR17);
FUN7 (VAR3, 0) = FUN7 (VAR1, VAR2 == VAR5);
FUN6 (VAR3, VAR18);
}

FUN12 (VAR3, VAR1, VAR22, 0);

memset(&VAR12, 0, sizeof(VAR12));
VAR8 = FUN13 (VAR3, &VAR12, "", VAR2, 1);


for (VAR10 = VAR8->VAR23; VAR10->VAR24; VAR10 = VAR10->VAR24)
continue;
VAR11 = &VAR10->VAR24;


if (VAR6 == -1)
{

if (VAR10->VAR2 == VAR25)
{
VAR8 = FUN14 (VAR13, &VAR8->VAR26);
VAR11 = &VAR8->VAR23;
}
VAR10 = FUN15 (VAR27, &VAR11);
VAR10->VAR28.VAR4 = VAR4;
}

VAR10 = FUN15 (VAR29, &VAR11);
VAR10->VAR28.VAR1.VAR30 = VAR31;
VAR10->VAR28.VAR1.VAR32 = VAR33;
VAR10->VAR28.VAR1.VAR34 = 0;

switch (VAR2)
{
case VAR5:


if (FUN11 (VAR3) == VAR17)
{
int VAR15;


for (VAR15 = FUN9 (VAR3, 0); VAR15 > 0; VAR15--)
{
rtx VAR35 = FUN10 (VAR3, 0, VAR15 - 1);
if (FUN11 (VAR35) != VAR36
|| (!FUN16 (FUN17 (VAR35, 0))
&& FUN11 (FUN17 (VAR35, 0)) != VAR20))
break;
}

if (VAR15 != FUN9 (VAR3, 0))
{
rtx new;
struct decision_head VAR37;


if (VAR15 == 1)
new = FUN10 (VAR3, 0, 0);
else
{
int VAR16;

new = FUN5 (VAR17);
FUN7 (new, 0) = FUN8 (VAR15);
for (VAR16 = VAR15 - 1; VAR16 >= 0; VAR16--)
FUN10 (new, 0, VAR16) = FUN10 (VAR3, 0, VAR16);
}


memset (&VAR37, 0, sizeof(VAR37));
VAR8 = FUN13 (new, &VAR37, "", VAR2, 1);


for (VAR10 = VAR8->VAR23; VAR10->VAR24; VAR10 = VAR10->VAR24)
continue;


VAR11 = &VAR10->VAR24;
if (VAR10->VAR2 == VAR25)
{
VAR8 = FUN14 ("", &VAR8->VAR26);
VAR11 = &VAR8->VAR23;
}


if (VAR6 == -1)
{
VAR10 = FUN15 (VAR27, &VAR11);
VAR10->VAR28.VAR4 = VAR4;
}

VAR10 = FUN15 (VAR29, &VAR11);
VAR10->VAR28.VAR1.VAR30 = VAR31;
VAR10->VAR28.VAR1.VAR32 = VAR33;
VAR10->VAR28.VAR1.VAR34 = FUN9 (VAR3, 0) - VAR15;

FUN18 (&VAR12, &VAR37);
}
}
break;

case VAR38:

FUN19 ("", VAR31);
break;

case VAR14:

FUN19 ("",
VAR31);
break;
}

return VAR12;
}