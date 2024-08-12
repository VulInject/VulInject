static inline int FUN1(struct VAR1 *VAR2)
{
int VAR3;

if (!VAR2->VAR4)
return -VAR5;	

if (FUN2(VAR2) != VAR6)
return FUN2(VAR2);


switch (FUN3(VAR2)) {
case 9:
VAR3 = 95;
break;
case 10:
VAR3 = 190;
break;
case 11:
VAR3 = 375;
break;
case 12:
VAR3 = 750;
break;
case 13:
VAR3 = 850;  
break;
case 14:
VAR3 = 1600; 
break;
default:
VAR3 = 750;
}
return VAR3;
}