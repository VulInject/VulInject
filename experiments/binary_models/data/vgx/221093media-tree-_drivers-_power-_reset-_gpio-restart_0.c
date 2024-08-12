static int FUN1(struct VAR1 *this,
unsigned long VAR2, void *VAR3)
{
struct VAR4 *VAR4 =
FUN2(this, struct VAR4, VAR5);


FUN3(VAR4->VAR6, 1);
FUN4(VAR4->VAR7);


FUN5(VAR4->VAR6, 0);
FUN4(VAR4->VAR8);


FUN5(VAR4->VAR6, 1);


FUN4(VAR4->VAR9);

FUN6(1);

return VAR10;
}