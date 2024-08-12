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
        if (VAR10 > VAR5 || VAR5 - VAR10 < VAR6 || VAR10 == VAR13)
        {
            FUN4(VAR2, VAR14, "");
            return VAR15;
        }
        VAR10 += (VAR10 & 1);
        VAR12 = FUN5(VAR10 + 1);
        if (!VAR12)
        {
            FUN4(VAR2, VAR14, "");
            return FUN6(VAR16);
        }
        FUN7(VAR11, VAR9);
        if (FUN8(VAR8, VAR12, VAR10) != VAR10)
        {
            FUN9(VAR11);
            FUN9(VAR12);
            FUN4(VAR2, VAR14, "");
            return VAR15;
        }
        VAR12[VAR10] = 0;
        FUN10(&VAR2->VAR17, VAR11, VAR12, VAR18);
    }
    return 0;
}