int FUN1(struct VAR1 *VAR1,
struct VAR2 *VAR2,
unsigned int VAR3)
{
int VAR4;

FUN2(VAR1);
VAR4 = FUN3(VAR1, VAR2, VAR3);
FUN4(VAR1);
return VAR4;
}