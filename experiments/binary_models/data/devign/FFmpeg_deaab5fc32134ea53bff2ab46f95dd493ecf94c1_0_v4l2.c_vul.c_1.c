static int FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    struct VAR5 *VAR6 = VAR2->VAR7;
    VAR8 *VAR9;
    int VAR10, VAR11;
    int VAR12, VAR13, VAR14;
    uint32_t VAR15, VAR16;
    if (VAR4->VAR10 <= 0 || VAR4->VAR11 <= 0 || VAR4->VAR17.VAR18 <= 0)
    {
        FUN2(VAR2, VAR19, "");
        return -1;
    }
    VAR10 = VAR4->VAR10;
    VAR11 = VAR4->VAR11;
    VAR13 = VAR4->VAR17.VAR18;
    VAR14 = VAR4->VAR17.VAR20;
    if ((unsigned)VAR10 > 32767 || (unsigned)VAR11 > 32767)
    {
        FUN2(VAR2, VAR19, "", VAR10, VAR11);
        return -1;
    }
    VAR9 = FUN3(VAR2, 0);
    if (!VAR9)
    {
        return FUN4(VAR21);
    }
    FUN5(VAR9, 64, 1, 1000000);
    VAR6->VAR10 = VAR10;
    VAR6->VAR11 = VAR11;
    VAR6->VAR13 = VAR13;
    VAR6->VAR14 = VAR14;
    VAR16 = 0;
    VAR6->VAR22 = FUN6(VAR2, &VAR16);
    if (VAR6->VAR22 < 0)
    {
        FUN7(VAR9);
        return FUN4(VAR23);
    }
    FUN2(VAR2, VAR24, "", VAR6->VAR22, VAR16);
    VAR15 = FUN8(VAR4->VAR25);
    if (VAR15 == 0 || (FUN9(VAR2, &VAR10, &VAR11, VAR15) < 0))
    {
        int VAR26, VAR27;
        VAR27 = 0;
        VAR26 = 0;
        while (!VAR27)
        {
            VAR15 = VAR28[VAR26].VAR29;
            if (FUN9(VAR2, &VAR10, &VAR11, VAR15) < 0)
            {
                VAR15 = 0;
                VAR26++;
            }
            else
            {
                VAR27 = 1;
            }
            if (VAR26 == sizeof(VAR28) / sizeof(struct VAR30))
            {
                VAR27 = 1;
            }
        }
    }
    if (VAR15 == 0)
    {
        FUN2(VAR2, VAR19, "");
        close(VAR6->VAR22);
        FUN7(VAR9);
        return FUN4(VAR23);
    }
    VAR6->VAR31 = VAR15;
    if (FUN10(VAR2, VAR4) < 0)
        return FUN4(VAR23);
    VAR9->VAR32->VAR25 = FUN11(VAR15);
    VAR6->VAR33 = FUN12(VAR9->VAR32->VAR25, VAR10, VAR11);
    if (VAR16 & VAR34)
    {
        VAR6->VAR35 = VAR36;
        VAR12 = FUN13(VAR2);
        if (VAR12 == 0)
        {
            VAR12 = FUN14(VAR2);
        }
    }
    else
    {
        VAR6->VAR35 = VAR37;
        VAR12 = FUN15(VAR2);
    }
    if (VAR12 < 0)
    {
        close(VAR6->VAR22);
        FUN7(VAR9);
        return FUN4(VAR23);
    }
    VAR6->VAR38 = FUN16(VAR6->VAR22);
    VAR9->VAR32->VAR39 = VAR40;
    VAR9->VAR32->VAR41 = VAR42;
    VAR9->VAR32->VAR10 = VAR10;
    VAR9->VAR32->VAR11 = VAR11;
    VAR9->VAR32->VAR17.VAR18 = VAR13;
    VAR9->VAR32->VAR17.VAR20 = VAR14;
    VAR9->VAR32->VAR43 = VAR6->VAR33 * 1 / FUN17(VAR9->VAR32->VAR17) * 8;
    return 0;
}