static int FUN1(const char *VAR1, VAR2 *VAR3, const char *VAR4, VAR5 *VAR6, VAR7 **VAR8)
{
    int VAR9;
    int VAR10;
    char VAR11[11];
    char VAR12[11];
    char VAR13[512];
    const char *VAR14;
    int64_t VAR15 = 0;
    int64_t VAR16;
    char *VAR17;
    VAR18 *VAR19;
    VAR20 *VAR21 = VAR3->VAR22;
    VAR23 *VAR24;
    char VAR25[32];
    VAR7 *VAR26 = NULL;
    for (VAR14 = VAR1; *VAR14; VAR14 = FUN2(VAR14))
    {
        VAR16 = -1;
        VAR10 = sscanf(VAR14, "" VAR27 ""%511[^\VAR28\VAR29\"" %" VAR27, VAR11, &VAR15, VAR12, VAR13, &VAR16);
        if (VAR10 < 4 || strcmp(VAR11, ""))
        {
            continue;
        }
        else if (!strcmp(VAR12, ""))
        {
            if (VAR10 != 5 || VAR16 < 0)
            {
                FUN3(VAR8, "", VAR14);
                return -VAR30;
            }
        }
        else if (!strcmp(VAR12, ""))
        {
            if (VAR10 == 4)
            {
                VAR16 = 0;
            }
            else
            {
                FUN3(VAR8, "", VAR14);
                return -VAR30;
            }
        }
        else if (VAR10 != 4)
        {
            FUN3(VAR8, "", VAR14);
            return -VAR30;
        }
        if (VAR15 <= 0 || (strcmp(VAR12, "") && strcmp(VAR12, "") && strcmp(VAR12, "") && strcmp(VAR12, "")) || (strcmp(VAR11, "")))
        {
            continue;
        }
        if (!FUN4(VAR13) && !FUN5(VAR13) && !VAR4[0])
        {
            FUN3(VAR8, ""
                             "",
                       VAR3->VAR31->VAR3->VAR32);
            return -VAR30;
        }
        VAR17 = FUN6(VAR33);
        FUN7(VAR17, VAR33, VAR4, VAR13);
        VAR9 = snprintf(VAR25, 32, "", VAR21->VAR34);
        assert(VAR9 < 32);
        VAR19 = FUN8(VAR17, VAR6, VAR25, VAR3, &VAR35, false, &VAR26);
        FUN9(VAR17);
        if (VAR26)
        {
            FUN10(VAR8, VAR26);
            return -VAR30;
        }
        if (!strcmp(VAR12, "") || !strcmp(VAR12, ""))
        {
            VAR9 = FUN11(VAR3, VAR19, true, VAR15, 0, 0, 0, 0, 0, &VAR24, VAR8);
            if (VAR9 < 0)
            {
                FUN12(VAR3, VAR19);
                return VAR9;
            }
            VAR24->VAR36 = VAR16 << 9;
        }
        else if (!strcmp(VAR12, "") || !strcmp(VAR12, ""))
        {
            char *VAR37 = FUN13(VAR19->VAR3, 0, VAR8);
            if (!VAR37)
            {
                VAR9 = -VAR30;
            }
            else
            {
                VAR9 = FUN14(VAR3, VAR19, VAR3->VAR38, VAR37, VAR6, VAR8);
            }
            FUN9(VAR37);
            if (VAR9)
            {
                FUN12(VAR3, VAR19);
                return VAR9;
            }
            VAR24 = &VAR21->VAR39[VAR21->VAR34 - 1];
        }
        else
        {
            FUN3(VAR8, "", VAR12);
            FUN12(VAR3, VAR19);
            return -VAR40;
        }
        VAR24->VAR12 = FUN15(VAR12);
    }
    return 0;
}