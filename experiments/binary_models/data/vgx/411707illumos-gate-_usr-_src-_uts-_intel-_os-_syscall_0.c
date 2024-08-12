struct VAR1 *
FUN1(VAR2 *VAR3, long *VAR4)
{
VAR5 *VAR6 = FUN2(VAR3);
struct VAR7 *VAR8 = FUN3(VAR6);
unsigned int VAR9;
struct VAR1 *VAR10;
struct VAR1 *VAR11 = FUN4(VAR6);
int VAR12 = 0;
uint_t VAR13;

FUN5(VAR3 == VAR14 && VAR14->VAR15 & VAR16);

VAR6->VAR17.VAR18++;
VAR6->VAR19 = VAR20;	


VAR6->VAR21 = VAR4;		

VAR9 = VAR8->VAR22;
VAR3->VAR23 = (short)VAR9;
VAR10 = VAR9 >= VAR24 ? &VAR25 : VAR11 + VAR9;

if ((VAR3->VAR26 | VAR27) != 0) {
VAR12 = FUN6();



if (VAR12)
return (&VAR28);	
}


if ((VAR13 = (VAR29)VAR10->VAR30) != 0 &&
FUN7(VAR8, VAR4, VAR13)) {
(void) FUN8(VAR31);
return (&VAR28);	
}

return (VAR10);		
}