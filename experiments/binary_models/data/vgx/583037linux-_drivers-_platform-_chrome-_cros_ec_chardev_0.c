static long FUN1(struct VAR1 *VAR2, unsigned int VAR3,
unsigned long VAR4)
{
struct VAR5 *VAR6 = VAR2->VAR7;
struct VAR8 *VAR9 = VAR6->VAR10;

if (FUN2(VAR3) != VAR11)
return -VAR12;

switch (VAR3) {
case VAR13:
return FUN3(VAR9, (void VAR14 *)VAR4);
case VAR15:
return FUN4(VAR9, (void VAR14 *)VAR4);
case VAR16:
VAR6->VAR17 = VAR4;
return 0;
}

return -VAR12;
}