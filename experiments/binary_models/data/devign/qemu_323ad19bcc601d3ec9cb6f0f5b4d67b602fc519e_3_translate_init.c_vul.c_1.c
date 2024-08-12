static void FUN1(VAR1 *VAR2)
{
    VAR3 **VAR4, *VAR5;
    const char *VAR6, *VAR7;
    uint8_t VAR8, VAR9, VAR10;
    FUN2("");
    for (VAR8 = 0x00; VAR8 < VAR11; VAR8++)
    {
        VAR4 = VAR2->VAR12;
        VAR5 = VAR4[VAR8];
        if (FUN3(VAR5))
        {
            for (VAR9 = 0; VAR9 < VAR13; VAR9++)
            {
                VAR4 = VAR2->VAR12;
                VAR5 = VAR2->VAR12[VAR8];
                VAR4 = FUN4(VAR5);
                VAR5 = VAR4[VAR9];
                if (FUN3(VAR5))
                {
                    VAR4 = FUN4(VAR5);
                    for (VAR10 = 0; VAR10 < VAR13; VAR10++)
                    {
                        VAR5 = VAR4[VAR10];
                        if (VAR5->VAR5 != &VAR14)
                        {
                            VAR6 = strchr(VAR5->VAR15, '');
                            if (VAR6 == NULL)
                            {
                                FUN2(""
                                       "",
                                       VAR8, VAR9, VAR10, VAR8, (VAR10 << 5) | VAR9, VAR5->VAR15);
                            }
                            else
                            {
                                VAR7 = "";
                                if ((VAR6 - VAR5->VAR15) != strlen(VAR7) || memcmp(VAR5->VAR15, VAR7, strlen(VAR7)) != 0)
                                {
                                    FUN2(""
                                           "",
                                           VAR8, VAR9 << 1, VAR10, VAR8, (VAR10 << 6) | (VAR9 << 1), (int)(VAR6 - VAR5->VAR15), VAR5->VAR15);
                                }
                                if (strcmp(VAR6 + 1, VAR7) != 0)
                                {
                                    FUN2(""
                                           "",
                                           VAR8, (VAR9 << 1) | 1, VAR10, VAR8, (VAR10 << 6) | (VAR9 << 1) | 1, VAR6 + 1);
                                }
                            }
                        }
                    }
                }
                else
                {
                    if (VAR5->VAR5 != &VAR14)
                    {
                        FUN2("", VAR8, VAR9, VAR8, VAR9, VAR5->VAR15);
                    }
                }
            }
        }
        else
        {
            if (VAR5->VAR5 != &VAR14)
            {
                FUN2("", VAR8, VAR8, VAR5->VAR15);
            }
        }
    }
}