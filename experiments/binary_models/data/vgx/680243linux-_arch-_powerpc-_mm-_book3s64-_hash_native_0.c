static inline void FUN1(unsigned long VAR1, int VAR2,
int VAR3, int VAR4)
{
if (FUN2(VAR5)) {


unsigned long VAR6,VAR7,VAR8,VAR9,VAR10;

VAR6 = FUN3(52); 
VAR7 = 0;  
VAR8 = 0; 
VAR9 = 1;   
VAR10 = 0; 


asm volatile("": : :"");
asm volatile(FUN4(%0, %4, %3, %2, %1)
: : ""(VAR6), ""(VAR9), ""(VAR8),
""(VAR10), ""(VAR7) : "");
}


if (FUN2(VAR11)) {

asm volatile("": : :"");
FUN5(VAR1, VAR2, VAR3, VAR4);
}
}