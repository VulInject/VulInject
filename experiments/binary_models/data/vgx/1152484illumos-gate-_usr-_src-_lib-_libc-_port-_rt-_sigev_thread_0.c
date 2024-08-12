static void *
FUN1(void *VAR1)
{
VAR2 *VAR3 = VAR1;
void (*VAR4)(union VAR5) = VAR3->VAR6;
union sigval VAR7 = VAR3->VAR8;

FUN2(VAR3, sizeof (*VAR3));
FUN3(VAR7);
return (NULL);
}