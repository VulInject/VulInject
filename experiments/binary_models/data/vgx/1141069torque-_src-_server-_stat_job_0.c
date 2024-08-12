int FUN1(

VAR1      *VAR2,      
VAR3 *VAR4,
VAR5 *VAR6,
int            VAR7,
int            VAR8,
VAR9    *VAR10,
bool           VAR11,
int           *VAR12,
int            VAR13)  

{
int    VAR14;
int    VAR15;

VAR8 &= VAR16;  
VAR15 = VAR8; 



if (VAR2 != NULL)
{

return(FUN2(VAR2, VAR4, VAR6, VAR10, VAR8, VAR7, VAR12, VAR13));
}    



for (VAR14 = 0; VAR14 < VAR7; VAR14++)
{
if ((VAR11 == true) &&
(FUN3(VAR14) == false))
continue;

if (((VAR4 + VAR14)->VAR17 & VAR8) &&
!((VAR4 + VAR14)->VAR17 & VAR18))
{
if (!(((VAR4 + VAR14)->VAR17 & VAR19) && (VAR13 == 0)))
{
(VAR4 + VAR14)->FUN4(
VAR6 + VAR14,
VAR10,
(VAR4 + VAR14)->VAR20,
NULL,
VAR21,
VAR15);


if ((VAR14 == VAR22) &&
((VAR6 + VAR14)->VAR17 & VAR23))
FUN5(VAR14, VAR6, VAR10);
}
}
}    


return(VAR24);
}