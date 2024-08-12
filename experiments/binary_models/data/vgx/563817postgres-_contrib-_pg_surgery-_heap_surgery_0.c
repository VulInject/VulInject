static VAR1
FUN1(ItemPointer VAR2, int VAR3, VAR4 *VAR5)
{
int			VAR6;
BlockNumber VAR7,
VAR8;

VAR7 = VAR8 = VAR9;

for (VAR6 = *VAR5; VAR6 < VAR3; VAR6++)
{
ItemPointerData VAR10 = VAR2[VAR6];

VAR8 = FUN2(&VAR10);

if (VAR6 == *VAR5)
VAR7 = VAR8;

if (VAR7 != VAR8)
break;
}

*VAR5 = VAR6;
return VAR7;
}