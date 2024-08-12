static void FUN1(int VAR1, int VAR2, MemTxAttrs VAR3, int VAR4)
{
    VAR5 *VAR6 = VAR7;
    VAR8 *VAR9 = FUN2(VAR6);
    target_ulong VAR10;
    VAR11 *VAR12;
    assert(FUN3());
    if (VAR6->VAR13)
    {
        FUN4(VAR6, VAR14);
        return;
    }
    VAR10 = (VAR6->VAR15 & VAR16) + VAR1;
    VAR10 = VAR9->FUN5(VAR6, VAR10, VAR2);
    FUN6(VAR12, &VAR6->VAR17, VAR18)
    {
        if (FUN7(VAR12, VAR10, VAR2) && (VAR12->VAR4 & VAR4))
        {
            if (VAR4 == VAR19)
            {
                VAR12->VAR4 |= VAR20;
            }
            else
            {
                VAR12->VAR4 |= VAR21;
            }
            VAR12->VAR22 = VAR10;
            VAR12->VAR23 = VAR3;
            if (!VAR6->VAR13)
            {
                if (VAR12->VAR4 & VAR24 && !VAR9->FUN8(VAR6, VAR12))
                {
                    VAR12->VAR4 &= ~VAR25;
                    continue;
                }
                VAR6->VAR13 = VAR12;
                FUN9();
                FUN10(VAR6);
                if (VAR12->VAR4 & VAR26)
                {
                    VAR6->VAR27 = VAR28;
                    FUN11(VAR6);
                }
                else
                {
                    VAR6->VAR29 = 1 | FUN12();
                    FUN13(VAR6);
                }
            }
        }
        else
        {
            VAR12->VAR4 &= ~VAR25;
        }
    }
}