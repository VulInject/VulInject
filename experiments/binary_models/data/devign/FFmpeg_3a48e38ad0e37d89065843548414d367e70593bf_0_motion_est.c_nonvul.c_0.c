int FUN1(VAR1 *VAR2)
{
    VAR3 *const VAR4 = &VAR2->VAR5;
    int VAR6 = FUN2(VAR7 >> VAR8, 1 << VAR8);
    int VAR9 = FUN3(FUN4(VAR2->VAR10->VAR9) & 255, FUN4(VAR2->VAR10->VAR11) & 255);
    if (FUN2(VAR2->VAR10->VAR9, VAR2->VAR10->VAR11) < -FUN2(VAR7, VAR12))
    {
        FUN5(VAR2->VAR10, VAR13, "");
        return -1;
    }
    if (VAR2->VAR14 != VAR15 && VAR2->VAR14 != VAR16 && VAR2->VAR14 != VAR17 && VAR2->VAR10->VAR18 != VAR19)
    {
        FUN5(VAR2->VAR10, VAR13, "");
        return -1;
    }
    VAR4->VAR10 = VAR2->VAR10;
    if (VAR6 < 2 * VAR9 && !VAR4->VAR20)
    {
        FUN5(VAR2->VAR10, VAR21, "");
    }
    FUN6(&VAR2->VAR22, VAR2->VAR22.VAR23, VAR4->VAR10->VAR23);
    FUN6(&VAR2->VAR22, VAR2->VAR22.VAR24, VAR4->VAR10->VAR24);
    FUN6(&VAR2->VAR22, VAR2->VAR22.VAR25, VAR4->VAR10->VAR25);
    FUN6(&VAR2->VAR22, VAR2->VAR22.VAR26, VAR4->VAR10->VAR26);
    VAR4->VAR27 = FUN7(VAR4, 0, VAR4->VAR10->VAR24 & VAR28);
    VAR4->VAR29 = FUN7(VAR4, 0, VAR4->VAR10->VAR25 & VAR28);
    VAR4->VAR30 = FUN7(VAR4, 0, VAR4->VAR10->VAR26 & VAR28);
    if (VAR2->VAR27 & VAR31)
    {
        VAR4->VAR32 = VAR33;
        VAR4->VAR34 = VAR2->VAR22.VAR35;
        if (VAR2->VAR36)
            VAR4->VAR37 = VAR2->VAR22.VAR38;
        else
            VAR4->VAR37 = VAR2->VAR22.VAR39;
    }
    else
    {
        if (VAR4->VAR10->VAR25 & VAR28)
            VAR4->VAR32 = VAR40;
        else if (VAR4->VAR10->VAR25 == VAR41 && VAR4->VAR10->VAR24 == VAR41 && VAR4->VAR10->VAR26 == VAR41)
            VAR4->VAR32 = VAR42;
        else
            VAR4->VAR32 = VAR40;
    }
    VAR4->VAR43 = VAR2->VAR22.VAR44;
    if (VAR2->VAR36)
        VAR4->VAR45 = VAR2->VAR22.VAR46;
    else
        VAR4->VAR45 = VAR2->VAR22.VAR47;
    if (VAR2->VAR48)
    {
        VAR4->VAR20 = VAR2->VAR48;
        VAR4->VAR49 = VAR2->VAR50;
    }
    else
    {
        VAR4->VAR20 = 16 * VAR2->VAR51 + 32;
        VAR4->VAR49 = 8 * VAR2->VAR51 + 16;
    }
    if (VAR2->VAR18 != VAR19)
    {
        if ((VAR4->VAR10->VAR24 & VAR28))
        {
            VAR2->VAR22.VAR24[2] = VAR52;
        }
        if ((VAR4->VAR10->VAR25 & VAR28) && !VAR2->VAR22.VAR25[2])
        {
            VAR2->VAR22.VAR25[2] = VAR52;
        }
        VAR4->VAR45[2][0] = VAR4->VAR45[2][1] = VAR4->VAR45[2][2] = VAR4->VAR45[2][3] = VAR53;
    }
    if (VAR2->VAR18 == VAR54)
    {
        VAR4->VAR32 = VAR55;
    }
    return 0;
}