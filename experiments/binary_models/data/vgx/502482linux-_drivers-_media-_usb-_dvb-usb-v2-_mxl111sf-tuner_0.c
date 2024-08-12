static int FUN1(struct VAR1 *VAR2,
VAR3 *VAR4)
{
struct VAR5 *VAR6 = VAR2->VAR7;

*VAR4 = 0;

switch (VAR6->VAR8) {
case VAR9:   
*VAR4 = 4000000;
break;
case VAR10:   
*VAR4 = 4500000;
break;
case VAR11:  
*VAR4 = 4570000;
break;
case VAR12:   
*VAR4 = 5000000;
break;
case VAR13:  
*VAR4 = 5380000;
break;
case VAR14:   
*VAR4 = 6000000;
break;
case VAR15:  
*VAR4 = 6280000;
break;
case VAR16:   
*VAR4 = 7200000;
break;
case VAR17: 
*VAR4 = 35250000;
break;
case VAR18:    
*VAR4 = 36000000;
break;
case VAR19: 
*VAR4 = 36150000;
break;
case VAR20:    
*VAR4 = 44000000;
break;
}
return 0;
}