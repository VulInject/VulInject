static VAR1 FUN1(VAR2 *VAR3, hwaddr VAR4, bool VAR5, ARMMMUIdx VAR6, VAR7 *VAR8)
{
    VAR9 *VAR10 = FUN2(VAR3);
    VAR11 *VAR12 = &VAR10->VAR12;
    MemTxAttrs VAR13 = {};
    VAR14 *VAR15;
    VAR13.VAR16 = VAR5;
    VAR15 = FUN3(VAR3, VAR13);
    VAR4 = FUN4(VAR12, VAR6, VAR4, VAR13, VAR8);
    if (VAR8->VAR17)
    {
        return 0;
    }
    if (FUN5(VAR12, VAR6))
    {
        return FUN6(VAR15, VAR4, VAR13, NULL);
    }
    else
    {
        return FUN7(VAR15, VAR4, VAR13, NULL);
    }
}