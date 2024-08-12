FUN1 (VAR1 * VAR2, const char *VAR3, VAR4 * VAR5)
{
decContext VAR6;		
decNumber VAR7;			

FUN2 (&VAR6, VAR8);	
VAR6.VAR9 = VAR5->VAR9;	

FUN3 (&VAR7, VAR3, &VAR6);	

FUN4 (VAR2, &VAR7, &VAR6);
if (VAR6.VAR10 != 0)
{				
FUN5 (VAR5, VAR6.VAR10);	
}
return VAR2;
}