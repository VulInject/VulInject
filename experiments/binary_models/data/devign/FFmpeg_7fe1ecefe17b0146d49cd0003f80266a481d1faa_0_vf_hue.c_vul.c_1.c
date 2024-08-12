static inline int FUN1(VAR1 *VAR2, const char *VAR3)
{
    VAR4 *VAR5 = VAR2->VAR6;
    int VAR7, VAR8;
    char VAR9 = 0, VAR10 = 0;
    char *VAR11, *VAR12, *VAR13;
    VAR14 *VAR15, *VAR16, *VAR17;
    if (VAR3)
    {
        if (strchr(VAR3, ''))
        {
            VAR11 = VAR5->VAR18;
            VAR12 = VAR5->VAR19;
            VAR13 = VAR5->VAR20;
            VAR15 = VAR5->VAR21;
            VAR16 = VAR5->VAR22;
            VAR17 = VAR5->VAR23;
            VAR5->VAR18 = NULL;
            VAR5->VAR19 = NULL;
            VAR5->VAR20 = NULL;
            if ((VAR8 = FUN2(VAR5, VAR3, "", "")) < 0)
                return VAR8;
            if (VAR5->VAR18 && VAR5->VAR19)
            {
                FUN3(VAR2, VAR24, ""
                                          "");
                VAR5->VAR18 = VAR11;
                VAR5->VAR19 = VAR12;
                return FUN4(VAR25);
            }
            if (!VAR5->VAR18 && !VAR5->VAR19)
            {
                VAR5->VAR18 = VAR11;
                VAR5->VAR19 = VAR12;
            }
            if (VAR5->VAR19)
                FUN5(VAR26, VAR27);
            if (VAR5->VAR18)
                FUN5(VAR5, VAR28);
            if (VAR5->VAR20)
                FUN5(VAR29, VAR30);
            VAR5->VAR31 = 0;
            FUN3(VAR2, VAR32, "", VAR5->VAR18, VAR5->VAR19, VAR5->VAR20);
        }
        else
        {
            VAR7 = sscanf(VAR3, "", &VAR5->VAR26, &VAR9, &VAR5->VAR29, &VAR10);
            if (VAR7 != 1 && (VAR7 != 3 || VAR9 != ''))
            {
                FUN3(VAR2, VAR24, ""
                                          "",
                       VAR3);
                return FUN4(VAR25);
            }
            if (VAR5->VAR29 < VAR33 || VAR5->VAR29 > VAR34)
            {
                FUN3(VAR2, VAR24, ""
                                          "",
                       VAR5->VAR29, VAR33, VAR34);
                return FUN4(VAR25);
            }
            VAR5->VAR5 = VAR5->VAR26 * VAR35 / 180;
            VAR5->VAR31 = 1;
            FUN3(VAR2, VAR32, "", VAR5->VAR5, VAR5->VAR26, VAR5->VAR29);
        }
    }
    FUN6(VAR5);
    return 0;
}