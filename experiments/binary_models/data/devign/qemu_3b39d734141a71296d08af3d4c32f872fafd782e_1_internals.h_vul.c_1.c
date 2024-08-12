void FUN1(VAR1 *VAR2, hwaddr VAR3, vaddr VAR4, unsigned VAR5, MMUAccessType VAR6, int VAR7, MemTxAttrs VAR8, MemTxResult VAR9, uintptr_t VAR10)
{
    VAR11 *VAR12 = FUN2(VAR2);
    ARMMMUFaultInfo VAR13 = {};
    FUN3(VAR2, VAR10);
    VAR13.VAR14 = (VAR9 != VAR15);
    VAR13.VAR16 = VAR17;
    FUN4(VAR12, VAR4, VAR6, VAR7, &VAR13);
}