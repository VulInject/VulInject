static int FUN1(struct VAR1 *VAR2,
struct VAR3 *VAR4)
{
struct VAR5 *VAR6 = FUN2(VAR2);
struct VAR7 *VAR8 =
(struct VAR7 *)VAR2->VAR9;
struct VAR10 *VAR11 = FUN3(VAR6);
unsigned int VAR12, VAR13, VAR14, VAR15;
unsigned int VAR16, VAR17 = 0, VAR18 = 0;
unsigned int VAR19, VAR20;

if (strstr(VAR4->VAR21.VAR22, "") ||
strstr(VAR4->VAR21.VAR22, ""))
VAR17 = 1;

FUN4(VAR11->VAR23, VAR8->VAR24, &VAR19);
FUN4(VAR11->VAR23, VAR8->VAR25, &VAR20);



VAR14 = VAR4->VAR26.VAR27.VAR26[0];
if (VAR14 > VAR8->VAR28)
VAR14 = VAR8->VAR28;
VAR12 = VAR14;

if (VAR8->VAR29 == 8) 
VAR14 = (VAR14 * 10) << VAR8->VAR29;
else { 
if (VAR17 && VAR14 > VAR8->VAR29)
VAR14 = (VAR14 - VAR8->VAR29) * 75;
else
VAR14 = (VAR8->VAR29 - VAR14) * 75;
VAR14 <<= 8;
VAR14 /= 100;
if (!(VAR17 && VAR12 > VAR8->VAR29)) {
VAR14 = ~VAR14;
VAR14 += 1;
}
VAR14 &= 0xffff;
}


VAR15 = VAR4->VAR26.VAR27.VAR26[1];
if (VAR15 > VAR8->VAR28)
VAR15 = VAR8->VAR28;
VAR13 = VAR15;

if (VAR8->VAR29 == 8) 
VAR15 = (VAR15 * 10) << VAR8->VAR29;
else { 
if (VAR17 && VAR15 > VAR8->VAR29)
VAR15 = (VAR15 - VAR8->VAR29) * 75;
else
VAR15 = (VAR8->VAR29 - VAR15) * 75;
VAR15 <<= 8;
VAR15 /= 100;
if (!(VAR17 && VAR13 > VAR8->VAR29)) {
VAR15 = ~VAR15;
VAR15 += 1;
}
VAR15 &= 0xffff;
}

if (VAR19 != VAR14 || VAR20 != VAR15)
VAR18 = 1;
else
return 0;

for (VAR16 = 0; VAR16 < 3; VAR16++) { 

FUN5(VAR11->VAR23, VAR8->VAR24, VAR14);


FUN5(VAR11->VAR23, VAR8->VAR25, VAR15);

FUN4(VAR11->VAR23, VAR8->VAR24, &VAR12);
FUN4(VAR11->VAR23, VAR8->VAR25, &VAR13);
if (VAR13 == VAR15 && VAR12 == VAR14)
break;
}

return VAR16 == 3 ? -VAR30 : VAR18;
}