static VAR1 FUN1(VAR2 *VAR3, hwaddr VAR4, VAR5 *VAR6, unsigned VAR7, unsigned VAR8, uint64_t VAR9, MemTxAttrs VAR10)
{
    uint64_t VAR11;
    VAR11 = VAR3->VAR12->read(VAR3->VAR13, VAR4, VAR7);
    if (VAR3->VAR14)
    {
        FUN2(FUN3(), VAR3, VAR4, VAR11, VAR7);
    }
    else if (VAR15)
    {
        hwaddr VAR16 = FUN4(VAR3, VAR4);
        FUN5(FUN3(), VAR3, VAR16, VAR11, VAR7);
    }
    *VAR6 |= (VAR11 & VAR9) << VAR8;
    return VAR17;