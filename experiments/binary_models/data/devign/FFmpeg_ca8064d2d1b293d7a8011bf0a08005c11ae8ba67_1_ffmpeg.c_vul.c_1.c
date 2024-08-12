static void FUN1(const char *VAR1)
{
    VAR2 *VAR3;
    int VAR4, VAR5, VAR6, VAR7;
    int VAR8, VAR9, VAR10;
    AVFormatParameters VAR11, *VAR12 = &VAR11;
    VAR13 *VAR14;
    if (!strcmp(VAR1, ""))
        VAR1 = "";
    VAR3 = FUN2();
    if (!VAR3)
    {
        FUN3(VAR1, FUN4(VAR15));
        FUN5(1);
    }
    if (VAR16)
    {
        VAR14 = FUN6(VAR16, NULL, NULL);
        if (!VAR14)
        {
            fprintf(VAR17, "", VAR16);
            FUN5(1);
        }
        VAR16 = NULL;
    }
    else
    {
        VAR14 = FUN6(NULL, VAR1, NULL);
        if (!VAR14)
        {
            fprintf(VAR17, "", VAR1);
            FUN5(1);
        }
    }
    VAR3->VAR18 = VAR14;
    FUN7(VAR3->VAR1, VAR1, sizeof(VAR3->VAR1));
    if (!strcmp(VAR14->VAR19, "") && FUN8(VAR1, "", NULL))
    {
        int VAR4 = FUN9(VAR3, VAR1);
        if (VAR4 < 0)
        {
            FUN3(VAR1, VAR4);
            FUN5(1);
        }
    }
    else
    {
        VAR5 = VAR14->VAR20 != VAR21 || VAR22 || VAR23;
        VAR6 = VAR14->VAR24 != VAR21 || VAR25 || VAR26;
        VAR7 = VAR14->VAR27 != VAR21 || VAR28 || VAR29;
        if (VAR30 > 0)
        {
            FUN10(&VAR8, &VAR9, &VAR10);
            if (!VAR8)
                VAR5 = 0;
            if (!VAR9)
                VAR6 = 0;
            if (!VAR10)
                VAR7 = 0;
        }
        if (VAR31)
        {
            VAR6 = 0;
        }
        if (VAR32)
        {
            VAR5 = 0;
        }
        if (VAR33)
        {
            VAR7 = 0;
        }
        if (VAR5)
        {
            FUN11(VAR3);
        }
        if (VAR6)
        {
            FUN12(VAR3);
        }
        if (VAR7)
        {
            FUN13(VAR3);
        }
        VAR3->VAR34 = VAR35;
        for (; VAR36 > 0; VAR36--)
        {
            FUN14(&VAR3->VAR37, VAR37[VAR36 - 1].VAR38, VAR37[VAR36 - 1].VAR39, 0);
        }
        FUN15(VAR3, VAR3->VAR18->VAR40, NULL);
    }
    VAR41[VAR42++] = VAR3;
    if (VAR3->VAR18->VAR43 & VAR44)
    {
        if (!FUN16(VAR3->VAR1))
        {
            FUN3(VAR3->VAR1, VAR45);
            FUN5(1);
        }
    }
    if (!(VAR3->VAR18->VAR43 & VAR46))
    {
        if (!VAR47 && (strchr(VAR1, '') == NULL || VAR1[1] == '' || FUN8(VAR1, "", NULL)))
        {
            if (FUN17(VAR1))
            {
                if (!VAR48)
                {
                    fprintf(VAR17, "", VAR1);
                    FUN18(VAR17);
                    if (!FUN19())
                    {
                        fprintf(VAR17, "");
                        FUN5(1);
                    }
                }
                else
                {
                    fprintf(VAR17, "", VAR1);
                    FUN5(1);
                }
            }
        }
        if ((VAR4 = FUN20(&VAR3->VAR49, VAR1, VAR50)) < 0)
        {
            FUN3(VAR1, VAR4);
            FUN5(1);
        }
    }
    memset(VAR12, 0, sizeof(*VAR12));
    if (FUN21(VAR3, VAR12) < 0)
    {
        fprintf(VAR17, "", VAR3->VAR1);
        FUN5(1);
    }
    VAR3->VAR51 = (int)(VAR52 * VAR53);
    VAR3->VAR54 = (int)(VAR55 * VAR53);
    VAR3->VAR56 = VAR56;
    VAR3->VAR43 |= VAR57;
    FUN22(VAR3, VAR58, VAR59, NULL);
    VAR60 = 0;
}