static VAR1 *
FUN1(VAR1 *VAR2, struct VAR3 *VAR4)
{
VAR4->VAR5 = FUN2(*VAR2++);
VAR4->VAR6 = FUN2(*VAR2++);
return VAR2;
}