FUN1 (VAR1 *VAR2, VAR3 *VAR4)
{
VAR3 **VAR5 = &VAR2->VAR6[VAR4->VAR7];
if ((VAR8)*VAR5 & 0x3) return; 
*VAR5 = NULL;
FUN2(VAR4);
}