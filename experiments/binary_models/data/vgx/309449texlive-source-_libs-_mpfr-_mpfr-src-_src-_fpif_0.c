FUN1 (mpfr_ptr VAR1, VAR2 *VAR3)
{
int VAR4;
mpfr_prec_t VAR5;
unsigned char *VAR6;
size_t VAR7;

VAR5 = FUN2 (VAR3);
if (VAR5 == 0) 
return -1;
FUN3(VAR3 != NULL); 
if (VAR5 > VAR8)
return -1;
FUN4 (VAR9 == 1);  
FUN5 (VAR1, VAR5);

VAR4 = FUN6 (VAR1, VAR3);
if (VAR4 != 0)
{
FUN7 (VAR1);
return -1;
}


if (!FUN8 (VAR1))
{

FUN4 (VAR10 == 8);
FUN4 ((VAR8 + 7) >> 3 <= (VAR11) -1);
VAR7 = (VAR5 + 7) >> 3; 
VAR6 = (unsigned char*) FUN9 (VAR7);
FUN10(VAR6 != NULL);
VAR4 = fread (VAR6, VAR7, 1, VAR3);
if (VAR4 != 1)
{
FUN11 (VAR6, VAR7);
FUN7 (VAR1);
return -1;
}
FUN12 (VAR1, VAR6, VAR7);
FUN11 (VAR6, VAR7);
}

return 0;
}