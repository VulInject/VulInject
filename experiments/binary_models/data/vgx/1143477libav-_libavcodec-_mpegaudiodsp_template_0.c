static inline int FUN1(VAR1 *VAR2)
{
int VAR3;
VAR3 = (int)((*VAR2) >> VAR4);
*VAR2 &= (1<<VAR4)-1;
return FUN2(VAR3);
}