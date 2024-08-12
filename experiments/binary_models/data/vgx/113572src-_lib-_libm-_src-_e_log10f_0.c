float
FUN1(float VAR1)
{
float VAR2,VAR3;
int32_t VAR4,VAR5,VAR6;

FUN2(VAR6,VAR1);

VAR5=0;
if (VAR6 < 0x00800000) {                  
if ((VAR6&0x7fffffff)==0)
return -VAR7/VAR8;             
if (VAR6<0) return (VAR1-VAR1)/VAR8;        
VAR5 -= 25; VAR1 *= VAR7; 
FUN2(VAR6,VAR1);
}
if (VAR6 >= 0x7f800000) return VAR1+VAR1;
VAR5 += (VAR6>>23)-127;
VAR4  = ((VAR9)VAR5&0x80000000)>>31;
VAR6 = (VAR6&0x007fffff)|((0x7f-VAR4)<<23);
VAR2  = (float)(VAR5+VAR4);
FUN3(VAR1,VAR6);
VAR3  = VAR2*VAR10 + VAR11*FUN4(VAR1);
return  VAR3+VAR2*VAR12;
}