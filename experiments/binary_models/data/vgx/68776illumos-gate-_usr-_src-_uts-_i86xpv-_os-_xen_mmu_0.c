void
FUN1(paddr_t VAR1, uint_t VAR2, uint_t VAR3, x86pte_t VAR4)
{
mmu_update_t VAR5;
maddr_t VAR6 = FUN2(VAR1);
int VAR7;

VAR5.VAR8 = (VAR6 + VAR2 * VAR9) | VAR10;
VAR5.VAR11 = VAR4;
if (FUN3(&VAR5, 1, &VAR7, VAR12) || VAR7 != 1)
FUN4("");
}