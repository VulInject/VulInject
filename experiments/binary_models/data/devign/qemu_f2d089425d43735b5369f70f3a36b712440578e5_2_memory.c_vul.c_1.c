static VAR1 FUN1(VAR2 *VAR3, hwaddr VAR4, VAR5 *VAR6, unsigned VAR7, unsigned VAR8, uint64_t VAR9, MemTxAttrs VAR10)
{
    uint64_t VAR11 = 0;
    MemTxResult VAR12;
    VAR12 = VAR3->VAR13->FUN2(VAR3->VAR14, VAR4, &VAR11, VAR7, VAR10);
    if (VAR3->VAR15)
    {
        FUN3(FUN4(), VAR3, VAR4, VAR11, VAR7);
    }
    else if (VAR16)
    {
        hwaddr VAR17 = FUN5(VAR3, VAR4);
        FUN6(FUN4(), VAR3, VAR17, VAR11, VAR7);
    }
    *VAR6 |= (VAR11 & VAR9) << VAR8;
    return VAR12;