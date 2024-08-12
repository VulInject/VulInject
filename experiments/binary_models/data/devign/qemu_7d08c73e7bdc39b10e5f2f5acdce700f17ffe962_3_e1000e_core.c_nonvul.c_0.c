FUN1(VAR1 *VAR2, struct VAR3 *VAR4, struct VAR5 *VAR6, int VAR7)
{
    uint32_t VAR8 = FUN2(VAR6->VAR9.VAR10);
    uint32_t VAR11 = VAR8 & (VAR12 | VAR13);
    unsigned int VAR14 = VAR8 & 0xffff;
    uint64_t VAR15;
    struct VAR16 *VAR17 = (struct VAR16 *)VAR6;
    bool VAR18 = VAR8 & VAR19;
    if (VAR11 == VAR12)
    {
        FUN3(VAR17, &VAR4->VAR20);
        FUN4(VAR2, FUN2(VAR17->VAR21));
        return;
    }
    else if (VAR11 == (VAR12 | VAR13))
    {
        VAR4->VAR22 = FUN2(VAR6->VAR23.VAR10) >> 8;
        VAR4->VAR24 = (VAR8 & VAR25) ? 1 : 0;
        FUN5(VAR2, VAR6);
    }
    else
    {
        FUN5(VAR2, VAR6);
        VAR4->VAR24 = 0;
    }
    VAR15 = FUN6(VAR6->VAR26);
    if (!VAR4->VAR27)
    {
        if (!FUN7(VAR4->VAR28, VAR15, VAR14))
        {
            VAR4->VAR27 = true;
        }
    }
    if (VAR18)
    {
        if (!VAR4->VAR27 && FUN8(VAR4->VAR28))
        {
            if (FUN9(VAR2->VAR29) && FUN10(VAR8))
            {
                FUN11(VAR4->VAR28, FUN12(VAR6->VAR23.VAR30.VAR31), VAR2->VAR32);
            }
            if (FUN13(VAR2, VAR4, VAR7))
            {
                FUN14(VAR2, VAR4->VAR28);
            }
        }
        VAR4->VAR27 = false;
        FUN15(VAR4->VAR28);
        VAR4->VAR22 = 0;
        VAR4->VAR24 = 0;
    }
}