static int FUN1(VAR1 *VAR2, int *VAR3, int VAR4, VAR5 *VAR6, int VAR7, int VAR8)
{
    VAR9 *VAR10 = &VAR2->VAR10;
    int VAR11, VAR12, VAR13, VAR14, VAR15, VAR16;
    int VAR17, VAR18, VAR19, VAR20;
    if (FUN2(VAR10))
    {
        if (FUN2(VAR10))
        {
            VAR16 = FUN3(VAR10, 8);
            for (VAR17 = 0; VAR17 < 8; VAR17++, VAR6 += VAR7)
                memset(VAR6, VAR16, 16);
        }
        else
        {
            if (FUN4(VAR10) < 16 * 8 * 8)
                return VAR21;
            for (VAR17 = 0; VAR17 < 8; VAR17++)
            {
                for (VAR18 = 0; VAR18 < 16; VAR18++)
                    VAR6[VAR18] = FUN3(VAR10, 8);
                VAR6 += VAR7;
            }
        }
        return 0;
    }
    VAR11 = 0;
    for (VAR18 = 0; VAR18 < 2; VAR18++)
    {
        for (VAR19 = 0; VAR19 < 4; VAR19++)
        {
            if (!(VAR18 | VAR19))
            {
                VAR12 = FUN3(VAR10, 8);
            }
            else
            {
                VAR12 = FUN5(VAR10, VAR2->VAR22.VAR23, 9, 2);
                if (VAR12 == -1)
                    return VAR21;
                if (VAR12 == 0x100)
                    VAR12 = FUN3(VAR10, 8);
            }
            VAR12 = (VAR12 + VAR11) & 0xFF;
            VAR11 = VAR12;
            VAR2->VAR24[0] = VAR12;
            VAR13 = FUN5(VAR10, VAR2->VAR25[VAR4].VAR23, 9, 1);
            if (VAR13 == -1)
                return VAR21;
            VAR15 = 1;
            memset(VAR2->VAR24 + 1, 0, 15 * sizeof(*VAR2->VAR24));
            for (VAR20 = 0; VAR20 < VAR13; VAR20++)
            {
                VAR14 = FUN5(VAR10, VAR2->VAR26[VAR4].VAR23, 9, 2);
                if (VAR14 == -1)
                    return VAR21;
                if (VAR14 == 0x1000)
                    VAR14 = FUN3(VAR10, 12);
                VAR15 += VAR14 & 0xF;
                if (VAR15 >= 16)
                    return VAR21;
                VAR16 = FUN6(VAR14 >> 4, 8);
                VAR2->VAR24[VAR27[VAR15++]] = VAR16;
            }
            FUN7(VAR2->VAR24, VAR3, VAR6 + VAR19 * 4, VAR7);
        }
        VAR6 += 4 * VAR7;
    }
    return 0;
}