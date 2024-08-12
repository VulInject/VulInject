int
FUN1 (mpq_srcptr VAR1, long VAR2, unsigned long VAR3)
{

FUN2 (FUN3(FUN4(VAR1)) > 0);

if (VAR2 >= 0)
return FUN5 (VAR1, VAR2, VAR3);
if (FUN3(FUN6(VAR1)) >= 0)
{
return 1;                                
}
else
{
mpq_t  VAR4;
FUN3(FUN6(VAR4)) = -FUN3(FUN6(VAR1));
FUN7(FUN6(VAR4)) = FUN7(FUN6(VAR1));
FUN3(FUN4(VAR4)) = FUN3(FUN4(VAR1));
FUN7(FUN4(VAR4)) = FUN7(FUN4(VAR1));

return - FUN5 (VAR4, FUN8 (unsigned long, VAR2), VAR3);    
}
}