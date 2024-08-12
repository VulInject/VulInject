int FUN1(VAR1 *VAR2, const VAR3 *VAR4, int VAR5, void *VAR6, int VAR7, int VAR8, enum AVCodecID VAR9)
{
    int VAR10, VAR11 = 0;
    const VAR3 *VAR12 = VAR4 + (VAR7 ? 0 : VAR5);
    VAR2->VAR13 = 0;
    while (VAR5 >= 4)
    {
        VAR14 *VAR15;
        int VAR16 = 0;
        int VAR17 = 1;
        if (VAR4 == VAR12)
        {
            int VAR18;
            for (VAR18 = 0; VAR18 < VAR8; VAR18++)
                VAR16 = (VAR16 << 8) | VAR4[VAR18];
            if (VAR16 > VAR5)
            {
                FUN2(VAR6, VAR19, "", VAR16, VAR5);
                return VAR20;
            }
            VAR4 += VAR8;
            VAR5 -= VAR8;
            VAR12 = VAR4 + VAR16;
        }
        else
        {
            int VAR21 = FUN3(VAR4, VAR12);
            VAR4 += VAR21;
            VAR5 -= VAR21;
            if (VAR4 == VAR12)
                continue;
            if (VAR5 > 0)
            {
                VAR16 = VAR5;
            }
            else if (VAR2->VAR13 == 0)
            {
                FUN2(VAR6, VAR19, "");
                return VAR20;
            }
            else
            {
                break;
            }
        }
        if (VAR2->VAR22 < VAR2->VAR13 + 1)
        {
            int VAR23 = VAR2->VAR22 + 1;
            VAR14 *VAR24 = FUN4(VAR2->VAR25, VAR23, sizeof(*VAR24));
            if (!VAR24)
                return FUN5(VAR26);
            VAR2->VAR25 = VAR24;
            memset(VAR2->VAR25 + VAR2->VAR22, 0, (VAR23 - VAR2->VAR22) * sizeof(*VAR24));
            VAR2->VAR22 = VAR23;
        }
        VAR15 = &VAR2->VAR25[VAR2->VAR13++];
        VAR10 = FUN6(VAR4, VAR16, VAR15);
        if (VAR10 < 0)
            return VAR10;
        if (VAR10 < VAR5 - 3 && VAR4[VAR10] == 0x00 && VAR4[VAR10 + 1] == 0x00 && VAR4[VAR10 + 2] == 0x01 && VAR4[VAR10 + 3] == 0xE0)
            VAR17 = 0;
        VAR15->VAR27 = FUN7(VAR15, VAR17);
        VAR11 = FUN8(&VAR15->VAR28, VAR15->VAR29, VAR15->VAR27);
        if (VAR11 < 0)
            return VAR11;
        if (VAR9 == VAR30)
            VAR11 = FUN9(VAR15, VAR6);
        else
            VAR11 = FUN10(VAR15, VAR6);
        if (VAR11 <= 0)
        {
            if (VAR11 < 0)
            {
                FUN2(VAR6, VAR19, "", VAR15->VAR31);
            }
            VAR2->VAR13--;
        }
        VAR4 += VAR10;
        VAR5 -= VAR10;
    }
    return 0;
}