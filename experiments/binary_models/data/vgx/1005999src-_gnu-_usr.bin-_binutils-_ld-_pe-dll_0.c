FUN1 (const char *VAR1)
{
VAR2 *VAR3;
unsigned long VAR4, VAR5, VAR6, VAR7;
unsigned long VAR8, VAR9, VAR10, VAR11, VAR12;
unsigned long VAR13;
unsigned char *VAR14, *VAR15;
unsigned long VAR16, VAR17, VAR18, VAR19;
const char *VAR20;

unsigned long VAR21 = 1;
unsigned long VAR22 = 0;
unsigned long VAR23 = 1;
unsigned long VAR24 = 0;
unsigned long VAR25 = 1;
unsigned long VAR26 = 0;


VAR3 = FUN2 (VAR1, VAR27->VAR28);
if (!VAR3)
{
FUN3 ("", VAR1, FUN4 (FUN5 ()));
return VAR29;
}


if (!FUN6 (VAR3, VAR30))
{
FUN3 ("", VAR1);
return VAR29;
}


VAR4 = FUN7 (VAR3, 0x3c);
VAR5 = VAR4 + 4 + 20;
VAR6 = FUN7 (VAR3, VAR5 + 92);

if (VAR6 < 1) 
return VAR29;

VAR8 = FUN7 (VAR3, VAR5 + 96);
VAR9 = FUN7 (VAR3, VAR5 + 100);
VAR10 = FUN8 (VAR3, VAR4 + 4 + 2);
VAR11 = (VAR4 + 4 + 20 +
FUN8 (VAR3, VAR4 + 4 + 16));
VAR12 = 0;


for (VAR7 = 0; VAR7 < VAR10; VAR7++)
{
char VAR31[8];
unsigned long VAR32 = VAR11 + 40 * VAR7;
unsigned long VAR33 = FUN7 (VAR3, VAR32 + 12);
unsigned long VAR34 = FUN7 (VAR3, VAR32 + 16);
unsigned long VAR35 = FUN7 (VAR3, VAR32 + 20);

FUN9 (VAR3, (VAR36) VAR32, VAR37);
FUN10 (VAR31, (VAR38) 8, VAR3);

if (VAR33 <= VAR8 && VAR33 + VAR34 > VAR8)
{
VAR12 = VAR35 + (VAR8 - VAR33);
if (VAR8 + VAR9 > VAR33 + VAR34)
VAR9 = VAR34 - (VAR8 - VAR33);
break;
}
}


for (VAR7 = 0; VAR7 < VAR10; VAR7++)
{
unsigned long VAR32 = VAR11 + 40 * VAR7;
unsigned long VAR34 = FUN7 (VAR3, VAR32 + 8);
unsigned long VAR33 = FUN7 (VAR3, VAR32 + 12);
unsigned long VAR39 = FUN7 (VAR3, VAR32 + 36);
char VAR40[9];

VAR40[8] = '';
FUN9 (VAR3, (VAR36) VAR32 + 0, VAR37);
FUN10 (VAR40, (VAR38) 8, VAR3);

if (strcmp(VAR40,"") == 0)
{
VAR21 = VAR33;
VAR22 = VAR33 + VAR34;

if (VAR41)
FUN11 ("",
VAR42, VAR40, VAR33, VAR33 + VAR34, VAR39);
}
else if (strcmp(VAR40,"") == 0)
{
VAR23 = VAR33;
VAR24 = VAR33 + VAR34;

if (VAR41)
FUN11 ("",
VAR42, VAR40, VAR33, VAR33 + VAR34, VAR39);
}
else if (strcmp (VAR40,"") == 0)
{
VAR25 = VAR33;
VAR26 = VAR33 + VAR34;

if (VAR41)
FUN11 ("",
VAR42, VAR40, VAR33, VAR33 + VAR34, VAR39);
}
}

VAR14 = xmalloc (VAR9);
FUN9 (VAR3, (VAR36) VAR12, VAR37);
FUN10 (VAR14, (VAR38) VAR9, VAR3);
VAR15 = VAR14 - VAR8;

if (VAR43 == 0)
VAR43 = FUN12 ();

VAR18 = FUN13 (VAR14 + 24);
VAR16 = FUN13 (VAR14 + 32);
VAR17 = FUN13 (VAR14 + 36);
VAR19 = FUN13 (VAR14 + 16);
VAR13 = FUN13 (VAR14 + 28);


VAR20 = FUN13 (VAR14 + 12) + VAR15;


if (FUN14 (VAR43, VAR20))
{
if (VAR41)
FUN11 ("", VAR20);
return VAR44;
}


for (VAR7 = 0; VAR7 < VAR18; VAR7++)
{

unsigned long VAR45 = FUN13 (VAR15 + VAR16 + VAR7 * 4);
VAR46 *VAR47;

unsigned long VAR48 = FUN13 (VAR15 + VAR13 + VAR7 * 4);
int VAR49 = 0;


if (FUN15 (VAR15 + VAR45, "", 4) != 0)
{

VAR49 =
(VAR48 >= VAR21 && VAR48 < VAR22)
|| (VAR48 >= VAR23 && VAR48 < VAR24)
|| (VAR48 >= VAR25 && VAR48 < VAR26);

VAR47 = FUN16 (VAR43, VAR15 + VAR45,
VAR20, VAR7, 0);

VAR47->VAR50 = VAR49;

if (VAR41)
FUN11 ("",
VAR42, VAR20, VAR15 + VAR45,
VAR48, VAR49 ? "" : "");
}
}

return VAR44;
}