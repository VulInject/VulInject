static int
FUN1(struct VAR1 *VAR1, struct VAR2 *VAR3)
{
unsigned int VAR4 = VAR3->VAR5 - VAR3->VAR6;
struct VAR7 *VAR8 = FUN2(VAR1);

switch (VAR3->VAR9) {
case 0:

if (VAR4 != VAR10)
return -VAR11;

return FUN3(VAR8->VAR12, VAR3,
VAR8->VAR13, VAR8->VAR14, VAR4);

case VAR10 >> VAR15:

if (VAR4 != FUN4(VAR8->VAR16))
return -VAR11;

VAR3->VAR17 = FUN5(VAR3->VAR17);

return FUN6(VAR3, VAR3->VAR6,
VAR8->VAR16->VAR18 >> VAR15,
VAR4, VAR3->VAR17);
}

return -VAR11;
}