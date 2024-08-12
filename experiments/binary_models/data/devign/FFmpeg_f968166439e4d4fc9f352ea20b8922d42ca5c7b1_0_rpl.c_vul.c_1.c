static int FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    VAR5 *VAR6 = VAR2->VAR7;
    VAR8 *VAR9 = VAR2->VAR9;
    VAR10 *VAR11;
    VAR12 *VAR13;
    uint32_t VAR14;
    if (VAR6->VAR15 == VAR2->VAR16)
    {
        VAR6->VAR17++;
        VAR6->VAR15 = 0;
    }
    VAR11 = VAR2->VAR18[VAR6->VAR15];
    if (VAR6->VAR17 >= VAR11->VAR19)
        return VAR20;
    VAR13 = &VAR11->VAR21[VAR6->VAR17];
    if (VAR6->VAR22 == 0)
        if (FUN2(VAR9, VAR13->VAR23, VAR24) < 0)
            return FUN3(VAR25);
    if (VAR11->VAR26->VAR27 == VAR28 && VAR11->VAR26->VAR29 == 124)
    {
        uint32_t VAR30;
        FUN4(VAR9, 4);
        VAR30 = FUN5(VAR9);
        if (FUN2(VAR9, -8, VAR31) < 0)
            return FUN3(VAR25);
        VAR14 = FUN6(VAR9, VAR4, VAR30);
        if (VAR14 != VAR30)
        {
            FUN7(VAR4);
            return FUN3(VAR25);
        }
        VAR4->VAR32 = 1;
        VAR4->VAR33 = VAR13->VAR34 + VAR6->VAR22;
        VAR4->VAR35 = VAR6->VAR15;
        VAR6->VAR22++;
        if (VAR6->VAR22 == VAR6->VAR36)
        {
            VAR6->VAR22 = 0;
            VAR6->VAR15++;
        }
    }
    else
    {
        VAR14 = FUN6(VAR9, VAR4, VAR13->VAR37);
        if (VAR14 != VAR13->VAR37)
        {
            FUN7(VAR4);
            return FUN3(VAR25);
        }
        if (VAR11->VAR26->VAR27 == VAR28)
        {
            VAR4->VAR32 = VAR6->VAR36;
        }
        else
        {
            VAR4->VAR32 = VAR14 * 8;
        }
        VAR4->VAR33 = VAR13->VAR34;
        VAR4->VAR35 = VAR6->VAR15;
        VAR6->VAR15++;
    }
    if (VAR6->VAR17 == 0 && VAR6->VAR22 == 0)
        VAR4->VAR38 |= VAR39;
    return VAR14;
}