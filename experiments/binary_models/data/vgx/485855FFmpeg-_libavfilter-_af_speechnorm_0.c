static double FUN1(VAR1 *VAR2, VAR3 *VAR4, int VAR5)
{
VAR6 *VAR7 = VAR2->VAR8;
double VAR9 = VAR7->VAR10;
double VAR11 = VAR4->VAR11;
int VAR12 = VAR4->VAR13;
int VAR14 = VAR4->VAR15;

VAR9 = FUN2(VAR9, VAR11);
while (VAR12 <= VAR5) {
if (VAR14 == VAR4->VAR16)
break;
VAR11 = FUN3(VAR2, VAR4->VAR17[VAR14].VAR18, 0, VAR11,
VAR4->VAR17[VAR14].VAR19, VAR4->VAR17[VAR14].VAR12);
VAR9 = FUN2(VAR9, VAR11);
VAR12 += VAR4->VAR17[VAR14].VAR12;
VAR14++;
if (VAR14 >= VAR20)
VAR14 = 0;
}

return VAR9;
}