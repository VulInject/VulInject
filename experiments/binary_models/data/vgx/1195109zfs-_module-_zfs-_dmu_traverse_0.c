static int
FUN1(VAR1 *VAR2, VAR3 *VAR4, void *VAR5, uint64_t VAR6)
{
VAR7 *VAR8 = VAR5;
zbookmark_phys_t VAR9;

if (FUN2(VAR4))
return (0);

if (VAR6 == 0 && VAR4->VAR10 >= FUN3(VAR8->VAR11))
return (0);

FUN4(&VAR9, VAR8->VAR12, VAR13, VAR14,
VAR4->VAR15.VAR16[VAR17]);

(void) VAR8->FUN5(VAR8->VAR11, VAR2, VAR4, &VAR9, NULL, VAR8->VAR18);

return (0);
}