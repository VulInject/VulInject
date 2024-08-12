struct VAR1 **FUN1(struct VAR2 *VAR3)
{
struct VAR1 **VAR4;

FUN2(VAR3);
VAR4 = FUN3(VAR3);
FUN4(VAR3);

return VAR4;
}