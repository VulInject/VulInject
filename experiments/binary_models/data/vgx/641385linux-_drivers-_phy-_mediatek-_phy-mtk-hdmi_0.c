static int FUN1(struct VAR1 *VAR1)
{
struct VAR2 *VAR3 = FUN2(VAR1);
int VAR4;

VAR4 = FUN3(VAR3->VAR5);
if (VAR4 < 0)
return VAR4;

VAR3->VAR6->FUN4(VAR3);
return 0;
}