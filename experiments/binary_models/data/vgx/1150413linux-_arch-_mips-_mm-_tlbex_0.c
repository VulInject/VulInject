static int FUN1(void)
{
int VAR1;
unsigned int VAR2 = VAR3[0].VAR4 & ~VAR5;

VAR1 = FUN2(VAR2);

if (VAR1 == 0)
return -1;

VAR1--; 

VAR5 |= (1 << VAR1);

return VAR1;
}