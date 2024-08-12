static int FUN1(VAR1 *VAR2)
{
int VAR3;
int VAR4 = VAR5;

FUN2(VAR2->VAR6 > 1);

for (VAR3 = 1; VAR3 < VAR2->VAR6; VAR3++) {
int VAR7;
if (VAR2->VAR8[VAR3] == VAR9)
continue;
VAR7 = FUN3(VAR2->VAR10[VAR3]);
VAR4 = FUN4(VAR4, VAR7);
}
if (VAR4 == VAR5)
return 0;
return VAR4;
}