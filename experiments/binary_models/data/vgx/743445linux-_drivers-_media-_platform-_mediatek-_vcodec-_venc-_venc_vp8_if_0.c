static int FUN1(void *VAR1)
{
int VAR2 = 0;
struct VAR3 *VAR4 = (struct VAR3 *)VAR1;

FUN2(VAR4);

VAR2 = FUN3(&VAR4->VAR5);

if (VAR4->VAR6)
FUN4(VAR4);

FUN5(VAR4);
FUN6(VAR4);

return VAR2;
}