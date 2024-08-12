VAR1 FUN1(VAR2 *VAR3, hwaddr VAR4, uint64_t VAR5, unsigned VAR6, MemTxAttrs VAR7)
{
    if (!FUN2(VAR3, VAR4, VAR6, true))
    {
        FUN3(VAR3, VAR4, VAR5, VAR6);
        return VAR8;
        FUN4(VAR3, &VAR5, VAR6);
        if (VAR3->VAR9->write)
        {
            return FUN5(VAR4, &VAR5, VAR6, VAR3->VAR9->VAR10.VAR11, VAR3->VAR9->VAR10.VAR12, VAR13, VAR3, VAR7);
        }
        else if (VAR3->VAR9->VAR14)
        {
            return FUN5(VAR4, &VAR5, VAR6, VAR3->VAR9->VAR10.VAR11, VAR3->VAR9->VAR10.VAR12, VAR15, VAR3, VAR7);
        }
        else
        {
            return FUN5(VAR4, &VAR5, VAR6, 1, 4, VAR16, VAR3, VAR7)