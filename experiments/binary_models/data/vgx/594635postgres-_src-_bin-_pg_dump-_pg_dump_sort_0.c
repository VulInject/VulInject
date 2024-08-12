static int
FUN1(VAR1 *VAR2,
DumpId VAR3,
bool *VAR4,
VAR5 *VAR6,
VAR1 **VAR7,
int VAR8)
{
int			VAR9;


if (VAR4[VAR2->VAR10])
return 0;


if (VAR6[VAR2->VAR10] == VAR3)
return 0;


for (VAR9 = 0; VAR9 < VAR8; VAR9++)
{
if (VAR7[VAR9] == VAR2)
return 0;
}


VAR7[VAR8++] = VAR2;


for (VAR9 = 0; VAR9 < VAR2->VAR11; VAR9++)
{
if (VAR2->VAR12[VAR9] == VAR3)
return VAR8;
}


for (VAR9 = 0; VAR9 < VAR2->VAR11; VAR9++)
{
VAR1 *VAR13 = FUN2(VAR2->VAR12[VAR9]);
int			VAR14;

if (!VAR13)
continue;			
VAR14 = FUN1(VAR13,
VAR3,
VAR4,
VAR6,
VAR7,
VAR8);
if (VAR14 > 0)
return VAR14;
}


VAR6[VAR2->VAR10] = VAR3;

return 0;
}