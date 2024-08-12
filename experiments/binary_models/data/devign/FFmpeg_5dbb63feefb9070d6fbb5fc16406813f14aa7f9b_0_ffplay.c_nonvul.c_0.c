static int FUN1(void *VAR1)
{
    VAR2 *VAR3 = VAR1;
    VAR4 *VAR5;
    int VAR6, VAR7, VAR8, VAR9, VAR10, VAR11;
    AVPacket VAR12, *VAR13 = &VAR12;
    AVFormatParameters VAR14, *VAR15 = &VAR14;
    VAR9 = -1;
    VAR10 = -1;
    VAR11 = -1;
    VAR3->VAR16 = -1;
    VAR3->VAR17 = -1;
    VAR3->VAR18 = -1;
    VAR19 = VAR3;
    FUN2(VAR20);
    memset(VAR15, 0, sizeof(*VAR15));
    VAR15->VAR21 = VAR22;
    VAR15->VAR23 = VAR24;
    VAR15->VAR25 = (VAR26){1, 25};
    VAR15->VAR27 = VAR28;
    VAR6 = FUN3(&VAR5, VAR3->VAR29, VAR3->VAR30, 0, VAR15);
    if (VAR6 < 0)
    {
        FUN4(VAR3->VAR29, VAR6);
        VAR8 = -1;
        goto VAR31;
    }
    VAR3->VAR5 = VAR5;
    if (VAR32)
        VAR5->VAR33 |= VAR34;
    VAR6 = FUN5(VAR5);
    if (VAR6 < 0)
    {
        fprintf(VAR35, "", VAR3->VAR29);
        VAR8 = -1;
        goto VAR31;
    }
    if (VAR5->VAR36)
        VAR5->VAR36->VAR37 = 0;
    if (VAR38 != VAR39)
    {
        int64_t VAR40;
        VAR40 = VAR38;
        if (VAR5->VAR38 != VAR39)
            VAR40 += VAR5->VAR38;
        VAR8 = FUN6(VAR5, -1, VAR40, VAR41);
        if (VAR8 < 0)
        {
            fprintf(VAR35, "", VAR3->VAR29, (double)VAR40 / VAR42);
        }
    }
    for (VAR7 = 0; VAR7 < VAR5->VAR43; VAR7++)
    {
        VAR44 *VAR45 = VAR5->VAR46[VAR7]->VAR47;
        VAR5->VAR46[VAR7]->VAR48 = VAR49;
        switch (VAR45->VAR50)
        {
        case VAR51:
            if (VAR52-- >= 0 && !VAR53)
                VAR10 = VAR7;
            break;
        case VAR54:
            if (VAR55-- >= 0 && !VAR56)
                VAR9 = VAR7;
            break;
        case VAR57:
            if (VAR58-- >= 0 && !VAR56)
                VAR11 = VAR7;
            break;
        default:
            break;
        }
    }
    if (VAR59)
    {
        FUN7(VAR5, 0, VAR3->VAR29, 0);
        FUN8(VAR5);
    }
    if (VAR10 >= 0)
    {
        FUN9(VAR3, VAR10);
    }
    if (VAR9 >= 0)
    {
        FUN9(VAR3, VAR9);
    }
    else
    {
        if (!VAR60)
            VAR3->VAR61 = 1;
    }
    if (VAR11 >= 0)
    {
        FUN9(VAR3, VAR11);
    }
    if (VAR3->VAR16 < 0 && VAR3->VAR17 < 0)
    {
        fprintf(VAR35, "", VAR3->VAR29);
        VAR8 = -1;
        goto VAR31;
    }
    for (;;)
    {
        if (VAR3->VAR62)
            break;
        if (VAR3->VAR63 != VAR3->VAR64)
        {
            VAR3->VAR64 = VAR3->VAR63;
            if (VAR3->VAR63)
                FUN10(VAR5);
            else
                FUN11(VAR5);
        }
        if (VAR3->VAR63 && !strcmp(VAR5->VAR30->VAR65, ""))
        {
            FUN12(10);
            continue;
        }
        if (VAR3->VAR66)
        {
            int VAR67 = -1;
            int64_t VAR68 = VAR3->VAR69;
            if (VAR3->VAR16 >= 0)
                VAR67 = VAR3->VAR16;
            else if (VAR3->VAR17 >= 0)
                VAR67 = VAR3->VAR17;
            else if (VAR3->VAR18 >= 0)
                VAR67 = VAR3->VAR18;
            if (VAR67 >= 0)
            {
                VAR68 = FUN13(VAR68, VAR70, VAR5->VAR46[VAR67]->VAR25);
            }
            VAR8 = FUN6(VAR3->VAR5, VAR67, VAR68, VAR3->VAR71);
            if (VAR8 < 0)
            {
                fprintf(VAR35, "", VAR3->VAR5->VAR29);
            }
            else
            {
                if (VAR3->VAR17 >= 0)
                {
                    FUN14(&VAR3->VAR72);
                    FUN15(&VAR3->VAR72, &VAR73);
                }
                if (VAR3->VAR18 >= 0)
                {
                    FUN14(&VAR3->VAR74);
                    FUN15(&VAR3->VAR74, &VAR73);
                }
                if (VAR3->VAR16 >= 0)
                {
                    FUN14(&VAR3->VAR75);
                    FUN15(&VAR3->VAR75, &VAR73);
                }
            }
            VAR3->VAR66 = 0;
        }
        if (VAR3->VAR72.VAR76 > VAR77 || VAR3->VAR75.VAR76 > VAR78 || VAR3->VAR74.VAR76 > VAR79)
        {
            FUN12(10);
            continue;
        }
        if (FUN16(VAR5->VAR36))
        {
            FUN17(VAR13);
            VAR13->VAR80 = NULL;
            VAR13->VAR76 = 0;
            VAR13->VAR67 = VAR3->VAR16;
            FUN15(&VAR3->VAR75, VAR13);
            continue;
        }
        VAR8 = FUN18(VAR5, VAR13);
        if (VAR8 < 0)
        {
            if (VAR8 != VAR81 && FUN19(VAR5->VAR36) == 0)
            {
                FUN12(100);
                continue;
            }
            else
                break;
        }
        if (VAR13->VAR67 == VAR3->VAR17)
        {
            FUN15(&VAR3->VAR72, VAR13);
        }
        else if (VAR13->VAR67 == VAR3->VAR16)
        {
            FUN15(&VAR3->VAR75, VAR13);
        }
        else if (VAR13->VAR67 == VAR3->VAR18)
        {
            FUN15(&VAR3->VAR74, VAR13);
        }
        else
        {
            FUN20(VAR13);
        }
    }
    while (!VAR3->VAR62)
    {
        FUN12(100);
    }
    VAR8 = 0;
VAR31:
    VAR19 = NULL;
    if (VAR3->VAR17 >= 0)
        FUN21(VAR3, VAR3->VAR17);
    if (VAR3->VAR16 >= 0)
        FUN21(VAR3, VAR3->VAR16);
    if (VAR3->VAR18 >= 0)
        FUN21(VAR3, VAR3->VAR18);
    if (VAR3->VAR5)
    {
        FUN22(VAR3->VAR5);
        VAR3->VAR5 = NULL;
    }
    FUN2(NULL);
    if (VAR8 != 0)
    {
        SDL_Event VAR82;
        VAR82.VAR83 = VAR84;
        VAR82.VAR85.VAR86 = VAR3;
        FUN23(&VAR82);
    }
    return 0;
}