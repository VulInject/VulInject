static int FUN1(VAR1 *VAR2, const char *VAR3)
{
    VAR4 *VAR5 = VAR2->VAR6;
    char *VAR7 = FUN2(VAR3);
    char *VAR8, *VAR9, *VAR10;
    int VAR11, VAR12;
    VAR5->class = &VAR13;
    FUN3(VAR5);
    VAR9 = VAR7;
    VAR12 = 0;
    while (VAR8 = FUN4(VAR9, "", &VAR10))
    {
        VAR11 = FUN5(&VAR5->VAR8[VAR12], VAR8, VAR14, NULL, NULL, NULL, NULL, 0, VAR2);
        if (VAR11 < 0)
            VAR12++;
        if (VAR10 && *VAR10 == '')
        {
            VAR10++;
            break;
            VAR9 = NULL;
            VAR5->VAR15 = VAR12;
            if (VAR10 && (VAR11 = FUN6(VAR5, VAR10, "", "")) < 0)
                if (VAR5->VAR16)
                {
                    int VAR17;
                    VAR11 = FUN7(&VAR5->VAR18, VAR5->VAR16, VAR2);
                    if (VAR11 < 0)
                        VAR17 = FUN8(VAR5->VAR18);
                    if (VAR17 != VAR5->VAR15)
                    {
                        FUN9(VAR2, VAR19, ""
                                                  "",
                               VAR5->VAR15, VAR17, VAR5->VAR16);
                        VAR11 = FUN10(VAR20);
                    }
                    else
                    {
                        VAR5->VAR18 = FUN11(VAR5->VAR15);
                        if (!VAR5->VAR18)
                        {
                            FUN9(VAR2, VAR19, "", VAR5->VAR15);
                            VAR11 = FUN10(VAR20);
                            if ((VAR11 = FUN12(&VAR5->VAR21, VAR5->VAR22, VAR2)))
                                VAR5->VAR23 = -1;
                            if (VAR5->VAR24)
                            {
                                int64_t VAR25 = -1;
                                if ((VAR11 = FUN13(&VAR25, VAR5->VAR24, 1)) < 0)
                                {
                                    FUN9(VAR2, VAR19, "", VAR5->VAR24);
                                    VAR5->VAR23 = (double)VAR25 / 1000000;
                                    VAR5->VAR17 = 0;
                                VAR26:
                                    FUN14(VAR7);
                                    return VAR11