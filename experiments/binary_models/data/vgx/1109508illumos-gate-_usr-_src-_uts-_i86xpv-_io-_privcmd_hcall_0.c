static void *
FUN1(void *VAR1)
{
struct { void *VAR2; } *VAR3 = VAR1;
void *VAR4;


FUN2(VAR4, (*VAR3));
return (VAR4);
}