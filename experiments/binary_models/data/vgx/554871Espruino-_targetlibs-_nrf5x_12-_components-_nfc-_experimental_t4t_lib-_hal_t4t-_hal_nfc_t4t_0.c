static inline void FUN1(volatile nfct_field_sense_state_t VAR1)
{
if (VAR1 == VAR2)
{

uint32_t VAR3 = VAR4->VAR5;

if (VAR3 & VAR6)
{
VAR1 = VAR7;
}
else
{
VAR1 = VAR8;
}
}


switch (VAR1)
{
case VAR7:
if (!VAR9)
{
FUN2(VAR10); 
FUN3(&VAR11);
FUN4(VAR10); 
}
VAR9 = true;
break;

case VAR8:
FUN2(VAR12); 


*(volatile VAR13 *)0x40005010 = 1;


VAR4->VAR14 = 1;
FUN5();
VAR9 = false;

VAR4->VAR15 =
(VAR16 << VAR17) |
(VAR18    << VAR19);


VAR6 = VAR20;

if ((VAR21 != NULL) )
{
FUN6(VAR22, VAR23, 0, 0);
}


VAR24 = VAR24 &
~(1u << VAR25); 

FUN4(VAR12); 
break;

default:

break;
}
}