static int FUN1(VAR1 *VAR2, VAR3 *VAR4, VAR5 *VAR6, VAR7 *VAR8, VAR9 *VAR10, const VAR11 *VAR12, int VAR13, uint16_t VAR14, int VAR15)
{
    int VAR16, VAR17, VAR18, VAR19, VAR20;
    av_unused int VAR21 = 0, VAR22 = 0;
    av_unused int VAR23 = -1, VAR24 = -1, VAR25 = -1;
    int VAR26 = 0, VAR27 = 0;
    int VAR28, VAR29;
    int VAR30;
    int VAR31 = 0;
    if (VAR4->VAR12 && VAR4->VAR10 != *VAR10)
        FUN2(&VAR4->VAR12);
    if (VAR13 < VAR32 + 1)
    {
        FUN3(VAR2, VAR33, "", VAR13);
        return VAR34;
    }
    VAR16 = !!(VAR12[0] & 0x80);
    VAR17 = !!(VAR12[0] & 0x40);
    VAR18 = !!(VAR12[0] & 0x20);
    VAR28 = !!(VAR12[0] & 0x10);
    VAR29 = !!(VAR12[0] & 0x08);
    VAR19 = !!(VAR12[0] & 0x04);
    VAR20 = !!(VAR12[0] & 0x02);
    VAR30 = !!(VAR15 & VAR35);
    if (VAR29 != VAR30)
    {
        FUN3(VAR2, VAR33, "", VAR29, VAR30);
        return VAR34;
    }
    VAR12 += VAR32;
    VAR13 -= VAR32;
    if (VAR16)
    {
        if (VAR13 < 1)
        {
            FUN3(VAR2, VAR33, "");
            return VAR34;
        }
        if (VAR12[0] & 0x80)
        {
            if (VAR13 < 2)
            {
                FUN3(VAR2, VAR33, "");
                return VAR34;
            }
            VAR21 = FUN4(VAR12) & 0x7fff;
            VAR12 += 2;
            VAR13 -= 2;
        }
        else
        {
            VAR21 = VAR12[0] & 0x7f;
            VAR12++;
            VAR13--;
        }
    }
    if (VAR17)
    {
        if (VAR13 < 1)
        {
            FUN3(VAR2, VAR33, "");
            return VAR34;
        }
        VAR23 = VAR12[0] & 0xC0;
        VAR24 = VAR12[0] & 0x30;
        VAR25 = VAR12[0] & 0x0C;
        if (VAR18)
        {
            VAR26 = VAR12[0] & 0x03;
            if (VAR26)
                VAR22 = 1;
        }
        VAR12++;
        VAR13--;
    }
    if (VAR18)
    {
        while (VAR26)
        {
            if (VAR13 < 1)
            {
                FUN3(VAR2, VAR33, "");
                return VAR34;
            }
            VAR27 = VAR12[0] & 0x10;
            if (VAR27)
            {
                if (VAR13 < 2)
                {
                    FUN3(VAR2, VAR33, "");
                    return VAR34;
                }
                VAR12 += 2;
                VAR13 -= 2;
            }
            else
            {
                VAR12++;
                VAR13--;
            }
            VAR26--;
        }
    }
    if (VAR19)
    {
        FUN5(VAR2, "");
        return FUN6(VAR36);
    }
    if (VAR20)
    {
        FUN5(VAR2, "");
        return FUN6(VAR36);
    }
    if (VAR13 < 1)
    {
        FUN3(VAR2, VAR33, "");
        return VAR34;
    }
    if (!VAR4->VAR12)
    {
        if (VAR28)
        {
            VAR31 = FUN7(&VAR4->VAR12);
            if (VAR31 < 0)
                return VAR31;
            VAR4->VAR10 = *VAR10;
        }
        else
        {
            return FUN6(VAR37);
        }
    }
    FUN8(VAR4->VAR12, VAR12, VAR13);
    if (!VAR29)
        return FUN6(VAR37);
    VAR31 = FUN9(VAR8, &VAR4->VAR12, VAR6->VAR38);
    if (VAR31 < 0)
        return VAR31;
    return 0;
}