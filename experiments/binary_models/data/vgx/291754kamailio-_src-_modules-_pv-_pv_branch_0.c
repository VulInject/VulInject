int FUN1(struct VAR1 *VAR2, VAR3 *VAR4,
VAR5 *VAR6)
{
struct VAR7* VAR8;
str VAR9;

VAR8=FUN2();
if (! FUN3(VAR8 && VAR8->VAR10))
return FUN4(VAR2, VAR4, VAR6);

switch(VAR4->VAR11.VAR12.VAR13.VAR14.VAR15)
{
case 1: 
return FUN5(VAR2, VAR4, VAR6,
(int)VAR8->VAR10->VAR16.VAR17);
case 2: 
return FUN5(VAR2, VAR4, VAR6,
(int)VAR8->VAR10->VAR18);
case 3: 
return FUN5(VAR2, VAR4, VAR6,
(int)VAR8->VAR10->VAR19);
case 4: 
VAR9.VAR9   = VAR8->VAR20;
VAR9.VAR21 = VAR8->VAR21;
return FUN6(VAR2, VAR4, VAR6, &VAR9);
case 5: 
return FUN5(VAR2, VAR4, VAR6,
(int)VAR8->VAR21);
case 6: 
if(FUN7((int)VAR8->VAR10->VAR19,
0, 0, &VAR9)<0)
return FUN4(VAR2, VAR4, VAR6);
return FUN6(VAR2, VAR4, VAR6, &VAR9);
default:

return FUN6(VAR2, VAR4, VAR6,
&VAR8->VAR10->VAR22);
}

return 0;
}