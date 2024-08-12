static int FUN1(u32 VAR1, unsigned int *VAR2)
{
unsigned int VAR3 = (VAR1 & VAR4) >> VAR5;
if (VAR3 >= FUN2(VAR6))
return -VAR7;

*VAR2 = VAR6[VAR3];

return 0;
}