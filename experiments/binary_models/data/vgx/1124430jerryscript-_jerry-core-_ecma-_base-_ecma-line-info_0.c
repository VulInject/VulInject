FUN1 (VAR1 **VAR2) 
{
VAR1 *VAR3 = *VAR2;
uint32_t VAR4 = 0;

do
{
VAR4 = (VAR4 << VAR5) | (*VAR3 & VAR6);
}
while (*VAR3++ & VAR7);

*VAR2 = VAR3;
return VAR4;
}