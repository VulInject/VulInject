static void FUN1(VAR1 *VAR2, VAR3 *VAR4, int VAR5)
{
    struct DisasContext VAR6, *VAR7 = &VAR6;
    VAR8 *VAR9;
    uint32_t VAR10;
    int VAR11, VAR12;
    uint32_t VAR13;
    int VAR14;
    int VAR15;
    FUN2(VAR16);
    VAR10 = VAR4->VAR17;
    VAR7->VAR2 = VAR2;
    VAR7->VAR4 = VAR4;
    VAR9 = VAR18.VAR19 + VAR20;
    VAR7->VAR21 = VAR22;
    VAR7->VAR17 = VAR10;
    VAR7->VAR23 = VAR2->VAR23;
    VAR7->VAR24 = 0;
    if (VAR10 & 3)
    {
        FUN3(VAR2, "", VAR10);
    }
    if (FUN4(VAR25))
    {
        FUN5("");
        FUN6(VAR2, 0);
    }
    VAR13 = (VAR10 & VAR26) + VAR27;
    VAR12 = -1;
    VAR14 = 0;
    VAR15 = VAR4->VAR28 & VAR29;
    if (VAR15 == 0)
    {
        VAR15 = VAR29;
    }
    FUN7();
    do
    {
        FUN8(VAR2, VAR7);
        if (VAR5)
        {
            VAR11 = VAR18.VAR30 - VAR18.VAR19;
            if (VAR12 < VAR11)
            {
                VAR12++;
                while (VAR12 < VAR11)
                {
                    VAR18.VAR31[VAR12++] = 0;
                }
            }
            VAR18.VAR32[VAR12] = VAR7->VAR17;
            VAR18.VAR31[VAR12] = 1;
            VAR18.VAR33[VAR12] = VAR14;
        }
        FUN9("", VAR7->VAR17);
        if (VAR14 + 1 == VAR15 && (VAR4->VAR28 & VAR34))
        {
            FUN10();
        }
        FUN11(VAR7, FUN12(VAR2, VAR7->VAR17));
        VAR7->VAR17 += 4;
        VAR14++;
    } while (!VAR7->VAR21 && VAR18.VAR30 < VAR9 && !VAR2->VAR23 && !VAR35 && (VAR7->VAR17 < VAR13) && VAR14 < VAR15);
    if (VAR4->VAR28 & VAR34)
    {
        FUN13();
    }
    if (FUN14(VAR2->VAR23))
    {
        if (VAR7->VAR21 == VAR22)
        {
            FUN15(VAR36, VAR7->VAR17);
        }
        FUN16(VAR7, VAR37);
    }
    else
    {
        switch (VAR7->VAR21)
        {
        case VAR22:
            FUN17(VAR7, 1, VAR7->VAR17);
            break;
        default:
        case VAR38:
        case VAR39:
            FUN18(0);
            break;
        case VAR40:
            break;
        }
    }
    FUN19(VAR4, VAR14);
    *VAR18.VAR30 = VAR41;
    if (VAR5)
    {
        VAR11 = VAR18.VAR30 - VAR18.VAR19;
        VAR12++;
        while (VAR12 <= VAR11)
        {
            VAR18.VAR31[VAR12++] = 0;
        }
    }
    else
    {
        VAR4->VAR42 = VAR7->VAR17 - VAR10;
        VAR4->VAR43 = VAR14;
    }
    if (FUN4(VAR25))
    {
        FUN5("");
        FUN20(VAR2, VAR10, VAR7->VAR17 - VAR10, 0);
        FUN5("", VAR7->VAR17 - VAR10, VAR18.VAR30 - VAR18.VAR19);
    }
}