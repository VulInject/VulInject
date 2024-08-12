static void FUN1(VAR1 *VAR2)
{
uint32_t VAR3       = 0;     
VAR4 * VAR5  = NULL;
VAR4 * VAR6  = NULL;  

VAR7* VAR8 = ( VAR7* )((VAR1* )VAR2)->VAR9;


if(VAR8->VAR10 != 0)
{



VAR8->VAR10--;       


VAR5 = (VAR4 *)VAR8->VAR11;  


VAR6 = (VAR4 *)VAR8->VAR12;           
VAR6 +=  VAR8->VAR13; 


VAR3 = VAR8->VAR13;


VAR8->VAR11 += (VAR4) VAR3*4;
VAR8->VAR14 -= VAR8->VAR13;    



if (FUN2(VAR8->VAR15, (VAR4) VAR6, (VAR4) VAR5, VAR3) != VAR16)
{

VAR8->VAR17 |= VAR18;


VAR8->VAR19 = VAR20;    


FUN3(VAR8);


FUN4(VAR8);    
}        
}
else
{

if((VAR8->VAR21->VAR22 & VAR23) == VAR24)
{

if(FUN5(VAR8, VAR25) != VAR24)
{

FUN6(VAR8, VAR25);


if((VAR8->VAR21->VAR26 & VAR27) == VAR28)
{ 

FUN7(VAR8, VAR29 | VAR30 | VAR31 | VAR32);

VAR8->VAR19 = VAR20;


FUN3(VAR8);          
}


FUN8(VAR8);
}    
}
}
}