static int FUN1(struct VAR1 *VAR2, struct VAR3 *VAR4)
{
struct VAR5 *VAR6 = FUN2(VAR2);
unsigned long VAR7;
int VAR8 = VAR2->VAR9 & 0xff;
int VAR10 = (VAR2->VAR9 >> 8) & 0xff;
int VAR11 = (VAR2->VAR9 >> 16) & 0xff;
int VAR12 = (VAR2->VAR9 >> 24) & 0xff;

FUN3(&VAR6->VAR13, VAR7);
VAR4->VAR14.VAR15.VAR14[0] = (FUN4(VAR6, VAR8) >> VAR10) & VAR11;
FUN5(&VAR6->VAR13, VAR7);
if (VAR12)
VAR4->VAR14.VAR15.VAR14[0] = VAR11 - VAR4->VAR14.VAR15.VAR14[0];
return 0;
}