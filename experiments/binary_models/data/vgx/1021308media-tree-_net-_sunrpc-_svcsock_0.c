static int FUN1(struct VAR1 *VAR2)
{
struct VAR3 *VAR4 = FUN2(VAR2, struct VAR3, VAR5);
struct VAR6	*VAR7 = VAR2->VAR8;
unsigned long VAR9;


FUN3(VAR10, &VAR4->VAR11->VAR12);
VAR9 = FUN4(&VAR4->VAR5.VAR13) + VAR7->VAR14;
if (VAR9*2 > FUN5(VAR4->VAR15))
return 0;
FUN6(VAR10, &VAR4->VAR11->VAR12);
return 1;
}