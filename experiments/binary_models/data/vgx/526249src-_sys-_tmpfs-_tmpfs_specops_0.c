int
FUN1(void *VAR1)
{
struct VAR2  *VAR3 = VAR1;
struct VAR4 *VAR5 = VAR3->VAR6;

FUN2(FUN3(VAR5), VAR7);
return (FUN4(VAR3));
}