struct VAR1 **FUN1(struct VAR2 *VAR3)
{
struct VAR4 *VAR5;
struct VAR1 *VAR6, **VAR7;
int VAR8, VAR9;


VAR5 = VAR3->VAR10->VAR11;


FUN2((VAR3->VAR12 & (VAR13 - 1)) != 0);

VAR9 = VAR3->VAR12 >> VAR14;

VAR7 = FUN3(VAR9, sizeof(struct VAR1 *));
if (VAR7 == NULL)
return FUN4(-VAR15);

for (VAR8 = 0; VAR8 < VAR9; VAR8++) {
VAR6 = FUN5(VAR5, VAR8);
if (FUN6(VAR6))
goto VAR16;
VAR7[VAR8] = VAR6;


FUN7(FUN8(VAR5, VAR17) &&
(FUN9(VAR6) >= 0x00100000UL));
}

return VAR7;

VAR16:
while (VAR8--)
FUN10(VAR7[VAR8]);

FUN11(VAR7);
return FUN12(VAR6);
}