static int  FUN1(struct VAR1 *VAR2)
{
struct VAR3 *VAR4 = FUN2(VAR2);

FUN3(VAR4->VAR5, VAR6, 0x19);

FUN4(VAR4->VAR5, VAR7, VAR4);
FUN4(VAR4->VAR5, VAR8, VAR4);

FUN5(VAR4->VAR9);
FUN6(VAR4);

return 0;
}