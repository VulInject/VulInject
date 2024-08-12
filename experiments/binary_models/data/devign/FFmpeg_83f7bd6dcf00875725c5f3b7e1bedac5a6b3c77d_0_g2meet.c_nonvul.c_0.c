static int FUN1(VAR1 *VAR2, VAR3 *VAR4, VAR5 *VAR6)
{
    int VAR7, VAR8, VAR9;
    VAR10 *VAR11;
    uint32_t VAR12;
    uint32_t VAR13, VAR14, VAR15, VAR16;
    uint32_t VAR17, VAR18;
    int VAR19;
    VAR10 *VAR20;
    VAR13 = FUN2(VAR6);
    VAR14 = FUN3(VAR6);
    VAR15 = FUN3(VAR6);
    VAR17 = FUN3(VAR6);
    VAR18 = FUN3(VAR6);
    VAR19 = FUN3(VAR6);
    VAR16 = FUN4(VAR14, VAR19 == 1 ? 32 : 1) * 4;
    if (VAR14 < 1 || VAR14 > 256 || VAR15 < 1 || VAR15 > 256)
    {
        FUN5(VAR2, VAR21, "", VAR14, VAR15);
        return VAR22;
    }
    if (VAR17 > VAR14 || VAR18 > VAR15)
    {
        FUN5(VAR2, VAR23, "", VAR17, VAR18);
        VAR17 = FUN6(VAR17, VAR14 - 1);
        VAR18 = FUN6(VAR18, VAR15 - 1);
    }
    if (VAR13 - 9 > FUN7(VAR6) || VAR4->VAR14 * VAR4->VAR15 / 4 > VAR13)
    {
        FUN5(VAR2, VAR21, "", VAR13, FUN7(VAR6));
        return VAR22;
    }
    if (VAR19 != 1 && VAR19 != 32)
    {
        FUN8(VAR2, "", VAR19);
        return VAR24;
    }
    VAR20 = FUN9(VAR4->VAR25, VAR16 * VAR15);
    if (!VAR20)
    {
        FUN5(VAR2, VAR21, "");
        return FUN10(VAR26);
    }
    VAR4->VAR25 = VAR20;
    VAR4->VAR14 = VAR14;
    VAR4->VAR15 = VAR15;
    VAR4->VAR17 = VAR17;
    VAR4->VAR18 = VAR18;
    VAR4->VAR19 = VAR19;
    VAR4->VAR16 = VAR16;
    VAR11 = VAR4->VAR25;
    switch (VAR4->VAR19)
    {
    case 1:
        for (VAR8 = 0; VAR8 < VAR4->VAR15; VAR8++)
        {
            for (VAR7 = 0; VAR7 < VAR4->VAR14; VAR7 += 32)
            {
                VAR12 = FUN2(VAR6);
                for (VAR9 = 0; VAR9 < 32; VAR9++)
                {
                    VAR11[0] = !!(VAR12 & 0x80000000);
                    VAR11 += 4;
                    VAR12 <<= 1;
                }
            }
        }
        VAR11 = VAR4->VAR25;
        for (VAR8 = 0; VAR8 < VAR4->VAR15; VAR8++)
        {
            for (VAR7 = 0; VAR7 < VAR4->VAR14; VAR7 += 32)
            {
                VAR12 = FUN2(VAR6);
                for (VAR9 = 0; VAR9 < 32; VAR9++)
                {
                    int VAR27 = !!(VAR12 & 0x80000000);
                    switch (VAR11[0] * 2 + VAR27)
                    {
                    case 0:
                        VAR11[0] = 0xFF;
                        VAR11[1] = 0x00;
                        VAR11[2] = 0x00;
                        VAR11[3] = 0x00;
                        break;
                    case 1:
                        VAR11[0] = 0xFF;
                        VAR11[1] = 0xFF;
                        VAR11[2] = 0xFF;
                        VAR11[3] = 0xFF;
                        break;
                    default:
                        VAR11[0] = 0x00;
                        VAR11[1] = 0x00;
                        VAR11[2] = 0x00;
                        VAR11[3] = 0x00;
                    }
                    VAR11 += 4;
                    VAR12 <<= 1;
                }
            }
        }
        break;
    case 32:
        FUN11(VAR6, VAR4->VAR15 * (FUN4(VAR4->VAR14, 32) >> 3));
        for (VAR8 = 0; VAR8 < VAR4->VAR15; VAR8++)
        {
            for (VAR7 = 0; VAR7 < VAR4->VAR14; VAR7++)
            {
                int VAR28 = FUN2(VAR6);
                *VAR11++ = VAR28 >> 0;
                *VAR11++ = VAR28 >> 8;
                *VAR11++ = VAR28 >> 16;
                *VAR11++ = VAR28 >> 24;
            }
        }
        break;
    default:
        return VAR24;
    }
    return 0;
}