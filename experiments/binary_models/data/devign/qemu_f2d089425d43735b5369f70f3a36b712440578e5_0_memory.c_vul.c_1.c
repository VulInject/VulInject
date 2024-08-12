static VAR1 FUN1(VAR2 *VAR3, hwaddr VAR4, VAR5 *VAR6, unsigned VAR7, unsigned VAR8, uint64_t VAR9, MemTxAttrs VAR10)
{
    uint64_t VAR11;
    VAR11 = (*VAR6 >> VAR8) & VAR9;
    if (VAR3->VAR12)
    {
        FUN2(FUN3(), VAR3, VAR4, VAR11, VAR7);
    }
    else if (VAR13)
    {
        hwaddr VAR14 = FUN4(VAR3, VAR4);
        FUN5(FUN3(), VAR3, VAR14, VAR11, VAR7);
    }
    return VAR3->VAR15->FUN6(VAR3->VAR16, VAR4, VAR11, VAR7, VAR10);