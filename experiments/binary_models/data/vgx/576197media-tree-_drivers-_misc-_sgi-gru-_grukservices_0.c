int FUN1(void *VAR1)
{
struct VAR2 *VAR3 = (void *)VAR1;
int VAR4;

VAR4 = VAR3->VAR5;
if (VAR4 == VAR6)
VAR4 = FUN2(VAR1);
FUN3();
return VAR4;

}