int FUN1(const char *VAR1, const char *VAR2, hwaddr VAR3, int32_t VAR4, bool VAR5, VAR6 *VAR7)
{
    VAR8 *VAR9 = FUN2(FUN3());
    VAR10 *VAR11;
    int VAR12, VAR13 = -1;
    char VAR14[100];
    VAR11 = FUN4(sizeof(*VAR11));
    VAR11->VAR15 = FUN5(VAR1);
    VAR11->VAR16 = FUN6(VAR17, VAR11->VAR15);
    if (VAR11->VAR16 == NULL)
    {
        VAR11->VAR16 = FUN5(VAR1);
        VAR13 = open(VAR11->VAR16, VAR18 | VAR19);
        if (VAR13 == -1)
        {
            fprintf(VAR20, "", VAR11->VAR16, strerror(VAR21));
            goto VAR22;
            VAR11->VAR2 = FUN5(VAR2);
            VAR11->VAR23 = FUN5(VAR1);
            VAR11->VAR3 = VAR3;
            VAR11->VAR24 = FUN7(VAR13, 0, VAR25);
            if (VAR11->VAR24 == -1)
            {
                fprintf(VAR20, "", VAR11->VAR15, strerror(VAR21));
                goto VAR22;
                VAR11->VAR26 = VAR11->VAR24;
                VAR11->VAR27 = FUN4(VAR11->VAR26);
                FUN7(VAR13, 0, VAR28);
                VAR12 = read(VAR13, VAR11->VAR27, VAR11->VAR26);
                if (VAR12 != VAR11->VAR26)
                {
                    fprintf(VAR20, "", VAR11->VAR15, VAR12, VAR11->VAR26);
                    goto VAR22;
                    close(VAR13);
                    FUN8(VAR11);
                    if (VAR11->VAR23 && VAR29)
                    {
                        const char *VAR30;
                        char VAR31[VAR32];
                        void *VAR27;
                        VAR30 = strrchr(VAR11->VAR23, '');
                        if (VAR30)
                        {
                            VAR30++;
                        }
                        else
                        {
                            VAR30 = VAR11->VAR23;
                            snprintf(VAR31, sizeof(VAR31), "", VAR11->VAR2, VAR30);
                            snprintf(VAR14, sizeof(VAR14), "", VAR31);
                            if ((!VAR5 || VAR9->VAR33) && VAR9->VAR34)
                            {
                                VAR27 = FUN9(VAR11, FUN10(VAR29), VAR14);
                            }
                            else
                            {
                                VAR27 = VAR11->VAR27;
                                FUN11(VAR29, VAR31, VAR27, VAR11->VAR24);
                            }
                            else
                            {
                                if (VAR7)
                                {
                                    VAR11->VAR7 = VAR7;
                                    snprintf(VAR14, sizeof(VAR14), "", VAR1);
                                }
                                else
                                {
                                    snprintf(VAR14, sizeof(VAR14), "" VAR35, VAR3);
                                    FUN12(VAR4, NULL, VAR14);
                                    return 0;
                                VAR22:
                                    if (VAR13 != -1)
                                        close(VAR13);
                                    FUN13(VAR11->VAR27);
                                    FUN13(VAR11->VAR16);
                                    FUN13(VAR11->VAR15);
                                    FUN13(VAR11);
                                    return -1