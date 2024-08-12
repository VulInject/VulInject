static int FUN1(VAR1 *VAR2, enum AVCodecID VAR3)
{
    int VAR4, VAR5 = 0, VAR6;
    VAR7 *VAR8, *VAR9, *VAR10;
    AC3HeaderInfo VAR11;
    GetBitContext VAR12;
    enum AVCodecID VAR13 = VAR14;
    VAR4 = 0;
    VAR8 = VAR2->VAR8;
    VAR10 = VAR8 + VAR2->VAR15;
    for (; VAR8 < VAR10; VAR8++)
    {
        if (VAR8 > VAR2->VAR8 && !(VAR8[0] == 0x0B && VAR8[1] == 0x77) && !(VAR8[0] == 0x77 && VAR8[1] == 0x0B))
            continue;
        VAR9 = VAR8;
        for (VAR6 = 0; VAR9 < VAR10; VAR6++)
        {
            uint8_t VAR16[4096];
            int VAR17;
            if (!memcmp(VAR9, "", 8))
                VAR9 += 16;
            if (VAR8[0] == 0x77 && VAR8[1] == 0x0B)
            {
                for (VAR17 = 0; VAR17 < 8; VAR17 += 2)
                {
                    VAR16[VAR17] = VAR8[VAR17 + 1];
                    VAR16[VAR17 + 1] = VAR8[VAR17];
                }
                FUN2(&VAR12, VAR16, 54);
            }
            else
                FUN2(&VAR12, VAR9, 54);
            if (FUN3(&VAR12, &VAR11) < 0)
                break;
            if (VAR9 + VAR11.VAR18 > VAR10)
                break;
            if (VAR8[0] == 0x77 && VAR8[1] == 0x0B)
            {
                FUN4(VAR11.VAR18 <= sizeof(VAR16));
                for (; VAR17 < VAR11.VAR18; VAR17 += 2)
                {
                    VAR16[VAR17] = VAR8[VAR17 + 1];
                    VAR16[VAR17 + 1] = VAR8[VAR17];
                }
            }
            if (FUN5(FUN6(VAR19), 0, VAR12.VAR20 + 2, VAR11.VAR18 - 2))
                break;
            if (VAR11.VAR21 > 10)
                VAR13 = VAR22;
            VAR9 += VAR11.VAR18;
        }
        VAR4 = FUN7(VAR4, VAR6);
        if (VAR8 == VAR2->VAR8)
            VAR5 = VAR6;
    }
    if (VAR13 != VAR3)
        return 0;
    if (VAR5 >= 4)
        return VAR23 / 2 + 1;
    else if (VAR4 > 200)
        return VAR23 / 2;
    else if (VAR4 >= 4)
        return VAR23 / 4;
    else if (VAR4 >= 1)
        return 1;
    else
        return 0;
}