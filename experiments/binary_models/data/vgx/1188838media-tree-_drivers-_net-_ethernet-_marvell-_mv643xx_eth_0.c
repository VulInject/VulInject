static void FUN1(struct VAR1 *VAR2)
{
struct VAR3 *VAR4 = FUN2(VAR2);
int VAR5;
u32 VAR6;


VAR5 = 0;
switch (VAR4->VAR7->VAR8) {
case VAR9:
VAR5 = VAR10;
break;
case VAR11:
VAR5 = VAR12;
break;
}

if (VAR5) {
VAR6 = FUN3(VAR4, VAR5);
VAR6 |= 1 << VAR2->VAR13;
FUN4(VAR4, VAR5, VAR6);
}
}