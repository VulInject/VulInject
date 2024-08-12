static VAR1 FUN1(VAR2 *VAR3, VAR4 *VAR5)
{
    VAR6 *VAR7 = FUN2(VAR6, VAR8, VAR3->VAR9);
    VAR10 *VAR11 = FUN2(VAR10, VAR3, VAR3);
    int VAR12;
    FUN3(VAR3);
    if (VAR5[0] != VAR13 && (VAR3->VAR14 != VAR7->VAR14 || (VAR5[1] >> 5) != VAR7->VAR14))
    {
        FUN4("", VAR3->VAR14 ? VAR3->VAR14 : VAR5[1] >> 5);
        VAR7->VAR15[0] = 0x70;
        VAR7->VAR15[1] = 0x00;
        VAR7->VAR15[2] = VAR16;
        VAR7->VAR15[3] = 0x00;
        VAR7->VAR15[4] = 0x00;
        VAR7->VAR15[5] = 0x00;
        VAR7->VAR15[6] = 0x00;
        VAR7->VAR17 = 7;
        VAR7->VAR18 = VAR19;
        VAR11->VAR3.VAR20 = VAR21;
        FUN5(&VAR11->VAR3);
        return 0;
    }
    if (-1 == FUN6(&VAR11->VAR3, VAR5))
    {
        FUN7("", VAR5[0]);
        FUN8(&VAR11->VAR3);
        FUN9(&VAR11->VAR3);
        return 0;
    }
    FUN10(&VAR11->VAR3);
    FUN4("", VAR14, VAR22, VAR11->VAR3.VAR5.VAR23, VAR5[0]);
    {
        int VAR24;
        for (VAR24 = 1; VAR24 < VAR11->VAR3.VAR5.VAR25; VAR24++)
        {
            FUN11("", VAR5[VAR24]);
        }
        FUN11("");
    }
    if (VAR11->VAR3.VAR5.VAR23 == 0)
    {
        if (VAR11->VAR26 != NULL)
            FUN12(VAR11->VAR26);
        VAR11->VAR27 = 0;
        VAR11->VAR26 = NULL;
        VAR12 = FUN13(VAR7->VAR28, VAR11, VAR29, VAR30);
        if (VAR12 == -1)
        {
            FUN14(VAR11, -VAR31);
        }
        return 0;
    }
    if (VAR11->VAR27 != VAR11->VAR3.VAR5.VAR23)
    {
        if (VAR11->VAR26 != NULL)
            FUN12(VAR11->VAR26);
        VAR11->VAR26 = FUN15(VAR11->VAR3.VAR5.VAR23);
        VAR11->VAR27 = VAR11->VAR3.VAR5.VAR23;
    }
    memset(VAR11->VAR26, 0, VAR11->VAR27);
    VAR11->VAR25 = VAR11->VAR3.VAR5.VAR23;
    if (VAR11->VAR3.VAR5.VAR32 == VAR33)
    {
        VAR11->VAR25 = 0;
        return -VAR11->VAR3.VAR5.VAR23;
    }
    else
    {
        return VAR11->VAR3.VAR5.VAR23;
    }
}