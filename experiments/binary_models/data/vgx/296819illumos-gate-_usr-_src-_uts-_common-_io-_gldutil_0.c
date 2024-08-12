static void
FUN1(VAR1 *VAR2, VAR3 *VAR4, struct VAR5 *VAR6,
VAR7 *VAR8, int VAR9)
{
struct VAR10 *VAR11 = (struct VAR10 *)(VAR8);

if (!((VAR12 *)VAR2->VAR13)->VAR14)
return;


if (!VAR4->VAR15)
return;		


if (VAR11->VAR16 == VAR17) {
struct VAR18 *VAR19 = (struct VAR18 *)(VAR8 + VAR20);
int VAR21 = VAR9 - VAR20;


if ((VAR21 < sizeof (struct VAR18)) ||
(VAR11->VAR22 != VAR17))
return;


if (VAR11->VAR23 != VAR24)
return;

switch (VAR19->VAR25) {
case VAR26:	
FUN2(VAR2, VAR4->VAR27, VAR6, VAR19, VAR21);

case VAR28:	
case VAR29:	
FUN3(VAR2, VAR6, VAR19, VAR21);
break;
default:	
return;
}

return;
}



if (VAR6 == NULL)
return;		

if ((VAR6->VAR30 & 0x04) != 0)
return;		

FUN4(VAR2, VAR6, VAR4->VAR27, VAR11->VAR22,
VAR11->VAR16);	
}