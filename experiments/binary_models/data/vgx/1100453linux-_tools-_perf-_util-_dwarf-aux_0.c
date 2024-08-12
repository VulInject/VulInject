static VAR1 *FUN1(VAR1 *VAR2, VAR1 *VAR3)
{
int VAR4;

do {
VAR2 = FUN2(VAR2, VAR3);
if (!VAR2)
break;
VAR4 = FUN3(VAR2);
} while (VAR4 == VAR5 ||
VAR4 == VAR6 ||
VAR4 == VAR7 ||
VAR4 == VAR8);

return VAR2;
}