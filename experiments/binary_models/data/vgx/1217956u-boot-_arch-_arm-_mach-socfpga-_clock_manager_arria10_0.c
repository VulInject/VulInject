static unsigned int FUN1(struct VAR1 *VAR2,
struct VAR3 *VAR4)
{
unsigned int VAR5;


switch (VAR2->VAR6) {
case VAR7:
VAR5 = FUN2(VAR2);
VAR5 /= (VAR2->VAR8 & VAR9)
+ 1;
break;
case VAR10:
VAR5 = FUN3(VAR2, VAR4);
VAR5 /= ((VAR2->VAR8 >>
VAR11) &
VAR9) + 1;
break;
case VAR12:
VAR5 = VAR13;
break;
case VAR14:
VAR5 = VAR15;
break;
case VAR16:
VAR5 = VAR17;
break;
default:
return 0;
}

VAR5 /= VAR2->VAR18 + 1;
return VAR5;
}