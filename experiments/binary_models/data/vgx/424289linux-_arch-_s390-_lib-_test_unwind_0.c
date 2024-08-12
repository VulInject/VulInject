static noinline notrace int FUN1(struct VAR1 *VAR2)
{
struct pt_regs VAR3;

if (!(VAR2->VAR4 & VAR5))
return 0;

VAR3 = FUN2();
return FUN3(NULL, (VAR2->VAR4 & VAR6) ? &VAR3 : NULL,
(VAR2->VAR4 & VAR7) ? VAR2->VAR8 : 0);
}