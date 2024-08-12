static int FUN1(int *VAR1, int VAR2)
{
    int VAR3 = 0;
    int VAR4 = VAR5.VAR6;
    *VAR1 = 0;
    if (VAR5.VAR7 == VAR8)
    {
        VAR3 = FUN2(VAR9, VAR10, VAR1, &VAR5);
        if (VAR3 < 0)
        {
            fprintf(VAR11, "", FUN3(VAR3));
            return VAR3;
        }
        if (*VAR1)
        {
            if (VAR10->VAR12 != VAR12 || VAR10->VAR13 != VAR13 || VAR10->VAR14 != VAR15)
            {
                fprintf(VAR11, ""
                                ""
                                ""
                                ""
                                "",
                        VAR12, VAR13, FUN4(VAR15), VAR10->VAR12, VAR10->VAR13, FUN4(VAR10->VAR14));
                return -1;
            }
            FUN5("", VAR2 ? "" : "", VAR16++, VAR10->VAR17, FUN6(VAR10->VAR18, &VAR9->VAR19));
            FUN7(VAR20, VAR21, (const VAR22 **)(VAR10->VAR23), VAR10->VAR24, VAR15, VAR12, VAR13);
            fwrite(VAR20[0], 1, VAR25, VAR26);
        }
    }
    else if (VAR5.VAR7 == VAR27)
    {
        VAR3 = FUN8(VAR28, VAR10, VAR1, &VAR5);
        if (VAR3 < 0)
        {
            fprintf(VAR11, "", FUN3(VAR3));
            return VAR3;
        }
        VAR4 = FUN9(VAR3, VAR5.VAR6);
        if (*VAR1)
        {
            size_t VAR29 = VAR10->VAR30 * FUN10(VAR10->VAR14);
            FUN5("", VAR2 ? "" : "", VAR31++, VAR10->VAR30, FUN6(VAR10->VAR18, &VAR28->VAR19));
            fwrite(VAR10->VAR32[0], 1, VAR29, VAR33);
        }
    }
    if (*VAR1 && VAR34 == VAR35)
        FUN11(VAR10);
    return VAR4;
}