int FUN1(VAR1 *VAR2, int64_t VAR3)
{
    int64_t VAR4, VAR5, VAR6;
    VAR7 *VAR8 = VAR2->VAR8;
    VAR4 = FUN2(VAR8);
    VAR5 = VAR4 + VAR3;
    while ((VAR6 = FUN2(VAR8)) >= 0 && VAR6 <= VAR5 - 8)
    {
        uint32_t VAR9;
        int64_t VAR10;
        char VAR11[5] = {0};
        char *VAR12;
        VAR9 = FUN3(VAR8);
        VAR10 = FUN3(VAR8);
        if (FUN4(VAR8))
        {
            if (VAR9 || VAR10)
            {
                FUN5(VAR2, VAR13, "");
                return VAR14;
            }
            break;
        }
        if (VAR10 > VAR5 || VAR5 - VAR10 < VAR6 || VAR10 == VAR15)
        {
            FUN6(VAR8, -9, VAR16);
            VAR9 = FUN3(VAR8);
            VAR10 = FUN3(VAR8);
            if (VAR10 > VAR5 || VAR5 - VAR10 < VAR6 || VAR10 == VAR15)
            {
                FUN5(VAR2, VAR13, "");
                return VAR14;
            }
        }
        VAR10 += (VAR10 & 1);
        if (!VAR9)
        {
            if (VAR10)
                FUN7(VAR8, VAR10);
            continue;
        }
        VAR12 = FUN8(VAR10 + 1);
        if (!VAR12)
        {
            FUN5(VAR2, VAR17, "");
            return FUN9(VAR18);
        }
        FUN10(VAR11, VAR9);
        if (FUN11(VAR8, VAR12, VAR10) != VAR10)
        {
            FUN5(VAR2, VAR13, "");
        }
        FUN12(&VAR2->VAR19, VAR11, VAR12, VAR20);
    }
    return 0;
}