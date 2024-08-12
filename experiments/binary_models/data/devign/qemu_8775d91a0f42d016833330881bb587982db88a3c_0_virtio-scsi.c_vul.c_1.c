static void FUN1(VAR1 *VAR2)
{
    const uint16_t VAR3 = 0;
    uint16_t VAR4;
    static uint8_t VAR5[16 + 8 * 63];
    VAR6 *VAR7 = (void *)VAR5;
    VAR8 *VAR9 = VAR2->VAR10;
    int VAR11, VAR12;
    FUN2("", VAR2->VAR13.VAR14.VAR15);
    FUN2("", VAR2->VAR13.VAR14.VAR16);
    FUN2("", VAR2->VAR13.VAR14.VAR17);
    FUN2("", VAR2->VAR13.VAR14.VAR18);
    if (VAR2->VAR19)
    {
        VAR9->VAR3 = VAR2->VAR20.VAR3;
        VAR9->VAR4 = VAR2->VAR20.VAR4;
        VAR9->VAR21 = VAR2->VAR20.VAR21;
        FUN3(VAR9->VAR3 == 0, "");
        FUN3(VAR9->VAR4 <= VAR2->VAR13.VAR14.VAR16, "");
        FUN3(VAR9->VAR21 <= VAR2->VAR13.VAR14.VAR17, "");
        return;
    }
    for (VAR4 = 0; VAR4 <= VAR2->VAR13.VAR14.VAR16; VAR4++)
    {
        VAR9->VAR3 = VAR3;
        VAR9->VAR4 = VAR4;
        if (!FUN4(VAR2, VAR5, sizeof(VAR5)))
        {
            if (VAR22.VAR23 == VAR24)
            {
                continue;
            }
            FUN5("", VAR4);
            FUN6(&VAR22, "");
        }
        if (VAR7->VAR25 == 0)
        {
            FUN5("", VAR4);
            continue;
        }
        VAR12 = VAR7->VAR25 / 8;
        FUN2("", VAR12);
        if (VAR12 == 1)
        {
            VAR9->VAR21 = VAR7->VAR21[0].VAR26[0];
            FUN2("", VAR9->VAR21);
            return;
        }
        for (VAR11 = 0; VAR11 < VAR12; VAR11++)
        {
            if (VAR7->VAR21[VAR11].VAR27)
            {
                VAR9->VAR21 = VAR7->VAR21[VAR11].VAR26[0];
                FUN2("", VAR9->VAR21);
                return;
            }
        }
    }
    FUN7("");
}