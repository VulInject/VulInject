static int FUN1(struct VAR1 *VAR2,
struct VAR3 *VAR4,
struct VAR5 *VAR6)
{
struct VAR7 *VAR8 = FUN2(VAR2);
struct VAR9 *VAR10;

switch (VAR6->VAR11) {
case VAR12:
if (VAR6->VAR13 >= FUN3(VAR14))
return -VAR15;

VAR6->VAR6 = VAR14[VAR6->VAR13];
break;

case VAR16:
VAR10 = FUN4(VAR8, VAR4,
VAR12,
VAR6->VAR17);

if (VAR6->VAR13 == 0) {
VAR6->VAR6 = VAR10->VAR6;
break;
}

switch (VAR10->VAR6) {
case VAR18:
if (VAR6->VAR13 == 1)
VAR6->VAR6 = VAR19;
else
return -VAR15;
break;
default:
if (VAR6->VAR13 != 0)
return -VAR15;
}

break;

default:
return -VAR15;
}

return 0;
}