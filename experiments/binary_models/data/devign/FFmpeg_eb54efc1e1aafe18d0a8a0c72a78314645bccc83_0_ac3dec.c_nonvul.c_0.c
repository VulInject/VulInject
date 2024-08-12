static int FUN1(VAR1 *VAR2, enum AVCodecID VAR3)
{
    int VAR4, VAR5 = 0, VAR6;
    const VAR7 *VAR8, *VAR9, *VAR10;
    enum AVCodecID VAR11 = VAR12;
    VAR4 = 0;
    VAR8 = VAR2->VAR8;
    VAR10 = VAR8 + VAR2->VAR13;
    for (; VAR8 < VAR10; VAR8++)
    {
        if (VAR8 > VAR2->VAR8 && !(VAR8[0] == 0x0B && VAR8[1] == 0x77) && !(VAR8[0] == 0x77 && VAR8[1] == 0x0B))
            continue;
        VAR9 = VAR8;
        for (VAR6 = 0; VAR9 < VAR10; VAR6++)
        {
            uint8_t VAR14[4096];
            uint8_t VAR15;
            uint16_t VAR16;
            int VAR17, VAR18;
            if (!memcmp(VAR9, "", 8))
            {
                if (VAR9 + 16 > VAR10)
                    break;
                VAR9 += 16;
            }
            if (VAR8[0] == 0x77 && VAR8[1] == 0x0B)
            {
                for (VAR17 = 0; VAR17 < 8; VAR17 += 2)
                {
                    VAR14[VAR17] = VAR9[VAR17 + 1];
                    VAR14[VAR17 + 1] = VAR9[VAR17];
                }
                VAR18 = FUN2(VAR14, 8, &VAR15, &VAR16);
            }
            else
                VAR18 = FUN2(VAR9, VAR10 - VAR9, &VAR15, &VAR16);
            if (VAR18 < 0)
                break;
            if (VAR9 + VAR16 > VAR10)
                break;
            if (VAR8[0] == 0x77 && VAR8[1] == 0x0B)
            {
                FUN3(VAR16 <= sizeof(VAR14));
                for (VAR17 = 8; VAR17 < VAR16; VAR17 += 2)
                {
                    VAR14[VAR17] = VAR9[VAR17 + 1];
                    VAR14[VAR17 + 1] = VAR9[VAR17];
                }
                if (FUN4(FUN5(VAR19), 0, VAR14 + 2, VAR16 - 2))
                    break;
            }
            else
            {
                if (FUN4(FUN5(VAR19), 0, VAR9 + 2, VAR16 - 2))
                    break;
            }
            if (VAR15 > 10)
                VAR11 = VAR20;
            VAR9 += VAR16;
        }
        VAR4 = FUN6(VAR4, VAR6);
        if (VAR8 == VAR2->VAR8)
            VAR5 = VAR6;
    }
    if (VAR11 != VAR3)
        return 0;
    if (VAR5 >= 7)
        return VAR21 + 1;
    else if (VAR4 > 200)
        return VAR21;
    else if (VAR4 >= 4)
        return VAR21 / 2;
    else if (VAR4 >= 1)
        return 1;
    else
        return 0;
}