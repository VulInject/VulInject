static int FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = &VAR2->VAR4;
    uint_fast16_t VAR5, VAR6, VAR7;
    VAR2->VAR8 = FUN2(VAR4, 6) + 1;
    VAR2->VAR9 = FUN3(VAR2->VAR8 * sizeof(VAR10));
    for (VAR5 = 0; VAR5 < VAR2->VAR8; ++VAR5)
    {
        VAR10 *VAR11 = &VAR2->VAR9[VAR5];
        VAR11->VAR12 = FUN2(VAR4, 16);
        FUN4("", VAR5, VAR11->VAR12);
        if (VAR11->VAR12 == 1)
        {
            uint_fast8_t VAR13 = 0;
            uint_fast8_t VAR14;
            uint_fast16_t VAR15 = 2;
            VAR11->VAR16 = VAR17;
            VAR11->VAR18.VAR19.VAR20 = FUN2(VAR4, 5);
            FUN4("", VAR5, VAR11->VAR18.VAR19.VAR20);
            for (VAR6 = 0; VAR6 < VAR11->VAR18.VAR19.VAR20; ++VAR6)
            {
                VAR11->VAR18.VAR19.VAR21[VAR6] = FUN2(VAR4, 4);
                if (VAR11->VAR18.VAR19.VAR21[VAR6] > VAR13)
                    VAR13 = VAR11->VAR18.VAR19.VAR21[VAR6];
                FUN4("", VAR5, VAR6, VAR11->VAR18.VAR19.VAR21[VAR6]);
            }
            FUN4("", VAR13);
            VAR11->VAR18.VAR19.VAR13 = VAR13;
            for (VAR6 = 0; VAR6 <= VAR13; ++VAR6)
            {
                VAR11->VAR18.VAR19.VAR22[VAR6] = FUN2(VAR4, 3) + 1;
                VAR11->VAR18.VAR19.VAR23[VAR6] = FUN2(VAR4, 2);
                FUN4("", VAR5, VAR6, VAR11->VAR18.VAR19.VAR22[VAR6], VAR11->VAR18.VAR19.VAR23[VAR6]);
                if (VAR11->VAR18.VAR19.VAR23[VAR6])
                {
                    int VAR24 = FUN2(VAR4, 8);
                    if (VAR24 >= VAR2->VAR25)
                    {
                        FUN5(VAR2->VAR26, VAR27, "", VAR24);
                        return 1;
                    }
                    VAR11->VAR18.VAR19.VAR28[VAR6] = VAR24;
                    FUN4("", VAR11->VAR18.VAR19.VAR28[VAR6]);
                }
                for (VAR7 = 0; VAR7 < (1 << VAR11->VAR18.VAR19.VAR23[VAR6]); ++VAR7)
                {
                    int16_t VAR24 = FUN2(VAR4, 8) - 1;
                    if (VAR24 != -1 && VAR24 >= VAR2->VAR25)
                    {
                        FUN5(VAR2->VAR26, VAR27, "", VAR24);
                        return 1;
                    }
                    VAR11->VAR18.VAR19.VAR29[VAR6][VAR7] = VAR24;
                    FUN4("", VAR7, VAR11->VAR18.VAR19.VAR29[VAR6][VAR7]);
                }
            }
            VAR11->VAR18.VAR19.VAR30 = FUN2(VAR4, 2) + 1;
            VAR11->VAR18.VAR19.VAR31 = 2;
            for (VAR6 = 0; VAR6 < VAR11->VAR18.VAR19.VAR20; ++VAR6)
            {
                VAR11->VAR18.VAR19.VAR31 += VAR11->VAR18.VAR19.VAR22[VAR11->VAR18.VAR19.VAR21[VAR6]];
            }
            VAR11->VAR18.VAR19.VAR32 = FUN3(VAR11->VAR18.VAR19.VAR31 * sizeof(VAR33));
            VAR14 = FUN2(VAR4, 4);
            VAR11->VAR18.VAR19.VAR32[0].VAR34 = 0;
            VAR11->VAR18.VAR19.VAR32[1].VAR34 = (1 << VAR14);
            for (VAR6 = 0; VAR6 < VAR11->VAR18.VAR19.VAR20; ++VAR6)
            {
                for (VAR7 = 0; VAR7 < VAR11->VAR18.VAR19.VAR22[VAR11->VAR18.VAR19.VAR21[VAR6]]; ++VAR7, ++VAR15)
                {
                    VAR11->VAR18.VAR19.VAR32[VAR15].VAR34 = FUN2(VAR4, VAR14);
                    FUN4("", VAR15, VAR11->VAR18.VAR19.VAR32[VAR15].VAR34);
                }
            }
            FUN6(VAR11->VAR18.VAR19.VAR32, VAR11->VAR18.VAR19.VAR31);
        }
        else if (VAR11->VAR12 == 0)
        {
            uint_fast8_t VAR35 = 0;
            VAR11->VAR16 = VAR36;
            VAR11->VAR18.VAR37.VAR38 = FUN2(VAR4, 8);
            VAR11->VAR18.VAR37.VAR39 = FUN2(VAR4, 16);
            VAR11->VAR18.VAR37.VAR40 = FUN2(VAR4, 16);
            VAR11->VAR18.VAR37.VAR41 = FUN2(VAR4, 6);
            if (VAR11->VAR18.VAR37.VAR41 == 0)
            {
                FUN5(VAR2->VAR26, VAR27, "");
                return 1;
            }
            VAR11->VAR18.VAR37.VAR42 = FUN2(VAR4, 8);
            VAR11->VAR18.VAR37.VAR43 = FUN2(VAR4, 4) + 1;
            VAR11->VAR18.VAR37.VAR44 = FUN7(VAR11->VAR18.VAR37.VAR43);
            if (!VAR11->VAR18.VAR37.VAR44)
            {
                return 1;
            }
            {
                int VAR45;
                uint_fast8_t VAR46;
                for (VAR45 = 0; VAR45 < VAR11->VAR18.VAR37.VAR43; ++VAR45)
                {
                    VAR46 = FUN2(VAR4, 8);
                    if (VAR46 >= VAR2->VAR25)
                        return 1;
                    VAR11->VAR18.VAR37.VAR44[VAR45] = VAR46;
                    if (VAR2->VAR47[VAR46].VAR48 > VAR35)
                        VAR35 = VAR2->VAR47[VAR46].VAR48;
                }
            }
            FUN8(VAR2, VAR5);
            {
                VAR11->VAR18.VAR37.VAR49 = FUN7((VAR11->VAR18.VAR37.VAR38 + 1 + VAR35) * sizeof(float));
                if (!VAR11->VAR18.VAR37.VAR49)
                {
                    return 1;
                }
            }
            FUN4("", VAR11->VAR18.VAR37.VAR38);
            FUN4("", VAR11->VAR18.VAR37.VAR39);
            FUN4("", VAR11->VAR18.VAR37.VAR40);
            FUN4("", VAR11->VAR18.VAR37.VAR41);
            FUN4("", VAR11->VAR18.VAR37.VAR42);
            FUN4("", VAR11->VAR18.VAR37.VAR43);
            FUN4("", VAR11->VAR18.VAR37.VAR44);
            {
                int VAR45;
                for (VAR45 = 0; VAR45 < VAR11->VAR18.VAR37.VAR43; ++VAR45)
                {
                    FUN4("", VAR45 + 1, VAR11->VAR18.VAR37.VAR44[VAR45]);
                }
            }
        }
        else
        {
            FUN5(VAR2->VAR26, VAR27, "");
            return 1;
        }
    }
    return 0;
}