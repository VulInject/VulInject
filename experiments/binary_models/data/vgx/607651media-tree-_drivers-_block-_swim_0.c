static void FUN1(struct VAR1 *VAR2)
{
struct VAR3 *VAR4 = VAR2->VAR5;
struct VAR6 *VAR7;
struct VAR8 *VAR9;

VAR7 = FUN2(VAR4);
while (VAR7) {
int VAR10 = -VAR11;

VAR9 = VAR7->VAR12->VAR13;
if (FUN3(VAR7) >= VAR9->VAR14)
goto VAR15;
if (!VAR9->VAR16)
goto VAR15;
if (FUN4(VAR7) == VAR17 && VAR9->VAR18)
goto VAR15;

switch (FUN4(VAR7)) {
case VAR17:

break;
case VAR19:
VAR10 = FUN5(VAR9, FUN3(VAR7),
FUN6(VAR7),
FUN7(VAR7->VAR20));
break;
}
VAR15:
if (!FUN8(VAR7, VAR10))
VAR7 = FUN2(VAR4);
}
}