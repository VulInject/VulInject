static void FUN1(VAR1 *VAR2, int VAR3, int VAR4, struct VAR5 *VAR6, ptrdiff_t VAR7, ptrdiff_t VAR8, enum BlockLevel VAR9, enum BlockPartition VAR10)
{
    VAR11 *VAR12 = VAR2->VAR13;
    VAR14 *VAR15 = VAR12->VAR15;
    enum BlockSize VAR16 = VAR9 * 3 + VAR10;
    int VAR17 = VAR12->VAR17;
    int VAR18 = VAR19[1][VAR16][0], VAR20 = VAR19[1][VAR16][1], VAR21;
    int VAR22[2];
    VAR23 *VAR24 = VAR12->VAR25[VAR26].VAR27.VAR24;
    VAR12->VAR3 = VAR3;
    VAR12->VAR28 = VAR3 & 7;
    VAR12->VAR4 = VAR4;
    VAR12->VAR29 = VAR4 & 7;
    VAR12->VAR30.VAR31 = -(128 + VAR4 * 64);
    VAR12->VAR30.VAR32 = -(128 + VAR3 * 64);
    VAR12->VAR33.VAR31 = 128 + (VAR12->VAR34 - VAR4 - VAR18) * 64;
    VAR12->VAR33.VAR32 = 128 + (VAR12->VAR35 - VAR3 - VAR20) * 64;
    if (VAR12->VAR36 < 2)
    {
        VAR15->VAR16 = VAR16;
        VAR15->VAR9 = VAR9;
        VAR15->VAR10 = VAR10;
        FUN2(VAR2);
        VAR15->VAR37 = VAR15->VAR38 - ((VAR12->VAR39 && VAR18 * 2 == (1 << VAR15->VAR38)) || (VAR12->VAR40 && VAR20 * 2 == (1 << VAR15->VAR38)));
        if (!VAR15->VAR41)
        {
            int VAR42;
            if (VAR17 == 1)
            {
                VAR42 = FUN3(VAR2);
            }
            else
            {
                VAR42 = FUN4(VAR2);
            }
            if (!VAR42 && VAR15->VAR16 <= VAR43 && !VAR15->VAR44)
            {
                VAR15->VAR41 = 1;
                memset(&VAR12->VAR45[VAR4], 1, VAR18);
                memset(&VAR12->VAR46[VAR12->VAR28], 1, VAR20);
            }
        }
        else
        {
            int VAR28 = VAR12->VAR28;
            switch (VAR47)
            {
            case 1:
                VAR48 = 0;
                break;
            case 2:
                FUN5(&VAR48);
                break;
            case 4:
                FUN6(&VAR48);
                break;
            case 8:
                FUN7(&VAR48);
                break;
            case 16:
                FUN8(&VAR48);
                break;
            }
            do
            {
                FUN9(VAR12->VAR49##VAR50##VAR51[VAR52 * 2], VAR47 * 2);
                if (VAR12->VAR53##VAR54)
                {
                    FUN9(VAR12->VAR49##VAR55##VAR51[0][VAR52], VAR47);
                    FUN9(VAR12->VAR49##VAR55##VAR51[1][VAR52], VAR47);
                }
                else
                {
                    FUN9(VAR12->VAR49##VAR55##VAR51[0][VAR52 * 2], VAR47 * 2);
                    FUN9(VAR12->VAR49##VAR55##VAR51[1][VAR52 * 2], VAR47 * 2);
                }
            } while (0) switch (VAR18)
            {
            case 1:
                FUN10(VAR56, VAR57, VAR4, 1, VAR58);
                break;
            case 2:
                FUN10(VAR56, VAR57, VAR4, 2, VAR58);
                break;
            case 4:
                FUN10(VAR56, VAR57, VAR4, 4, VAR58);
                break;
            case 8:
                FUN10(VAR56, VAR57, VAR4, 8, VAR58);
                break;
            }
            switch (VAR20)
            {
            case 1:
                FUN10(VAR59, VAR57, VAR28, 1, VAR48);
                break;
            case 2:
                FUN10(VAR59, VAR57, VAR28, 2, VAR48);
                break;
            case 4:
                FUN10(VAR59, VAR57, VAR28, 4, VAR48);
                break;
            case 8:
                FUN10(VAR59, VAR57, VAR28, 8, VAR48);
                break;
            }
        }
        if (VAR12->VAR36 == 1)
        {
            VAR12->VAR15++;
            VAR12->VAR60 += VAR18 * VAR20 * 64 * VAR17;
            VAR12->VAR61[0] += VAR18 * VAR20 * 64 * VAR17 >> (VAR12->VAR39 + VAR12->VAR40);
            VAR12->VAR61[1] += VAR18 * VAR20 * 64 * VAR17 >> (VAR12->VAR39 + VAR12->VAR40);
            VAR12->VAR62 += 4 * VAR18 * VAR20;
            VAR12->VAR63[0] += 4 * VAR18 * VAR20 >> (VAR12->VAR39 + VAR12->VAR40);
            VAR12->VAR63[1] += 4 * VAR18 * VAR20 >> (VAR12->VAR39 + VAR12->VAR40);
            return;
        }
    }
    VAR22[0] = (VAR4 + VAR18) * 8 > VAR24->VAR64[0] || (VAR3 + VAR20) > VAR12->VAR35;
    VAR22[1] = (VAR4 + VAR18) * 4 > VAR24->VAR64[1] || (VAR3 + VAR20) > VAR12->VAR35;
    if (VAR22[0])
    {
        VAR12->VAR65[0] = VAR12->VAR66;
        VAR12->VAR67 = 128;
    }
    else
    {
        VAR12->VAR65[0] = VAR24->VAR68[0] + VAR7;
        VAR12->VAR67 = VAR24->VAR64[0];
    }
    if (VAR22[1])
    {
        VAR12->VAR65[1] = VAR12->VAR69[0];
        VAR12->VAR65[2] = VAR12->VAR69[1];
        VAR12->VAR70 = 128;
    }
    else
    {
        VAR12->VAR65[1] = VAR24->VAR68[1] + VAR8;
        VAR12->VAR65[2] = VAR24->VAR68[2] + VAR8;
        VAR12->VAR70 = VAR24->VAR64[1];
    }
    if (VAR15->VAR44)
    {
        if (VAR12->VAR71 > 8)
        {
            FUN11(VAR2, VAR7, VAR8);
        }
        else
        {
            FUN12(VAR2, VAR7, VAR8);
        }
    }
    else
    {
        if (VAR12->VAR71 > 8)
        {
            FUN13(VAR2);
        }
        else
        {
            FUN14(VAR2);
        }
    }
    if (VAR22[0])
    {
        int VAR72 = FUN15(VAR12->VAR34 - VAR4, VAR18) * 8, VAR58 = FUN15(VAR12->VAR35 - VAR3, VAR20) * 8, VAR47, VAR73 = 0;
        for (VAR47 = 0; VAR73 < VAR72; VAR47++)
        {
            int VAR74 = 64 >> VAR47;
            FUN16(VAR47 <= 4);
            if (VAR72 & VAR74)
            {
                VAR12->VAR75.VAR76[VAR47][0][0][0][0](VAR24->VAR68[0] + VAR7 + VAR73 * VAR17, VAR24->VAR64[0], VAR12->VAR66 + VAR73 * VAR17, 128, VAR58, 0, 0);
                VAR73 += VAR74;
            }
        }
    }
    if (VAR22[1])
    {
        int VAR72 = FUN15(VAR12->VAR34 - VAR4, VAR18) * 8 >> VAR12->VAR39;
        int VAR58 = FUN15(VAR12->VAR35 - VAR3, VAR20) * 8 >> VAR12->VAR40, VAR47, VAR73 = 0;
        for (VAR47 = VAR12->VAR39; VAR73 < VAR72; VAR47++)
        {
            int VAR74 = 64 >> VAR47;
            FUN16(VAR47 <= 4);
            if (VAR72 & VAR74)
            {
                VAR12->VAR75.VAR76[VAR47][0][0][0][0](VAR24->VAR68[1] + VAR8 + VAR73 * VAR17, VAR24->VAR64[1], VAR12->VAR69[0] + VAR73 * VAR17, 128, VAR58, 0, 0);
                VAR12->VAR75.VAR76[VAR47][0][0][0][0](VAR24->VAR68[2] + VAR8 + VAR73 * VAR17, VAR24->VAR64[2], VAR12->VAR69[1] + VAR73 * VAR17, 128, VAR58, 0, 0);
                VAR73 += VAR74;
            }
        }
    }
    if (VAR12->VAR77.VAR78 && (VAR21 = VAR12->VAR79.VAR80[VAR15->VAR81].VAR6[VAR15->VAR44 ? 0 : VAR15->VAR82[0] + 1][VAR15->VAR83[3] != VAR84]) > 0)
    {
        int VAR85 = FUN15(VAR12->VAR34 - VAR4, VAR18), VAR86 = FUN15(VAR12->VAR35 - VAR3, VAR20);
        int VAR87 = !VAR15->VAR44 && VAR15->VAR41, VAR29 = VAR12->VAR29, VAR28 = VAR12->VAR28;
        FUN17(&VAR6->VAR78[VAR28 * 8 + VAR29], VAR18, VAR20, 8, VAR21);
        FUN18(VAR6->VAR88[0], 0, 0, VAR28, VAR29, VAR85, VAR86, 0, 0, VAR15->VAR38, VAR87);
        if (VAR12->VAR39 || VAR12->VAR40)
            FUN18(VAR6->VAR88[1], VAR12->VAR39, VAR12->VAR40, VAR28, VAR29, VAR85, VAR86, VAR12->VAR34 & 1 && VAR4 + VAR18 >= VAR12->VAR34 ? VAR12->VAR34 & 7 : 0, VAR12->VAR35 & 1 && VAR3 + VAR20 >= VAR12->VAR35 ? VAR12->VAR35 & 7 : 0, VAR15->VAR37, VAR87);
        if (!VAR12->VAR77.VAR89[VAR21])
        {
            int VAR90 = VAR12->VAR77.VAR91;
            int VAR92 = VAR21;
            if (VAR90 > 0)
            {
                VAR92 >>= (VAR90 + 3) >> 2;
                VAR92 = FUN15(VAR92, 9 - VAR90);
            }
            VAR92 = FUN19(VAR92, 1);
            VAR12->VAR77.VAR89[VAR21] = VAR92;
            VAR12->VAR77.VAR93[VAR21] = 2 * (VAR21 + 2) + VAR92;
        }
    }
    if (VAR12->VAR36 == 2)
    {
        VAR12->VAR15++;
        VAR12->VAR60 += VAR18 * VAR20 * 64 * VAR17;
        VAR12->VAR61[0] += VAR18 * VAR20 * 64 * VAR17 >> (VAR12->VAR40 + VAR12->VAR39);
        VAR12->VAR61[1] += VAR18 * VAR20 * 64 * VAR17 >> (VAR12->VAR40 + VAR12->VAR39);
        VAR12->VAR62 += 4 * VAR18 * VAR20;
        VAR12->VAR63[0] += 4 * VAR18 * VAR20 >> (VAR12->VAR40 + VAR12->VAR39);
        VAR12->VAR63[1] += 4 * VAR18 * VAR20 >> (VAR12->VAR40 + VAR12->VAR39);
    }
}