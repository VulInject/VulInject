int FUN1(VAR1 *VAR2)
{
    int VAR3, VAR4, VAR5;
    int VAR6, VAR7, VAR8;
    int VAR9;
    int VAR10;
    VAR11 *VAR12 = &VAR2->VAR12;
    if (VAR2->VAR13 == VAR14)
    {
        if (!VAR2->VAR15)
        {
            VAR2->VAR15 = 1;
            FUN2(VAR2->VAR16, "");
        }
        return VAR17;
    }
    else if (VAR2->VAR13 == VAR18)
    {
        FUN3(VAR2->VAR16, VAR19, "");
        return VAR17;
    }
    if (VAR2->VAR20)
    {
        if (!VAR2->VAR21)
        {
            VAR2->VAR21 = 1;
            FUN2(VAR2->VAR16, "");
        }
        return VAR17;
    }
    if (VAR2->VAR22.VAR23 == VAR24)
    {
        FUN2(VAR2->VAR16, "");
        return VAR25;
    }
    FUN4(VAR12, 5);
    for (VAR3 = 0; VAR3 < (VAR2->VAR26 ? 1 : 2); VAR3++)
    {
        FUN4(VAR12, 5);
        if (FUN5(VAR12))
        {
            FUN4(VAR12, 8);
        }
    }
    if (VAR2->VAR13 == VAR14)
    {
        if (FUN5(VAR12))
        {
            FUN4(VAR12, 16);
        }
    }
    if (FUN5(VAR12))
    {
        if (VAR2->VAR26 > VAR27)
        {
            VAR2->VAR28 = FUN6(VAR12, 2);
            if (VAR2->VAR26 & 1)
            {
                VAR2->VAR29 = FUN6(VAR12, 3);
                VAR2->VAR30 = FUN6(VAR12, 3);
            }
            if (VAR2->VAR26 & 4)
            {
                VAR2->VAR31 = FUN7(FUN6(VAR12, 3), 3, 7);
                VAR2->VAR32 = FUN7(FUN6(VAR12, 3), 3, 7);
            }
        }
        if (VAR2->VAR33 && (VAR2->VAR34 = FUN5(VAR12)))
        {
            VAR2->VAR35 = FUN6(VAR12, 5);
        }
        if (VAR2->VAR13 == VAR36)
        {
            for (VAR3 = 0; VAR3 < (VAR2->VAR26 ? 1 : 2); VAR3++)
            {
                if (FUN5(VAR12))
                {
                    FUN4(VAR12, 6);
                }
            }
            if (FUN5(VAR12))
            {
                FUN4(VAR12, 6);
            }
            switch (FUN6(VAR12, 2))
            {
            case 1:
                FUN4(VAR12, 5);
                break;
            case 2:
                FUN4(VAR12, 12);
                break;
            case 3:
            {
                int VAR37 = (FUN6(VAR12, 5) + 2) << 3;
                FUN8(VAR12, VAR37);
                break;
            }
            }
            if (VAR2->VAR26 < VAR27)
            {
                for (VAR3 = 0; VAR3 < (VAR2->VAR26 ? 1 : 2); VAR3++)
                {
                    if (FUN5(VAR12))
                    {
                        FUN4(VAR12, 8);
                        FUN4(VAR12, 6);
                    }
                }
            }
            if (FUN5(VAR12))
            {
                for (VAR4 = 0; VAR4 < VAR2->VAR38; VAR4++)
                {
                    if (VAR2->VAR38 == 1 || FUN5(VAR12))
                    {
                        FUN4(VAR12, 5);
                    }
                }
            }
        }
    }
    if (FUN5(VAR12))
    {
        VAR2->VAR39 = FUN6(VAR12, 3);
        FUN4(VAR12, 2);
        if (VAR2->VAR26 == VAR27)
        {
            VAR2->VAR40 = FUN6(VAR12, 2);
            VAR2->VAR41 = FUN6(VAR12, 2);
        }
        if (VAR2->VAR26 >= VAR42)
        {
            VAR2->VAR43 = FUN6(VAR12, 2);
        }
        for (VAR3 = 0; VAR3 < (VAR2->VAR26 ? 1 : 2); VAR3++)
        {
            if (FUN5(VAR12))
            {
                FUN4(VAR12, 8);
            }
        }
        if (VAR2->VAR22.VAR23 != VAR24)
        {
            FUN9(VAR12);
        }
    }
    if (VAR2->VAR13 == VAR36 && VAR2->VAR38 != 6)
    {
        FUN9(VAR12);
    }
    if (VAR2->VAR13 == VAR44 && (VAR2->VAR38 == 6 || FUN5(VAR12)))
    {
        FUN4(VAR12, 6);
    }
    if (FUN5(VAR12))
    {
        int VAR45 = FUN6(VAR12, 6);
        for (VAR3 = 0; VAR3 < VAR45 + 1; VAR3++)
        {
            FUN4(VAR12, 8);
        }
    }
    if (VAR2->VAR38 == 6)
    {
        VAR6 = FUN5(VAR12);
        VAR7 = FUN5(VAR12);
    }
    else
    {
        VAR6 = 1;
        VAR7 = 0;
    }
    VAR2->VAR46 = FUN6(VAR12, 2);
    VAR9 = FUN5(VAR12);
    VAR2->VAR47 = FUN5(VAR12);
    if (!VAR2->VAR47)
        memset(VAR2->VAR48, 0, sizeof(VAR2->VAR48));
    VAR2->VAR49 = FUN5(VAR12);
    if (!VAR2->VAR49)
    {
        for (VAR5 = 1; VAR5 <= VAR2->VAR50; VAR5++)
            VAR2->VAR51[VAR5] = 1;
    }
    VAR2->VAR51[VAR52] = VAR2->VAR51[VAR2->VAR53] = 0;
    VAR2->VAR54 = FUN5(VAR12);
    if (!VAR2->VAR54)
    {
        VAR2->VAR22.VAR55 = VAR56[2];
        VAR2->VAR22.VAR57 = VAR58[1];
        VAR2->VAR22.VAR59 = VAR60[1];
        VAR2->VAR22.VAR61 = VAR62[2];
        VAR2->VAR22.VAR63 = VAR64[7];
    }
    VAR2->VAR65 = FUN5(VAR12);
    VAR2->VAR66 = FUN5(VAR12);
    VAR2->VAR67 = FUN5(VAR12);
    VAR8 = FUN5(VAR12);
    VAR10 = 0;
    if (VAR2->VAR26 > 1)
    {
        for (VAR4 = 0; VAR4 < VAR2->VAR38; VAR4++)
        {
            VAR2->VAR68[VAR4] = (!VAR4 || FUN5(VAR12));
            if (VAR2->VAR68[VAR4])
            {
                VAR2->VAR69[VAR4] = FUN5(VAR12);
            }
            else
            {
                VAR2->VAR69[VAR4] = VAR2->VAR69[VAR4 - 1];
            }
            VAR10 += VAR2->VAR69[VAR4];
        }
    }
    else
    {
        memset(VAR2->VAR69, 0, sizeof(VAR2->VAR69));
    }
    if (VAR6)
    {
        for (VAR4 = 0; VAR4 < VAR2->VAR38; VAR4++)
        {
            for (VAR5 = !VAR2->VAR69[VAR4]; VAR5 <= VAR2->VAR50; VAR5++)
            {
                VAR2->VAR70[VAR4][VAR5] = FUN6(VAR12, 2);
            }
        }
    }
    else
    {
        for (VAR5 = !((VAR2->VAR26 > 1) && VAR10); VAR5 <= VAR2->VAR50; VAR5++)
        {
            int VAR71 = FUN6(VAR12, 5);
            for (VAR4 = 0; VAR4 < 6; VAR4++)
            {
                VAR2->VAR70[VAR4][VAR5] = VAR72[VAR71][VAR4];
            }
        }
    }
    if (VAR2->VAR33)
    {
        for (VAR4 = 0; VAR4 < VAR2->VAR38; VAR4++)
        {
            VAR2->VAR70[VAR4][VAR2->VAR53] = FUN5(VAR12);
        }
    }
    if (VAR2->VAR13 == VAR36 && (VAR2->VAR38 == 6 || FUN5(VAR12)))
    {
        FUN4(VAR12, 5 * VAR2->VAR50);
    }
    if (VAR7)
    {
        VAR2->VAR73[VAR52] = 0;
        for (VAR5 = (VAR10 != 6); VAR5 <= VAR2->VAR74; VAR5++)
        {
            int VAR75 = 1;
            for (VAR4 = 1; VAR4 < 6; VAR4++)
            {
                if ((VAR2->VAR70[VAR4][VAR5] != VAR76) || (!VAR5 && VAR2->VAR68[VAR4]))
                {
                    VAR75 = 0;
                    break;
                }
            }
            VAR2->VAR73[VAR5] = VAR75 && FUN5(VAR12);
        }
    }
    else
    {
        memset(VAR2->VAR73, 0, sizeof(VAR2->VAR73));
    }
    if (!VAR2->VAR46)
    {
        int VAR77 = (FUN6(VAR12, 6) - 15) << 4;
        int VAR78 = (VAR77 + FUN6(VAR12, 4)) << 2;
        for (VAR5 = 0; VAR5 <= VAR2->VAR74; VAR5++)
            VAR2->VAR79[VAR5] = VAR78;
    }
    if (VAR9)
    {
        for (VAR5 = 1; VAR5 <= VAR2->VAR50; VAR5++)
        {
            if (FUN5(VAR12))
            {
                FUN4(VAR12, 10);
                FUN4(VAR12, 8);
            }
        }
    }
    for (VAR5 = 1; VAR5 <= VAR2->VAR50; VAR5++)
    {
        if (VAR8 && FUN5(VAR12))
        {
            VAR2->VAR80[VAR5] = FUN6(VAR12, 5);
        }
        else
        {
            VAR2->VAR80[VAR5] = -1;
        }
    }
    if (VAR2->VAR38 > 1 && FUN5(VAR12))
    {
        int VAR81 = (VAR2->VAR38 - 1) * (4 + FUN10(VAR2->VAR82 - 2));
        FUN8(VAR12, VAR81);
        FUN2(VAR2->VAR16, "");
    }
    for (VAR5 = 1; VAR5 <= VAR2->VAR50; VAR5++)
    {
        VAR2->VAR83[VAR5] = 1;
        VAR2->VAR84[VAR5] = 1;
    }
    VAR2->VAR85 = 1;
    return 0;
}