static int FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    struct VAR5 *VAR6 = VAR2->VAR7;
    VAR8 *VAR9;
    int VAR10, VAR11;
    int VAR12, VAR13, VAR14;
    uint32_t VAR15, VAR16;
    const char *VAR17;
    if (VAR4->VAR10 <= 0 || VAR4->VAR11 <= 0 || VAR4->VAR18.VAR19 <= 0)
    {
        FUN2(VAR2, VAR20, "");
        return -1;
    }
    VAR10 = VAR4->VAR10;
    VAR11 = VAR4->VAR11;
    VAR13 = VAR4->VAR18.VAR19;
    VAR14 = VAR4->VAR18.VAR21;
    if ((unsigned)VAR10 > 32767 || (unsigned)VAR11 > 32767)
    {
        FUN2(VAR2, VAR20, "", VAR10, VAR11);
        return -1;
    }
    VAR9 = FUN3(VAR2, 0);
    if (!VAR9)
    {
        return -VAR22;
    }
    FUN4(VAR9, 64, 1, 1000000);
    VAR6->VAR10 = VAR10;
    VAR6->VAR11 = VAR11;
    VAR6->VAR13 = VAR13;
    VAR6->VAR14 = VAR14;
    VAR17 = VAR4->VAR23;
    if (!VAR17)
    {
        VAR17 = "";
    }
    VAR16 = 0;
    VAR6->VAR24 = FUN5(VAR17, &VAR16);
    if (VAR6->VAR24 < 0)
    {
        FUN6(VAR9);
        return VAR25;
    }
    FUN2(VAR2, VAR20, "", VAR6->VAR24, VAR16);
    VAR15 = FUN7(VAR4->VAR26);
    if (VAR15 == 0 || (FUN8(VAR6->VAR24, &VAR10, &VAR11, VAR15) < 0))
    {
        int VAR27, VAR28;
        VAR28 = 0;
        VAR27 = 0;
        while (!VAR28)
        {
            VAR15 = VAR29[VAR27].VAR30;
            if (FUN8(VAR6->VAR24, &VAR10, &VAR11, VAR15) < 0)
            {
                VAR15 = 0;
                VAR27++;
            }
            else
            {
                VAR28 = 1;
            }
            if (VAR27 == sizeof(VAR29) / sizeof(struct VAR31))
            {
                VAR28 = 1;
            }
        }
    }
    if (VAR15 == 0)
    {
        FUN2(VAR2, VAR20, "");
        close(VAR6->VAR24);
        FUN6(VAR9);
        return VAR25;
    }
    VAR6->VAR32 = VAR15;
    VAR9->VAR33->VAR26 = FUN9(VAR15);
    VAR6->VAR34 = FUN10(VAR9->VAR33->VAR26, VAR10, VAR11);
    if (VAR16 & VAR35)
    {
        VAR6->VAR36 = VAR37;
        VAR12 = FUN11(VAR6);
        VAR12 = FUN12(VAR6);
    }
    else
    {
        VAR6->VAR36 = VAR38;
        VAR12 = FUN13(VAR6);
    }
    if (VAR12 < 0)
    {
        close(VAR6->VAR24);
        FUN6(VAR9);
        return VAR25;
    }
    VAR6->VAR39 = FUN14(VAR6->VAR24);
    VAR9->VAR33->VAR40 = VAR41;
    VAR9->VAR33->VAR42 = VAR43;
    VAR9->VAR33->VAR10 = VAR10;
    VAR9->VAR33->VAR11 = VAR11;
    VAR9->VAR33->VAR18.VAR19 = VAR13;
    VAR9->VAR33->VAR18.VAR21 = VAR14;
    VAR9->VAR33->VAR44 = VAR6->VAR34 * 1 / FUN15(VAR9->VAR33->VAR18) * 8;
    return 0;
}