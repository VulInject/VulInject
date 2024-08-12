int
FUN1(VAR1 *VAR2)
{
volatile VAR3 *VAR4 = (volatile VAR3 *)&VAR2->VAR5;
uint32_t VAR6;
VAR7 *VAR8 = VAR9;
VAR10 *VAR11;
uint_t VAR12;
int VAR13 = 0;

FUN2(VAR8);

VAR6 = *VAR4;
FUN3(VAR6);
if (!(VAR6 & VAR14) &&
(VAR6 & VAR15) != 0) {

if ((VAR12 = VAR8->VAR16) != 0)
VAR11 = VAR8->VAR17.VAR18;
else {
VAR12 = 1;
VAR11 = &VAR8->VAR17.VAR19;
}
for (; VAR12; VAR12--, VAR11++) {
if (VAR11->VAR20 == VAR2) {
if (VAR11->VAR21)
VAR13 = 1;
break;
}
}
}

FUN4(VAR8);
return (VAR13);
}