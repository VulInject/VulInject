double
FUN1(double VAR1, int VAR2)
{
int32_t VAR3,VAR4,VAR5;
FUN2(VAR4,VAR5,VAR1);
VAR3 = (VAR4&0x7ff00000)>>20;		
if (VAR3==0) {				
if ((VAR5|(VAR4&0x7fffffff))==0) return VAR1; 
VAR1 *= VAR6;
FUN3(VAR4,VAR1);
VAR3 = ((VAR4&0x7ff00000)>>20) - 54;
if (VAR2< -50000) return VAR7*VAR1; 	
}
if (VAR3==0x7ff) return VAR1+VAR1;		
VAR3 = VAR3+VAR2;
if (VAR3 >  0x7fe) return VAR8*FUN4(VAR8,VAR1); 
if (VAR3 > 0) 				
{FUN5(VAR1,(VAR4&0x800fffff)|(VAR3<<20)); return VAR1;}
if (VAR3 <= -54) {
if (VAR2 > 50000) 	
return VAR8*FUN4(VAR8,VAR1);	
else return VAR7*FUN4(VAR7,VAR1); 	
}
VAR3 += 54;				
FUN5(VAR1,(VAR4&0x800fffff)|(VAR3<<20));
return VAR1*VAR9;
}