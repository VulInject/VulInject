static int
FUN1(const VAR1 *VAR2, const VAR1 *VAR3,
VAR4 *VAR5)
{
VAR6 *VAR7 = FUN2(VAR5);
VAR8 *VAR9 = (VAR8 *) VAR7->VAR9;
SortSupport VAR10 = VAR7->VAR11;
HeapTuple	VAR12;
HeapTuple	VAR13;
TupleDesc	VAR14;
int			VAR15;
int32		VAR16;
Datum		VAR17,
VAR18;
bool		VAR19,
VAR20;


VAR12 = (VAR21) VAR2->VAR22;
VAR13 = (VAR21) VAR3->VAR22;
VAR14 = VAR9->VAR14;


if (VAR7->VAR23)
{
VAR16 = FUN3(VAR2->VAR17, VAR2->VAR19,
VAR3->VAR17, VAR3->VAR19,
VAR10);
if (VAR16 != 0)
return VAR16;

if (VAR10->VAR24)
{
AttrNumber	VAR25 = VAR9->VAR26->VAR27[0];

VAR17 = FUN4(VAR12, VAR25, VAR14, &VAR19);
VAR18 = FUN4(VAR13, VAR25, VAR14, &VAR20);

VAR16 = FUN5(VAR17, VAR19,
VAR18, VAR20,
VAR10);
}
if (VAR16 != 0 || VAR7->VAR28 == 1)
return VAR16;

VAR10++;
VAR15 = 1;
}
else
{

VAR15 = 0;
}

if (VAR9->VAR26->VAR29 == NULL)
{


for (; VAR15 < VAR7->VAR28; VAR15++, VAR10++)
{
AttrNumber	VAR30 = VAR9->VAR26->VAR27[VAR15];

VAR17 = FUN4(VAR12, VAR30, VAR14, &VAR19);
VAR18 = FUN4(VAR13, VAR30, VAR14, &VAR20);

VAR16 = FUN3(VAR17, VAR19,
VAR18, VAR20,
VAR10);
if (VAR16 != 0)
return VAR16;
}
}
else
{

Datum		VAR31[VAR32];
bool		VAR33[VAR32];
Datum		VAR34[VAR32];
bool		VAR35[VAR32];
VAR36 *VAR37;


FUN6(VAR9->VAR38);

VAR37 = FUN7(VAR9->VAR38)->VAR37;

FUN8(VAR12, VAR37, false);
FUN9(VAR9->VAR26, VAR37, VAR9->VAR38,
VAR31, VAR33);

FUN8(VAR13, VAR37, false);
FUN9(VAR9->VAR26, VAR37, VAR9->VAR38,
VAR34, VAR35);

for (; VAR15 < VAR7->VAR28; VAR15++, VAR10++)
{
VAR16 = FUN3(VAR31[VAR15],
VAR33[VAR15],
VAR34[VAR15],
VAR35[VAR15],
VAR10);
if (VAR16 != 0)
return VAR16;
}
}

return 0;
}