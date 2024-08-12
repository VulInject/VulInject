void FUN1(void *VAR1)
{
struct VAR2 *VAR3 = (struct VAR2 *)VAR1;

FUN2(VAR3->VAR4);
FUN2(VAR3);
}