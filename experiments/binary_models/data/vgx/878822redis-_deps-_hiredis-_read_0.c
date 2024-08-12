static int FUN1(VAR1 *VAR2) {
VAR3 **VAR4;
int VAR5;


VAR5 = VAR2->VAR6 + VAR7;
VAR4 = FUN2(VAR2->VAR8, sizeof(*VAR2->VAR8) * VAR5);
if (VAR4 == NULL)
goto VAR9;

VAR2->VAR8 = VAR4;


for (; VAR2->VAR6 < VAR5; VAR2->VAR6++) {
VAR2->VAR8[VAR2->VAR6] = FUN3(1, sizeof(**VAR2->VAR8));
if (VAR2->VAR8[VAR2->VAR6] == NULL)
goto VAR9;
}

return VAR10;
VAR9:
FUN4(VAR2);
return VAR11;
}