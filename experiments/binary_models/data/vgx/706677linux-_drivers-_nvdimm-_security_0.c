int FUN1(struct VAR1 *VAR2)
{
struct VAR3 *VAR3 = FUN2(VAR2);
int VAR4;

FUN3(VAR2);
VAR4 = FUN4(VAR3);
FUN5(VAR2);
return VAR4;
}