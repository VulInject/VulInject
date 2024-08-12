int
FUN1(void)
{
unsigned int VAR1=0;
unsigned int VAR2;

VAR3:
VAR2 = VAR4->VAR5;
FUN2("", VAR2);
VAR4->VAR5 = VAR2; 
FUN3();
VAR2 = VAR4->VAR5;  

VAR2 = *VAR6;
FUN2("", VAR2);
*VAR6 = VAR2; 
FUN3();
VAR2 = *VAR6;  


VAR1 = FUN4(0x61);
VAR1 |= 0x0c;
FUN5(VAR1, 0x61);
VAR1 &= ~0x0c;
FUN5(VAR1, 0x61);

VAR2 = *VAR6;
if (VAR2 & 0x300) goto VAR3;

return 0;
}