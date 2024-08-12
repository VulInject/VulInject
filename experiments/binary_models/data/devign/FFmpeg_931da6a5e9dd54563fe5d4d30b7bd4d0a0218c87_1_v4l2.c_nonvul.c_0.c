static int FUN1(VAR1 *VAR2, enum AVPixelFormat VAR3, int *VAR4, int *VAR5, VAR6 *VAR7, enum VAR8 *VAR9)
{
    int VAR10, VAR11;
    *VAR7 = FUN2(VAR3, VAR2->VAR12);
    if (*VAR7)
    {
        VAR10 = FUN3(VAR2, VAR4, VAR5, *VAR7);
        if (VAR10 < 0)
        {
            *VAR7 = 0;
            if (VAR10 != FUN4(VAR13))
                return VAR10;
        }
    }
    if (!*VAR7)
    {
        for (VAR11 = 0; VAR14[VAR11].VAR9 != VAR15; VAR11++)
        {
            if (VAR2->VAR12 == VAR15 || VAR14[VAR11].VAR9 == VAR2->VAR12)
            {
                FUN5(VAR2, VAR16, "", FUN6(VAR14[VAR11].VAR9), (char *)FUN7(FUN8(VAR14[VAR11].VAR17), ""));
                *VAR7 = VAR14[VAR11].VAR18;
                VAR10 = FUN3(VAR2, VAR4, VAR5, *VAR7);
                if (VAR10 >= 0)
                    break;
                else if (VAR10 != FUN4(VAR13))
                    return VAR10;
                *VAR7 = 0;
            }
        }
        if (*VAR7 == 0)
        {
            FUN5(VAR2, VAR19, ""
                                      "",
                   FUN6(VAR2->VAR12), VAR2->VAR12, (char *)FUN7(FUN8(VAR3), ""), VAR3);
            VAR10 = FUN4(VAR13);
        }
    }
    *VAR9 = FUN9(*VAR7);
    FUN10(*VAR9 != VAR15);
    return VAR10;
}