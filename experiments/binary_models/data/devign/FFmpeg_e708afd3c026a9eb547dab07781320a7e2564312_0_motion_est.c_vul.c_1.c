void FUN1(VAR1 *VAR2, int VAR3, int VAR4)
{
    VAR5 *const VAR6 = &VAR2->VAR7;
    VAR8 *VAR9, *VAR10;
    int VAR11, VAR12, VAR13, VAR14;
    int VAR15;
    int VAR16;
    int VAR17[10][2];
    const int VAR18 = 1 + VAR2->VAR19;
    int VAR20 = 0;
    VAR21 *const VAR22 = &VAR2->VAR23;
    FUN2(VAR6, VAR2->VAR24.VAR25.VAR26, VAR2->VAR27.VAR25.VAR26, NULL, 16 * VAR3, 16 * VAR4, 0);
    assert(VAR2->VAR19 == 0 || VAR2->VAR19 == 1);
    assert(VAR2->VAR28 == VAR6->VAR29);
    assert(VAR2->VAR30 == VAR6->VAR31);
    VAR6->VAR32 = FUN3(VAR2->VAR33, VAR2->VAR34, VAR6->VAR35->VAR36);
    VAR6->VAR37 = FUN3(VAR2->VAR33, VAR2->VAR34, VAR6->VAR35->VAR38);
    VAR6->VAR39 = FUN3(VAR2->VAR33, VAR2->VAR34, VAR6->VAR35->VAR40);
    VAR6->VAR41 = VAR6->VAR42[VAR2->VAR43] + VAR44;
    FUN4(VAR2, 16 * VAR3, 16 * VAR4);
    VAR6->VAR45 = 0;
    VAR9 = VAR6->VAR46[0][0];
    VAR11 = VAR2->VAR47.FUN5(VAR9, VAR2->VAR28);
    VAR15 = VAR2->VAR47.FUN6(VAR9, VAR2->VAR28) - (((unsigned)(VAR11 * VAR11)) >> 8) + 500;
    VAR22->VAR48[VAR2->VAR49 * VAR4 + VAR3] = (VAR11 + 128) >> 8;
    VAR22->VAR50[VAR2->VAR49 * VAR4 + VAR3] = (VAR15 + 128) >> 8;
    VAR6->VAR51 += (VAR15 + 128) >> 8;
    if (VAR6->VAR35->VAR52)
    {
        VAR16 = FUN7(VAR2, VAR3, VAR4, 1);
        if ((VAR16 + 128) >> 8 < VAR6->VAR35->VAR52)
        {
            int VAR53 = FUN8(VAR16, VAR15 - 500 + (VAR2->VAR34 >> VAR54) * 100);
            int VAR55 = VAR15 - 500 + (VAR2->VAR34 >> VAR54) * 20;
            VAR22->VAR56[VAR2->VAR49 * VAR4 + VAR3] = (VAR16 + 128) >> 8;
            VAR6->VAR57 += (VAR16 + 128) >> 8;
            VAR6->VAR58 += FUN9(VAR53) - FUN9(VAR55);
            return;
        }
        if ((VAR16 + 128) >> 8 < VAR6->VAR35->VAR59)
            VAR20 = VAR2->VAR20[VAR3 + VAR4 * VAR2->VAR49];
    }
    switch (VAR2->VAR60)
    {
    case VAR61:
    default:
        FUN10(VAR2, &VAR12, &VAR13);
        VAR12 -= VAR3 * 16;
        VAR13 -= VAR4 * 16;
        VAR14 = 0;
        break;
    case VAR62:
    case VAR63:
    {
        const int VAR64 = VAR2->VAR65;
        const int VAR66 = VAR2->VAR67[0];
        VAR68[0] = VAR2->VAR23.VAR25.VAR69[0][VAR66 - 1][0];
        VAR68[1] = VAR2->VAR23.VAR25.VAR69[0][VAR66 - 1][1];
        if (VAR68[0] > (VAR6->VAR70 << VAR18))
            VAR68[0] = (VAR6->VAR70 << VAR18);
        if (!VAR2->VAR71)
        {
            VAR72[0] = VAR2->VAR23.VAR25.VAR69[0][VAR66 - VAR64][0];
            VAR72[1] = VAR2->VAR23.VAR25.VAR69[0][VAR66 - VAR64][1];
            VAR73[0] = VAR2->VAR23.VAR25.VAR69[0][VAR66 - VAR64 + 2][0];
            VAR73[1] = VAR2->VAR23.VAR25.VAR69[0][VAR66 - VAR64 + 2][1];
            if (VAR72[1] > (VAR6->VAR74 << VAR18))
                VAR72[1] = (VAR6->VAR74 << VAR18);
            if (VAR73[0] < (VAR6->VAR75 << VAR18))
                VAR73[0] = (VAR6->VAR75 << VAR18);
            if (VAR73[1] > (VAR6->VAR74 << VAR18))
                VAR73[1] = (VAR6->VAR74 << VAR18);
            VAR76[0] = FUN11(VAR68[0], VAR72[0], VAR73[0]);
            VAR76[1] = FUN11(VAR68[1], VAR72[1], VAR73[1]);
            if (VAR2->VAR77 == VAR78)
            {
                VAR6->VAR79 = VAR76[0];
                VAR6->VAR80 = VAR76[1];
            }
            else
            {
                VAR6->VAR79 = VAR68[0];
                VAR6->VAR80 = VAR68[1];
            }
        }
        else
        {
            VAR6->VAR79 = VAR68[0];
            VAR6->VAR80 = VAR68[1];
        }
    }
        VAR14 = FUN12(VAR2, &VAR12, &VAR13, VAR17, 0, 0, VAR2->VAR81, (1 << 16) >> VAR18, 0, 16);
        break;
    }
    VAR10 = VAR6->VAR82[0][0] + (VAR13 * VAR2->VAR28) + VAR12;
    VAR16 = VAR2->VAR47.VAR83[0](NULL, VAR9, VAR10, VAR2->VAR28, 16);
    VAR22->VAR56[VAR2->VAR49 * VAR4 + VAR3] = (VAR16 + 128) >> 8;
    VAR6->VAR57 += (VAR16 + 128) >> 8;
    if (VAR20)
    {
        int VAR53 = FUN8(VAR16, VAR15 - 500 + (VAR2->VAR34 >> VAR54) * 100);
        int VAR55 = VAR15 - 500 + (VAR2->VAR34 >> VAR54) * 20;
        VAR6->VAR58 += FUN9(VAR53) - FUN9(VAR55);
        if (VAR20 == VAR84)
        {
            VAR6->FUN13(VAR2, &VAR12, &VAR13, VAR14, 0, 0, 0, 16);
            FUN14(VAR2, VAR12, VAR13, 1);
        }
        else
        {
            VAR12 <<= VAR18;
            VAR13 <<= VAR18;
        }
        if (VAR20 == VAR85)
        {
            FUN15(VAR2, VAR12, VAR13, VAR18);
            FUN14(VAR2, VAR12, VAR13, 0);
        }
        if (VAR20 == VAR86)
        {
            FUN16(VAR2, 0, VAR2->VAR87, VAR2->VAR88, VAR12, VAR13, 1);
        }
    }
    else if (VAR6->VAR35->VAR89 > VAR90)
    {
        int VAR53 = FUN8(VAR16, VAR15 - 500 + (VAR2->VAR34 >> VAR54) * 100);
        int VAR55 = VAR15 - 500 + (VAR2->VAR34 >> VAR54) * 20;
        VAR6->VAR58 += FUN9(VAR53) - FUN9(VAR55);
        if (VAR16 * 2 + 200 * 256 > VAR15)
            VAR20 |= VAR91;
        if (VAR15 * 2 + 200 * 256 > VAR16 || VAR2->VAR92 > 24)
        {
            VAR20 |= VAR84;
            VAR6->FUN13(VAR2, &VAR12, &VAR13, VAR14, 0, 0, 0, 16);
            if (VAR2->VAR93 & VAR94)
                if (VAR12 || VAR13)
                    VAR20 |= VAR95;
        }
        else
        {
            VAR12 <<= VAR18;
            VAR13 <<= VAR18;
        }
        if ((VAR2->VAR93 & VAR96) && !VAR6->VAR45 && VAR15 > 50 << 8 && VAR16 > 10 << 8)
        {
            if (FUN15(VAR2, VAR12, VAR13, VAR18) < VAR97)
                VAR20 |= VAR85;
            FUN14(VAR2, VAR12, VAR13, 0);
        }
        else
            FUN14(VAR2, VAR12, VAR13, 1);
        if ((VAR2->VAR93 & VAR98) && !VAR6->VAR45)
        {
            if (FUN16(VAR2, 0, VAR2->VAR87, VAR2->VAR88, VAR12, VAR13, 0) < VAR97)
                VAR20 |= VAR86;
        }
    }
    else
    {
        int VAR99, VAR100;
        VAR20 = VAR84;
        VAR14 = VAR6->FUN13(VAR2, &VAR12, &VAR13, VAR14, 0, 0, 0, 16);
        if (VAR6->VAR35->VAR38 != VAR6->VAR35->VAR40 && !VAR6->VAR45)
            VAR14 = FUN17(VAR2, VAR12, VAR13, 0, 0, 0, 16, 1);
        if ((VAR2->VAR93 & VAR96) && !VAR6->VAR45 && VAR15 > 50 << 8 && VAR16 > 10 << 8)
        {
            int VAR101 = FUN15(VAR2, VAR12, VAR13, VAR18);
            if (VAR101 < VAR14)
            {
                VAR20 = VAR85;
                VAR14 = VAR101;
            }
        }
        if ((VAR2->VAR93 & VAR98) && !VAR6->VAR45)
        {
            int VAR102 = FUN16(VAR2, 0, VAR2->VAR87, VAR2->VAR88, VAR12, VAR13, 0);
            if (VAR102 < VAR14)
            {
                VAR20 = VAR86;
                VAR14 = VAR102;
            }
        }
        FUN14(VAR2, VAR12, VAR13, VAR20 != VAR85);
        if ((VAR6->VAR35->VAR40 & 0xFF) == VAR103)
        {
            VAR99 = VAR15 - 500;
        }
        else
        {
            int VAR104 = (VAR11 + 128) >> 8;
            VAR104 *= 0x01010101;
            for (VAR100 = 0; VAR100 < 16; VAR100++)
            {
                *(VAR105 *)(&VAR6->VAR106[VAR100 * VAR2->VAR28 + 0]) = VAR104;
                *(VAR105 *)(&VAR6->VAR106[VAR100 * VAR2->VAR28 + 4]) = VAR104;
                *(VAR105 *)(&VAR6->VAR106[VAR100 * VAR2->VAR28 + 8]) = VAR104;
                *(VAR105 *)(&VAR6->VAR106[VAR100 * VAR2->VAR28 + 12]) = VAR104;
            }
            VAR99 = VAR2->VAR47.VAR40[0](VAR2, VAR6->VAR106, VAR9, VAR2->VAR28, 16);
        }
        VAR99 += VAR6->VAR39 * 16;
        if (VAR99 < VAR14)
        {
            VAR20 = VAR91;
            VAR2->VAR23.VAR25.VAR20[VAR4 * VAR2->VAR49 + VAR3] = VAR91;
        }
        else
            VAR2->VAR23.VAR25.VAR20[VAR4 * VAR2->VAR49 + VAR3] = 0;
        {
            int VAR53 = FUN8(VAR16, VAR15 - 500 + (VAR2->VAR34 >> VAR54) * 100);
            int VAR55 = VAR15 - 500 + (VAR2->VAR34 >> VAR54) * 20;
            VAR6->VAR58 += FUN9(VAR53) - FUN9(VAR55);
        }
    }
    VAR2->VAR20[VAR4 * VAR2->VAR49 + VAR3] = VAR20;
}