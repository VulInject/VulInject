static void
FUN1(VAR1 *VAR2)
{
const VAR3 *VAR4 = VAR2->VAR4;
const VAR3 *VAR5 = VAR2->VAR5;
const guint VAR6 = VAR2->VAR6;
const guint VAR7 = VAR2->VAR7;
const guint VAR8 = VAR2->VAR9;
const guint VAR10 = VAR2->VAR11;

gint VAR12 = VAR4->VAR12;
gint VAR13 = VAR4->VAR14;

gfloat VAR15 = ((VAR16) VAR6) / ((VAR16)VAR7);
gfloat VAR17 = FUN2(1.0 / VAR15, 1.0);
gfloat VAR18 = (VAR16) FUN3() / VAR17;
gint VAR19 = (VAR20) (FUN4(VAR18*2));

if (VAR6 <= VAR19)
return FUN5(VAR2);

VAR20 *VAR21 = FUN6(VAR20, VAR7 * VAR19);
VAR20 *VAR22 = FUN6(VAR20, VAR7);

gfloat VAR23 = 0.0;

gint VAR24,VAR25,VAR26;

for (VAR24=0; VAR24<VAR7; ++VAR24)
{
gint VAR27 = (VAR20) (VAR23 + VAR18);
if (VAR27 > VAR6-1)
VAR27 = VAR6-1;

gint VAR28 = VAR27 - VAR19 + 1;

if (VAR28 < 0)
VAR28 = 0;

VAR22[VAR24] = VAR28;


gfloat VAR29 = 0.0;


gfloat VAR30 = FUN7(0.0,FUN2(VAR6-1,VAR23));

for (VAR25=0; VAR25<VAR19; ++VAR25)
{

VAR29 += FUN8((VAR28+VAR25 - VAR30) * VAR17);
}

FUN9(VAR29 > 0.0f);

gfloat VAR31 = 0.0;

for (VAR26=0; VAR26<VAR19; ++VAR26)
{
gfloat VAR32 = VAR31 + FUN8((VAR28+VAR26 - VAR30) * VAR17) / VAR29;
VAR21[VAR24*VAR19+VAR26] = (VAR20) (VAR32*VAR33+0.5) - (VAR20) (VAR31*VAR33+0.5);
VAR31 = VAR32;
}
VAR23 += VAR15;
}

guint VAR34,VAR35,VAR36;
VAR20 *VAR37 = VAR21;

for (VAR34 = 0; VAR34 < VAR7 ; VAR34++)
{
VAR38 *VAR39 = FUN10(VAR5, 0, VAR34);
for (VAR35 = VAR8; VAR35 < VAR10; VAR35++)
{
VAR38 *VAR40 = FUN10(VAR4, VAR35, VAR22[VAR34]);
for (VAR36 = 0; VAR36 < VAR13; VAR36++)
{
gint VAR41 = 0;
for (VAR24 = 0; VAR24 < VAR19; VAR24++)
{
VAR41 += VAR40[VAR24*VAR4->VAR42]* VAR37[VAR24];
}
VAR39[VAR35*VAR12+VAR36] = FUN11((VAR41 + (VAR33/2))>>VAR43, 16);
VAR40++;
}
}
VAR37+=VAR19;
}

FUN12(VAR21);
FUN12(VAR22);
}