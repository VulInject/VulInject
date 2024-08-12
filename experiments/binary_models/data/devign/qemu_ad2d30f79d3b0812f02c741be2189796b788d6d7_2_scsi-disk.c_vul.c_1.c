static VAR1 FUN1(VAR2 *VAR3, uint32_t VAR4, VAR5 *VAR6, int VAR7)
{
    VAR8 *VAR9 = FUN2(VAR8, VAR10, VAR3);
    VAR11 *VAR12;
    VAR13 *VAR14;
    int VAR15;
    if (VAR6[0] != VAR16 && (VAR7 != VAR9->VAR7 || (VAR6[1] >> 5) != VAR9->VAR7))
    {
        FUN3("", VAR7 ? VAR7 : VAR6[1] >> 5);
        VAR9->VAR17[0] = 0x70;
        VAR9->VAR17[1] = 0x00;
        VAR9->VAR17[2] = VAR18;
        VAR9->VAR17[3] = 0x00;
        VAR9->VAR17[4] = 0x00;
        VAR9->VAR17[5] = 0x00;
        VAR9->VAR17[6] = 0x00;
        VAR9->VAR19 = 7;
        VAR9->VAR20 = VAR21;
        VAR14 = FUN4(VAR3);
        VAR14->VAR22->FUN5(VAR14, VAR23, VAR4, VAR24);
        return 0;
    }
    VAR12 = FUN6(VAR9, VAR4);
    if (VAR12)
    {
        FUN7("", VAR4, VAR12);
        FUN8(VAR3, VAR4);
    }
    VAR12 = FUN9(VAR3, VAR4, VAR7);
    if (-1 == FUN10(&VAR12->VAR25, VAR6))
    {
        FUN7("", VAR6[0]);
        FUN11(VAR12);
        return 0;
    }
    FUN12(&VAR12->VAR25);
    FUN3("", VAR7, VAR4, VAR12->VAR25.VAR6.VAR26, VAR6[0]);
    {
        int VAR27;
        for (VAR27 = 1; VAR27 < VAR12->VAR25.VAR6.VAR28; VAR27++)
        {
            FUN13("", VAR6[VAR27]);
        }
        FUN13("");
    }
    if (VAR12->VAR25.VAR6.VAR26 == 0)
    {
        if (VAR12->VAR29 != NULL)
            FUN14(VAR12->VAR29);
        VAR12->VAR30 = 0;
        VAR12->VAR29 = NULL;
        VAR15 = FUN15(VAR9->VAR31, VAR12, VAR32, VAR33);
        if (VAR15 == -1)
        {
            FUN16(VAR12, -VAR34);
            return 0;
        }
        return 0;
    }
    if (VAR12->VAR30 != VAR12->VAR25.VAR6.VAR26)
    {
        if (VAR12->VAR29 != NULL)
            FUN14(VAR12->VAR29);
        VAR12->VAR29 = FUN17(VAR12->VAR25.VAR6.VAR26);
        VAR12->VAR30 = VAR12->VAR25.VAR6.VAR26;
    }
    memset(VAR12->VAR29, 0, VAR12->VAR30);
    VAR12->VAR28 = VAR12->VAR25.VAR6.VAR26;
    if (VAR12->VAR25.VAR6.VAR35 == VAR36)
    {
        VAR12->VAR28 = 0;
        return -VAR12->VAR25.VAR6.VAR26;
    }
    return VAR12->VAR25.VAR6.VAR26;
}