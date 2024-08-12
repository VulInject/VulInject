FUN1 ()
{
int VAR1[VAR2];
int VAR3 = 0;
basic_block VAR4;
char *VAR5;

memset (VAR1, 0, sizeof VAR1);

FUN2 (&VAR6);
VAR5 = (char *) FUN3 (&VAR6, 0);

FUN4 (VAR4)
{
struct VAR7 *VAR8 = 0;
HARD_REG_SET VAR9;
HARD_REG_SET VAR10;

FUN5 (VAR9);

if (VAR11)
fprintf (VAR11, "", VAR4->VAR12);

VAR8 = FUN6 (VAR4);

if (VAR11)
FUN7 (VAR8);

FUN5 (VAR9);

if (VAR13)
{
int VAR14;

for (VAR14 = FUN8 (VAR15, VAR16); VAR14--;)
FUN9 (VAR9, VAR15 + VAR14);

for (VAR14 = FUN8 (VAR17, VAR16); VAR14--;)
FUN9 (VAR9, VAR17 + VAR14);
}

FUN5 (VAR10);
while (VAR8)
{
int VAR18, VAR19 = -1;
int VAR20;
struct VAR7 *this = VAR8;
struct VAR7 *VAR21, *VAR22;
HARD_REG_SET VAR23;
int VAR24 = FUN10 (*this->VAR25);
int VAR14;

VAR8 = this->VAR26;


if (! FUN11 (VAR10, VAR24))
{
FUN9 (VAR10, VAR24);
continue;
}

if (VAR27[VAR24] || VAR28[VAR24]
|| (VAR13 && VAR24 == VAR17)
|| (VAR13 && VAR24 == VAR15)
)
continue;

FUN12 (VAR23, VAR9);


VAR20 = 0;
for (VAR22 = this; VAR22->VAR29; VAR22 = VAR22->VAR29)
{
VAR20++;
FUN13 (VAR23,
VAR30[VAR22->class]);
}
if (VAR20 < 1)
continue;

FUN13 (VAR23,
VAR30[VAR22->class]);

if (this->VAR31)
FUN14 (VAR23, VAR32);

FUN15 (VAR4, &VAR23, this);


for (VAR18 = 0; VAR18 < VAR2; VAR18++)
{
int VAR33 = FUN8 (VAR18, FUN16 (*this->VAR25));

for (VAR14 = VAR33 - 1; VAR14 >= 0; --VAR14)
if (FUN11 (VAR23, VAR18 + VAR14)
|| VAR27[VAR18 + VAR14]
|| VAR28[VAR18 + VAR14]

|| (! VAR34[VAR18 + VAR14]
&& ! VAR35[VAR18 + VAR14])

|| (VAR36
&& !VAR37[VAR18 + VAR14])
|| ! FUN17 (VAR24 + VAR14, VAR18 + VAR14)
)
break;
if (VAR14 >= 0)
continue;


for (VAR21 = this; VAR21; VAR21 = VAR21->VAR29)
if (! FUN18 (VAR18, FUN16 (*VAR21->VAR25))
|| (VAR21->VAR31
&& ! (VAR38
(VAR24, FUN16 (*VAR21->VAR25)))
&& (VAR38
(VAR18, FUN16 (*VAR21->VAR25)))))
break;
if (! VAR21)
{
if (VAR19 == -1
|| VAR1[VAR19] > VAR1[VAR18])
VAR19 = VAR18;
}
}

if (VAR11)
{
fprintf (VAR11, "",
VAR39[VAR24], FUN19 (VAR22->VAR40));
if (VAR22->VAR31)
fprintf (VAR11, "");
}

if (VAR19 == -1)
{
if (VAR11)
fprintf (VAR11, "");
continue;
}

FUN20 (this, VAR19);
VAR1[VAR19] = VAR3++;

if (VAR11)
fprintf (VAR11, "", VAR39[VAR19]);
}

FUN21 (&VAR6, VAR5);
}

FUN21 (&VAR6, NULL);

if (VAR11)
fputc ('', VAR11);

FUN22 (NULL, 1);
FUN23 (NULL, VAR41,
VAR42 | VAR43);
}