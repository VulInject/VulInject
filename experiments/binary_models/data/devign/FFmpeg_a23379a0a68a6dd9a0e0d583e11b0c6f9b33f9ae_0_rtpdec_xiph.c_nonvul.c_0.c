static int FUN1(VAR1 *VAR2, VAR3 *VAR4, VAR5 *VAR6, VAR7 *VAR8, VAR9 *VAR10, const VAR11 *VAR12, int VAR13, uint16_t VAR14, int VAR15)
{
    int VAR16, VAR17, VAR18, VAR19, VAR20;
    if (!VAR12)
    {
        if (!VAR4->VAR21 || VAR4->VAR22 + 2 > VAR4->VAR23 || VAR4->VAR24 <= 0)
        {
            FUN2(VAR2, VAR25, "");
            return VAR26;
        }
        VAR20 = FUN3(VAR4->VAR21 + VAR4->VAR22);
        VAR4->VAR22 += 2;
        if (VAR20 > VAR4->VAR23 - VAR4->VAR22)
        {
            FUN2(VAR2, VAR25, "");
            return VAR26;
        }
        if (FUN4(VAR8, VAR20))
        {
            FUN2(VAR2, VAR25, "");
            return FUN5(VAR27);
        }
        VAR8->VAR28 = VAR6->VAR29;
        memcpy(VAR8->VAR4, VAR4->VAR21 + VAR4->VAR22, VAR20);
        VAR4->VAR22 += VAR20;
        VAR4->VAR24--;
        return VAR4->VAR24 > 0;
    }
    if (VAR13 < 6 || VAR13 > VAR30 / 2)
    {
        FUN2(VAR2, VAR25, "", VAR13);
        return VAR26;
    }
    VAR16 = FUN6(VAR12);
    VAR17 = VAR12[3] >> 6;
    VAR18 = (VAR12[3] >> 4) & 3;
    VAR19 = VAR12[3] & 0xf;
    VAR20 = FUN3(VAR12 + 4);
    if (VAR20 > VAR13 - 6)
    {
        FUN2(VAR2, VAR25, "", VAR20, VAR13);
        return VAR26;
    }
    if (VAR16 != VAR4->VAR16)
    {
        FUN2(VAR2, VAR25, "");
        return VAR31;
    }
    if (VAR18)
    {
        FUN2(VAR2, VAR25, "", VAR17, VAR18, VAR19);
        return VAR31;
    }
    VAR12 += 6;
    VAR13 -= 6;
    if (VAR17 == 0)
    {
        if (FUN4(VAR8, VAR20))
        {
            FUN2(VAR2, VAR25, "");
            return FUN5(VAR27);
        }
        VAR8->VAR28 = VAR6->VAR29;
        memcpy(VAR8->VAR4, VAR12, VAR20);
        VAR12 += VAR20;
        VAR13 -= VAR20;
        VAR19--;
        if (VAR19 > 0)
        {
            if (VAR13 > VAR4->VAR32 || !VAR4->VAR21)
            {
                FUN7(&VAR4->VAR21);
                VAR4->VAR32 = 2 * VAR13;
                VAR4->VAR21 = FUN8(VAR4->VAR32);
                if (!VAR4->VAR21)
                {
                    FUN2(VAR2, VAR25, "");
                    FUN9(VAR8);
                    return FUN5(VAR27);
                }
            }
            memcpy(VAR4->VAR21, VAR12, VAR13);
            VAR4->VAR23 = VAR13;
            VAR4->VAR22 = 0;
            VAR4->VAR24 = VAR19;
            return 1;
        }
        return 0;
    }
    else if (VAR17 == 1)
    {
        int VAR33;
        FUN10(&VAR4->VAR34);
        if ((VAR33 = FUN11(&VAR4->VAR34)) < 0)
            return VAR33;
        FUN12(VAR4->VAR34, VAR12, VAR20);
        VAR4->VAR10 = *VAR10;
    }
    else
    {
        FUN13(VAR17 < 4);
        if (VAR4->VAR10 != *VAR10)
        {
            FUN10(&VAR4->VAR34);
            FUN2(VAR2, VAR25, "");
            return VAR26;
        }
        if (!VAR4->VAR34)
        {
            FUN2(VAR2, VAR35, "");
            return FUN5(VAR36);
        }
        FUN12(VAR4->VAR34, VAR12, VAR20);
        if (VAR17 == 3)
        {
            int VAR37 = FUN14(VAR8, &VAR4->VAR34, VAR6->VAR29);
            if (VAR37 < 0)
            {
                FUN2(VAR2, VAR25, "");
                return VAR37;
            }
            return 0;
        }
    }
    return FUN5(VAR36);
}