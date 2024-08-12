static int FUN1(struct VAR1 *VAR2, unsigned int VAR3,
unsigned int *VAR4)
{
unsigned int VAR5;
unsigned int VAR6;

VAR5 = FUN2(VAR2, VAR3+2);
VAR6 = FUN3(VAR2, VAR3+4);

if(VAR6!=1) return 0;

if(VAR5==3) { 
*VAR4 = FUN2(VAR2, VAR3+8);
return 1;
}
else if(VAR5==4) { 
*VAR4 = FUN3(VAR2, VAR3+8);
return 1;
}

return 0;
}