static void FUN1(const char *VAR1)
{
    enum
    {
        VAR2,
        VAR3,
        VAR4,
        VAR5
    } VAR6 = VAR5;
    static const char *const VAR7[] = {"", "", ""};
    if (!FUN2(VAR1, "", 4))
    {
        VAR6 = VAR2;
        VAR1 += 4;
    }
    else if (!FUN2(VAR1, "", 5))
    {
        VAR6 = VAR3;
        VAR1 += 5;
    }
    else if (!FUN2(VAR1, "", 5))
    {
        VAR6 = VAR4;
        VAR1 += 5;
    }
    else
    {
        int VAR8;
        VAR8 = (int)(VAR9.VAR10 * 1000.0 / VAR9.VAR11);
        if (VAR8 == 25000)
        {
            VAR6 = VAR2;
        }
        else if ((VAR8 == 29970) || (VAR8 == 23976))
        {
            VAR6 = VAR3;
        }
        else
        {
            if (VAR12)
            {
                int VAR13, VAR14;
                for (VAR14 = 0; VAR14 < VAR12; VAR14++)
                {
                    for (VAR13 = 0; VAR13 < VAR15[VAR14]->VAR16; VAR13++)
                    {
                        VAR17 *VAR18 = VAR15[VAR14]->VAR19[VAR13]->VAR20;
                        if (VAR18->VAR21 != VAR22)
                            continue;
                        VAR8 = VAR18->VAR23.VAR11 * 1000 / VAR18->VAR23.VAR10;
                        if (VAR8 == 25000)
                        {
                            VAR6 = VAR2;
                            break;
                        }
                        else if ((VAR8 == 29970) || (VAR8 == 23976))
                        {
                            VAR6 = VAR3;
                            break;
                        }
                    }
                    if (VAR6 != VAR5)
                        break;
                }
            }
        }
        if (VAR24 > 0 && VAR6 != VAR5)
            fprintf(VAR25, "", VAR6 == VAR2 ? "" : "");
    }
    if (VAR6 == VAR5)
    {
        fprintf(VAR25, "");
        fprintf(VAR25, ""VAR26-\""VAR27-\""VAR28-\"");
        fprintf(VAR25, ""-r VAR29\"");
        FUN3(1);
    }
    if (!strcmp(VAR1, ""))
    {
        FUN4("");
        FUN5("");
        FUN6("");
        FUN7(VAR6 == VAR2 ? "" : "");
        FUN8(NULL, VAR7[VAR6]);
        FUN9("", VAR6 == VAR2 ? "" : "");
        FUN9("", "");
        FUN9("", "");
        FUN9("", "");
        FUN9("", "");
        FUN9("", "");
        VAR30 = 44100;
        VAR31 = 2;
        FUN9("", "");
        FUN9("", "");
        VAR32 = (36000 + 3 * 1200) / 90000.0;
    }
    else if (!strcmp(VAR1, ""))
    {
        FUN4("");
        FUN5("");
        FUN6("");
        FUN7(VAR6 == VAR2 ? "" : "");
        FUN8(NULL, VAR7[VAR6]);
        FUN9("", VAR6 == VAR2 ? "" : "");
        FUN9("", "");
        FUN9("", "");
        FUN9("", "");
        FUN9("", "");
        FUN9("", "");
        FUN9("", "");
        VAR30 = 44100;
        FUN9("", "");
    }
    else if (!strcmp(VAR1, ""))
    {
        FUN4("");
        FUN5("");
        FUN6("");
        FUN7(VAR6 == VAR2 ? "" : "");
        FUN8(NULL, VAR7[VAR6]);
        FUN9("", VAR6 == VAR2 ? "" : "");
        FUN9("", "");
        FUN9("", "");
        FUN9("", "");
        FUN9("", "");
        FUN9("", "");
        FUN9("", "");
        FUN9("", "");
        VAR30 = 48000;
    }
    else if (!FUN2(VAR1, "", 2))
    {
        FUN6("");
        FUN7(VAR6 == VAR2 ? "" : "");
        FUN10(!FUN2(VAR1, "", 4) ? "" : (VAR6 == VAR2 ? "" : ""));
        FUN8(NULL, VAR7[VAR6]);
        VAR30 = 48000;
        VAR31 = 2;
    }
    else
    {
        fprintf(VAR25, "", VAR1);
        FUN3(1);
    }
}