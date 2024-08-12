int FUN1(VAR1 *VAR2)
{
    char *VAR3;
    int VAR4, VAR5;
    xvid_plg_create_t VAR6 = {0};
    xvid_plugin_2pass2_t VAR7 = {0};
    VAR4 = FUN2("", &VAR3, 0, VAR2->VAR8);
    if (VAR4 == -1)
    {
        FUN3(NULL, VAR9, "");
        return -1;
    }
    for (VAR5 = 0; VAR5 < VAR2->VAR10.VAR11; VAR5++)
    {
        static const char VAR12[] = "";
        char VAR13[256];
        VAR14 *VAR15;
        VAR15 = &VAR2->VAR10.VAR16[VAR5];
        snprintf(VAR13, sizeof(VAR13), "", VAR12[VAR15->VAR17], (int)FUN4(VAR15->VAR18 / VAR19), VAR15->VAR20, VAR2->VAR21 - VAR15->VAR20 - VAR15->VAR22, VAR15->VAR22, (VAR15->VAR23 + VAR15->VAR24 + VAR15->VAR25 + 7) / 8, (VAR15->VAR26 + VAR15->VAR27 + 7) / 8);
        if (write(VAR4, VAR13, strlen(VAR13)) < 0)
        {
            FUN3(NULL, VAR9, "", strerror(VAR28));
            return FUN5(VAR28);
        }
    }
    VAR7.VAR29 = FUN6(1, 1, 0);
    VAR7.VAR30 = VAR3;
    VAR7.VAR31 = VAR2->VAR8->VAR32;
    VAR7.VAR33 = VAR2->VAR8->VAR34;
    VAR7.VAR35 = VAR2->VAR8->VAR36;
    VAR7.VAR37 = VAR2->VAR8->VAR38;
    VAR6.VAR29 = FUN6(1, 1, 0);
    VAR6.VAR39 = VAR2->VAR8->VAR40.VAR41;
    VAR6.VAR42 = VAR2->VAR8->VAR40.VAR43;
    VAR6.VAR44 = &VAR7;
    if (FUN7(NULL, VAR45, &VAR6, &VAR2->VAR10.VAR46) < 0)
    {
        FUN3(NULL, VAR9, "");
        return -1;
    }
    return 0;