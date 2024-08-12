static int FUN1(struct VAR1 *VAR2, struct VAR3 *VAR4)
{
struct VAR5 *VAR6;
struct VAR7 *VAR8 = NULL;
unsigned long VAR9;
unsigned int VAR10;

VAR6 = FUN2(VAR11);
if (FUN3(VAR6))
return FUN4(VAR6);

VAR9 = VAR4->VAR12 << VAR13;
VAR10 = FUN5(VAR9);
if (VAR10)
VAR8 = FUN6(VAR10);

switch (VAR9 & VAR14) {
case VAR15:
if (!VAR8)
return -VAR16;
return FUN7(VAR8, VAR6, VAR4);

case VAR17:
return FUN8(VAR6, VAR4);

case VAR18:
if (!VAR8)
return -VAR16;
return FUN9(VAR8, VAR6, VAR4);
case VAR19:
if (!VAR8)
return -VAR16;
return FUN10(VAR8, VAR6, VAR4);
}

return -VAR20;
}