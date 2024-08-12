extern int FUN1(void);
extern void FUN2(void);

void
FUN3(int VAR1, int VAR2, int VAR3)
{
if (VAR1)  
{
if (VAR3)  
FUN2();  
}
else
VAR1 = 2; 


while (FUN1() )
{
if (VAR3  && FUN4() )
{
FUN2();  
VAR3 = VAR2;
if (FUN1())  
FUN2();  
FUN2(); 
break;
}
}

if (VAR3)  
FUN2(); 
return; 
}