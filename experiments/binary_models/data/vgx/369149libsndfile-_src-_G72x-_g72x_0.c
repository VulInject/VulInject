int FUN1 (VAR1 *VAR2, short *VAR3, unsigned char *VAR4)
{	int VAR5, VAR6 ;

for (VAR5 = 0 ; VAR5 < VAR2->VAR7 ; VAR5++)
VAR3 [VAR5] = VAR2->FUN2 (VAR3 [VAR5], VAR2) ;

VAR6 = FUN3 (VAR2->VAR8, VAR3, VAR4) ;

return VAR6 ;
}