struct VAR1 *FUN1(struct VAR2 *VAR3)
{
struct VAR1 *VAR4 = NULL;
struct VAR5 *VAR6;

FUN2(VAR3);
VAR6 = VAR3->VAR6;
if (VAR6) {
if (!(VAR3->VAR7 & VAR8))
VAR4 = FUN3(VAR6);
}
FUN4(VAR3);
return VAR4;
}