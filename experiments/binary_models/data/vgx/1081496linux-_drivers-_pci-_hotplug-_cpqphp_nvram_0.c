static VAR1 FUN1(VAR1 **VAR2, u32 VAR3, VAR1 *VAR4, VAR1 *VAR5)
{
if ((*VAR4 + 4) > *VAR5)
return(1);

**VAR2 = VAR3;
(*VAR2)++;
*VAR4 += 4;
return(0);
}