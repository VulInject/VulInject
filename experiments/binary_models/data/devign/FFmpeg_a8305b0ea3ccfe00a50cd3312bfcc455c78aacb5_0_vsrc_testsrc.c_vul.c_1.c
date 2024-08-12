static void FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    VAR5 *VAR6 = VAR2->VAR7;
    FFDrawColor VAR8;
    unsigned VAR9 = (VAR10)VAR6->VAR9 << 24;
    {
        unsigned VAR11, VAR12 = 0, VAR13;
        VAR12 = 0;
        for (VAR11 = 1; VAR11 < 7; VAR11++)
        {
            VAR13 = FUN2(VAR11, VAR6->VAR14, 6);
            VAR13 = FUN3(&VAR6->VAR15, 0, 0, VAR13);
            FUN4(VAR6, &VAR8, ((VAR11 & 1) ? 0xFF0000 : 0) | ((VAR11 & 2) ? 0x00FF00 : 0) | ((VAR11 & 4) ? 0x0000FF : 0) | VAR9);
            FUN5(&VAR6->VAR15, &VAR8, VAR4->VAR16, VAR4->VAR17, VAR12, 0, VAR13 - VAR12, VAR4->VAR18);
            VAR12 = VAR13;
        }
    }
    if (VAR6->VAR19 >= 64)
    {
        unsigned VAR12, VAR20, VAR21, VAR22, VAR23, VAR24;
        VAR20 = FUN3(&VAR6->VAR15, 0, +1, 1);
        VAR21 = FUN6(VAR6->VAR25, VAR6->VAR26, FUN7(2, VAR6->VAR19 - 16));
        VAR23 = FUN6(VAR6->VAR25, VAR6->VAR26, FUN7(1, 128));
        for (VAR12 = 0; VAR12 < VAR6->VAR14; VAR12 += VAR20)
        {
            VAR24 = (FUN2(VAR12, 6 * 256, VAR6->VAR14) + VAR23) % (6 * 256);
            FUN4(VAR6, &VAR8, FUN8(VAR24) | VAR9);
            VAR22 = VAR21 + FUN2(VAR12, VAR6->VAR19 / 2, VAR6->VAR14);
            VAR22 %= 2 * (VAR6->VAR19 - 16);
            if (VAR22 > VAR6->VAR19 - 16)
                VAR22 = 2 * (VAR6->VAR19 - 16) - VAR22;
            VAR22 = FUN3(&VAR6->VAR15, 1, 0, VAR22);
            FUN5(&VAR6->VAR15, &VAR8, VAR4->VAR16, VAR4->VAR17, VAR12, VAR22, VAR20, 16);
        }
    }
    if (VAR6->VAR14 >= 64 && VAR6->VAR19 >= 64)
    {
        int VAR27 = (FUN9(VAR6->VAR14, VAR6->VAR19) - 32) >> 1;
        int VAR28 = FUN10(4, VAR27 >> 5);
        int VAR29 = (VAR6->VAR14 >> 2) + (VAR6->VAR14 >> 1);
        int VAR30 = (VAR6->VAR19 >> 2);
        int VAR31 = VAR27 << 2;
        int VAR32, VAR33, VAR34;
        int VAR35, VAR11;
        for (VAR35 = 0; VAR35 < 3; VAR35++)
        {
            FUN4(VAR6, &VAR8, (0xBBBBBB ^ (0xFF << (VAR35 << 3))) | VAR9);
            VAR32 = FUN6(VAR6->VAR25, VAR6->VAR26, FUN7(64 >> (VAR35 << 1), VAR31)) % VAR31;
            VAR33 = VAR32 < 1 * VAR27 ? VAR32 : VAR32 < 2 * VAR27 ? VAR27
                                 : VAR32 < 3 * VAR27   ? 3 * VAR27 - VAR32
                                                 : 0;
            VAR34 = VAR32 < 1 * VAR27 ? 0 : VAR32 < 2 * VAR27 ? VAR32 - VAR27
                               : VAR32 < 3 * VAR27   ? VAR27
                                               : VAR31 - VAR32;
            VAR33 -= VAR27 >> 1;
            VAR34 -= VAR27 >> 1;
            for (VAR11 = 1; VAR11 <= VAR28; VAR11++)
            {
                int VAR12 = FUN2(VAR33, VAR11, VAR28) + VAR29;
                int VAR22 = FUN2(VAR34, VAR11, VAR28) + VAR30;
                VAR12 = FUN3(&VAR6->VAR15, 0, -1, VAR12);
                VAR22 = FUN3(&VAR6->VAR15, 1, -1, VAR22);
                FUN5(&VAR6->VAR15, &VAR8, VAR4->VAR16, VAR4->VAR17, VAR12, VAR22, 8, 8);
            }
        }
    }
    if (VAR6->VAR14 >= 64 && VAR6->VAR19 >= 64)
    {
        int VAR27 = (FUN9(VAR6->VAR14, VAR6->VAR19) - 16) >> 2;
        int VAR31 = VAR27 << 3;
        int VAR29 = (VAR6->VAR14 >> 2);
        int VAR30 = (VAR6->VAR19 >> 2) + (VAR6->VAR19 >> 1);
        int VAR36 = FUN3(&VAR6->VAR15, 0, -1, VAR29 - 8);
        int VAR37 = FUN3(&VAR6->VAR15, 0, +1, VAR29 + 8);
        int VAR38 = FUN3(&VAR6->VAR15, 1, -1, VAR30 - 8);
        int VAR39 = FUN3(&VAR6->VAR15, 1, +1, VAR30 + 8);
        int VAR40, VAR41, VAR42, VAR13, VAR43, VAR44;
        VAR40 = FUN6(VAR6->VAR25, VAR6->VAR26, FUN7(4, VAR31));
        VAR41 = VAR40 / VAR27;
        VAR40 %= VAR27;
        if (VAR41 & 1)
            VAR40 = VAR27 - VAR40;
        VAR41 = (VAR41 >> 1) & 3;
        FUN4(VAR6, &VAR8, 0xFF808080);
        VAR42 = FUN3(&VAR6->VAR15, 0, -1, VAR29 - 4 - VAR40);
        VAR13 = FUN3(&VAR6->VAR15, 0, +1, VAR29 + 4 + VAR40);
        VAR43 = FUN3(&VAR6->VAR15, 1, -1, VAR30 - 4 - VAR40);
        VAR44 = FUN3(&VAR6->VAR15, 1, +1, VAR30 + 4 + VAR40);
        if (VAR41 == 0 || VAR41 == 2)
            FUN5(&VAR6->VAR15, &VAR8, VAR4->VAR16, VAR4->VAR17, VAR42, VAR38, VAR13 - VAR42, VAR39 - VAR38);
        if (VAR41 == 1 || VAR41 == 2)
            FUN5(&VAR6->VAR15, &VAR8, VAR4->VAR16, VAR4->VAR17, VAR36, VAR43, VAR37 - VAR36, VAR44 - VAR43);
        if (VAR41 == 3)
            FUN5(&VAR6->VAR15, &VAR8, VAR4->VAR16, VAR4->VAR17, VAR42, VAR43, VAR13 - VAR42, VAR44 - VAR43);
    }
    {
        unsigned VAR45 = FUN2(5, VAR6->VAR14, 8);
        unsigned VAR46 = FUN2(7, VAR6->VAR14, 8);
        unsigned VAR47 = FUN2(5, VAR6->VAR19, 8);
        unsigned VAR48 = FUN2(7, VAR6->VAR19, 8);
        unsigned VAR12, VAR22, VAR11, VAR49;
        uint8_t VAR9[256];
        VAR49 = VAR6->VAR25;
        for (VAR22 = VAR47; VAR22 < VAR48 - 15; VAR22 += 16)
        {
            for (VAR12 = VAR45; VAR12 < VAR46 - 15; VAR12 += 16)
            {
                if ((VAR12 ^ VAR22) & 16)
                    continue;
                for (VAR11 = 0; VAR11 < 256; VAR11++)
                {
                    VAR49 = VAR49 * 1664525 + 1013904223;
                    VAR9[VAR11] = VAR49 >> 24;
                }
                FUN4(VAR6, &VAR8, 0xFF00FF80);
                FUN11(&VAR6->VAR15, &VAR8, VAR4->VAR16, VAR4->VAR17, VAR4->VAR50, VAR4->VAR18, VAR9, 16, 16, 16, 3, 0, VAR12, VAR22);
            }
        }
    }
    if (VAR6->VAR14 >= 16 && VAR6->VAR19 >= 16)
    {
        unsigned VAR14 = VAR6->VAR14 - 8;
        unsigned VAR19 = VAR6->VAR19 - 8;
        unsigned VAR12 = FUN6(VAR6->VAR25, VAR6->VAR26, FUN7(233, 55 * VAR14)) % (VAR14 << 1);
        unsigned VAR22 = FUN6(VAR6->VAR25, VAR6->VAR26, FUN7(233, 89 * VAR19)) % (VAR19 << 1);
        if (VAR12 > VAR14)
            VAR12 = (VAR14 << 1) - VAR12;
        if (VAR22 > VAR19)
            VAR22 = (VAR19 << 1) - VAR22;
        VAR12 = FUN3(&VAR6->VAR15, 0, -1, VAR12);
        VAR22 = FUN3(&VAR6->VAR15, 1, -1, VAR22);
        FUN4(VAR6, &VAR8, 0xFF8000FF);
        FUN5(&VAR6->VAR15, &VAR8, VAR4->VAR16, VAR4->VAR17, VAR12, VAR22, 8, 8);
    }
    {
        char VAR51[256];
        unsigned VAR52;
        VAR52 = FUN6(VAR6->VAR25, VAR6->VAR26, FUN7(1, 1000)) % 86400000;
        FUN4(VAR6, &VAR8, 0xC0000000);
        FUN12(&VAR6->VAR15, &VAR8, VAR4->VAR16, VAR4->VAR17, VAR4->VAR50, VAR4->VAR18, 2, 2, 100, 36);
        FUN4(VAR6, &VAR8, 0xFFFF8000);
        snprintf(VAR51, sizeof(VAR51), "" VAR53, VAR52 / 3600000, (VAR52 / 60000) % 60, (VAR52 / 1000) % 60, VAR52 % 1000, VAR6->VAR25);
        FUN13(VAR6, VAR4, &VAR8, 4, 4, VAR51);
    }
}