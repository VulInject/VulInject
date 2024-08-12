static void FUN1(void *VAR1)
{
    VAR2 *VAR3 = VAR1;
    if (VAR3->VAR4 && VAR3->VAR5 != -1)
    {
        int VAR6;
        VAR7 *VAR8;
        char *VAR9;
        uint32_t VAR10[VAR11];
        int VAR12;
        int VAR13;
        int VAR14 = 0;
        FUN2();
        FUN3(VAR10, (FUN4(VAR3->VAR15) / 16), VAR11);
        VAR8 = FUN5(VAR3->VAR15);
        VAR9 = VAR3->VAR16;
        for (VAR6 = 0; VAR6 < FUN6(VAR3->VAR15); VAR6++)
        {
            if (FUN7(VAR3->VAR17[VAR6], VAR10, VAR11))
            {
                int VAR18;
                VAR7 *VAR19;
                char *VAR20;
                VAR19 = VAR8;
                VAR20 = (char *)VAR9;
                for (VAR18 = 0; VAR18 < FUN4(VAR3->VAR15); VAR18 += 16)
                {
                    if (memcmp(VAR20, VAR19, 16 * FUN8(VAR3->VAR15)) == 0)
                    {
                        FUN9(VAR3->VAR17[VAR6], (VAR18 / 16));
                    }
                    else
                    {
                        VAR14 = 1;
                        memcpy(VAR20, VAR19, 16 * FUN8(VAR3->VAR15));
                    }
                    VAR19 += 16 * FUN8(VAR3->VAR15);
                    VAR20 += 16 * FUN8(VAR3->VAR15);
                }
            }
            VAR8 += FUN10(VAR3->VAR15);
            VAR9 += FUN10(VAR3->VAR15);
        }
        if (!VAR14 && !VAR3->VAR21)
        {
            FUN11(VAR3->VAR22, FUN12(VAR23) + VAR24);
            return;
        }
        VAR12 = 0;
        FUN13(VAR3, 0);
        FUN13(VAR3, 0);
        VAR13 = VAR3->VAR25.VAR26;
        FUN14(VAR3, 0);
        for (VAR6 = 0; VAR6 < VAR3->VAR27.VAR28; VAR6++)
        {
            int VAR18;
            int VAR29 = -1;
            for (VAR18 = 0; VAR18 < VAR3->VAR27.VAR30 / 16; VAR18++)
            {
                if (FUN15(VAR3->VAR17[VAR6], VAR18))
                {
                    if (VAR29 == -1)
                    {
                        VAR29 = VAR18;
                    }
                    FUN9(VAR3->VAR17[VAR6], VAR18);
                }
                else
                {
                    if (VAR29 != -1)
                    {
                        int VAR31 = FUN16(VAR3, VAR6, VAR29, VAR18);
                        FUN17(VAR3, VAR29 * 16, VAR6, (VAR18 - VAR29) * 16, VAR31);
                        VAR12++;
                    }
                    VAR29 = -1;
                }
            }
            if (VAR29 != -1)
            {
                int VAR31 = FUN16(VAR3, VAR6, VAR29, VAR18);
                FUN17(VAR3, VAR29 * 16, VAR6, (VAR18 - VAR29) * 16, VAR31);
                VAR12++;
            }
        }
        VAR3->VAR25.VAR32[VAR13] = (VAR12 >> 8) & 0xFF;
        VAR3->VAR25.VAR32[VAR13 + 1] = VAR12 & 0xFF;
        FUN18(VAR3);
    }
    if (VAR3->VAR5 != -1)
    {
        FUN11(VAR3->VAR22, FUN12(VAR23) + VAR24);
    }
}