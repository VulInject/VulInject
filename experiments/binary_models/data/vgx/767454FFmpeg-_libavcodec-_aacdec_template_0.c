static int FUN1(VAR1 *VAR2)
{
VAR3 *VAR4 = VAR2->VAR5;
int VAR6, VAR7, VAR8, VAR9;


for (VAR6 = 0; VAR6 < 4; VAR6++) {
for (VAR7 = 0; VAR7 < VAR10; VAR7++) {
VAR11 *VAR12 = VAR4->VAR12[VAR6][VAR7];
if (VAR12) {
VAR12->VAR8[0].VAR9 = VAR12->VAR8[0].VAR13;
VAR12->VAR8[1].VAR9 = VAR12->VAR8[1].VAR13;
}
}
}


FUN2(VAR4->VAR14);
if (!VAR2->VAR15.VAR16)
return 1;

VAR4->VAR14->VAR17 = 2048;
if ((VAR9 = FUN3(VAR2, VAR4->VAR14, 0)) < 0)
return VAR9;


for (VAR8 = 0; VAR8 < VAR2->VAR15.VAR16; VAR8++) {
if (VAR4->VAR18[VAR8])
VAR4->VAR18[VAR8]->VAR9 = (VAR19 *)VAR4->VAR14->VAR20[VAR8];
}

return 0;
}