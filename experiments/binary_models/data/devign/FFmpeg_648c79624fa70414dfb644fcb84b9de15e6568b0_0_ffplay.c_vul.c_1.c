static int FUN1(void *VAR1)
{
    VAR2 *VAR3 = VAR1;
    VAR4 *VAR5;
    int VAR6, VAR7, VAR8;
    int VAR9[VAR10];
    AVPacket VAR11, *VAR12 = &VAR11;
    AVFormatParameters VAR13, *VAR14 = &VAR13;
    int VAR15 = 0;
    int VAR16 = 0;
    VAR5 = FUN2();
    memset(VAR9, -1, sizeof(VAR9));
    VAR3->VAR17 = -1;
    VAR3->VAR18 = -1;
    VAR3->VAR19 = -1;
    VAR20 = VAR3;
    FUN3(VAR21);
    memset(VAR14, 0, sizeof(*VAR14));
    VAR14->VAR22 = 1;
    VAR14->VAR23 = VAR24;
    VAR14->VAR25 = VAR26;
    VAR14->VAR27 = (VAR28){1, 25};
    VAR14->VAR29 = VAR30;
    FUN4(VAR5, VAR31, VAR32, NULL);
    VAR6 = FUN5(&VAR5, VAR3->VAR33, VAR3->VAR34, 0, VAR14);
    if (VAR6 < 0)
    {
        FUN6(VAR3->VAR33, VAR6);
        VAR8 = -1;
        goto VAR35;
    }
    VAR3->VAR5 = VAR5;
    if (VAR36)
        VAR5->VAR37 |= VAR38;
    VAR6 = FUN7(VAR5);
    if (VAR6 < 0)
    {
        fprintf(VAR39, "", VAR3->VAR33);
        VAR8 = -1;
        goto VAR35;
    }
    if (VAR5->VAR40)
        VAR5->VAR40->VAR41 = 0;
    if (VAR42 < 0)
        VAR42 = !!(VAR5->VAR34->VAR37 & VAR43);
    if (VAR44 != VAR45)
    {
        int64_t VAR46;
        VAR46 = VAR44;
        if (VAR5->VAR44 != VAR45)
            VAR46 += VAR5->VAR44;
        VAR8 = FUN8(VAR5, -1, VAR47, VAR46, VAR48, 0);
        if (VAR8 < 0)
        {
            fprintf(VAR39, "", VAR3->VAR33, (double)VAR46 / VAR49);
        }
    }
    for (VAR7 = 0; VAR7 < VAR5->VAR50; VAR7++)
        VAR5->VAR51[VAR7]->VAR52 = VAR53;
    if (!VAR54)
        VAR9[VAR55] = FUN9(VAR5, VAR55, VAR56[VAR55], -1, NULL, 0);
    if (!VAR57)
        VAR9[VAR58] = FUN9(VAR5, VAR58, VAR56[VAR58], VAR9[VAR55], NULL, 0);
    if (!VAR54)
        VAR9[VAR59] = FUN9(VAR5, VAR59, VAR56[VAR59], (VAR9[VAR58] >= 0 ? VAR9[VAR58] : VAR9[VAR55]), NULL, 0);
    if (VAR60)
    {
        FUN10(VAR5, 0, VAR3->VAR33, 0);
    }
    if (VAR9[VAR58] >= 0)
    {
        FUN11(VAR3, VAR9[VAR58]);
    }
    VAR8 = -1;
    if (VAR9[VAR55] >= 0)
    {
        VAR8 = FUN11(VAR3, VAR9[VAR55]);
    }
    VAR3->VAR61 = FUN12(VAR62, VAR3);
    if (VAR8 < 0)
    {
        if (!VAR63)
            VAR3->VAR64 = 2;
    }
    if (VAR9[VAR59] >= 0)
    {
        FUN11(VAR3, VAR9[VAR59]);
    }
    if (VAR3->VAR17 < 0 && VAR3->VAR18 < 0)
    {
        fprintf(VAR39, "", VAR3->VAR33);
        VAR8 = -1;
        goto VAR35;
    }
    for (;;)
    {
        if (VAR3->VAR65)
            break;
        if (VAR3->VAR66 != VAR3->VAR67)
        {
            VAR3->VAR67 = VAR3->VAR66;
            if (VAR3->VAR66)
                VAR3->VAR68 = FUN13(VAR5);
            else
                FUN14(VAR5);
        }
        if (VAR3->VAR66 && !strcmp(VAR5->VAR34->VAR69, ""))
        {
            FUN15(10);
            continue;
        }
        if (VAR3->VAR70)
        {
            int64_t VAR71 = VAR3->VAR72;
            int64_t VAR73 = VAR3->VAR74 > 0 ? VAR71 - VAR3->VAR74 + 2 : VAR47;
            int64_t VAR75 = VAR3->VAR74 < 0 ? VAR71 - VAR3->VAR74 - 2 : VAR48;
            VAR8 = FUN8(VAR3->VAR5, -1, VAR73, VAR71, VAR75, VAR3->VAR76);
            if (VAR8 < 0)
            {
                fprintf(VAR39, "", VAR3->VAR5->VAR33);
            }
            else
            {
                if (VAR3->VAR18 >= 0)
                {
                    FUN16(&VAR3->VAR77);
                    FUN17(&VAR3->VAR77, &VAR78);
                }
                if (VAR3->VAR19 >= 0)
                {
                    FUN16(&VAR3->VAR79);
                    FUN17(&VAR3->VAR79, &VAR78);
                }
                if (VAR3->VAR17 >= 0)
                {
                    FUN16(&VAR3->VAR80);
                    FUN17(&VAR3->VAR80, &VAR78);
                }
            }
            VAR3->VAR70 = 0;
            VAR15 = 0;
        }
        if (VAR3->VAR77.VAR81 + VAR3->VAR80.VAR81 + VAR3->VAR79.VAR81 > VAR82 || ((VAR3->VAR77.VAR81 > VAR83 || VAR3->VAR18 < 0) && (VAR3->VAR80.VAR84 > VAR85 || VAR3->VAR17 < 0) && (VAR3->VAR79.VAR84 > VAR85 || VAR3->VAR19 < 0)))
        {
            FUN15(10);
            continue;
        }
        if (VAR15)
        {
            if (VAR3->VAR17 >= 0)
            {
                FUN18(VAR12);
                VAR12->VAR86 = NULL;
                VAR12->VAR81 = 0;
                VAR12->VAR87 = VAR3->VAR17;
                FUN17(&VAR3->VAR80, VAR12);
            }
            FUN15(10);
            if (VAR3->VAR77.VAR81 + VAR3->VAR80.VAR81 + VAR3->VAR79.VAR81 == 0)
            {
                if (VAR88 != 1 && (!VAR88 || --VAR88))
                {
                    FUN19(VAR89, VAR44 != VAR45 ? VAR44 : 0, 0, 0);
                }
                else if (VAR90)
                {
                    VAR8 = VAR91;
                    goto VAR35;
                }
            }
            continue;
        }
        VAR8 = FUN20(VAR5, VAR12);
        if (VAR8 < 0)
        {
            if (VAR8 == VAR91 || VAR5->VAR40->VAR41)
                VAR15 = 1;
            if (VAR5->VAR40->VAR92)
                break;
            FUN15(100);
            continue;
        }
        VAR16 = VAR93 == VAR45 || (VAR12->VAR94 - VAR5->VAR51[VAR12->VAR87]->VAR44) * FUN21(VAR5->VAR51[VAR12->VAR87]->VAR27) - (double)(VAR44 != VAR45 ? VAR44 : 0) / 1000000 <= ((double)VAR93 / 1000000);
        if (VAR12->VAR87 == VAR3->VAR18 && VAR16)
        {
            FUN17(&VAR3->VAR77, VAR12);
        }
        else if (VAR12->VAR87 == VAR3->VAR17 && VAR16)
        {
            FUN17(&VAR3->VAR80, VAR12);
        }
        else if (VAR12->VAR87 == VAR3->VAR19 && VAR16)
        {
            FUN17(&VAR3->VAR79, VAR12);
        }
        else
        {
            FUN22(VAR12);
        }
    }
    while (!VAR3->VAR65)
    {
        FUN15(100);
    }
    VAR8 = 0;
VAR35:
    VAR20 = NULL;
    if (VAR3->VAR18 >= 0)
        FUN23(VAR3, VAR3->VAR18);
    if (VAR3->VAR17 >= 0)
        FUN23(VAR3, VAR3->VAR17);
    if (VAR3->VAR19 >= 0)
        FUN23(VAR3, VAR3->VAR19);
    if (VAR3->VAR5)
    {
        FUN24(VAR3->VAR5);
        VAR3->VAR5 = NULL;
    }
    FUN3(NULL);
    if (VAR8 != 0)
    {
        SDL_Event VAR95;
        VAR95.VAR96 = VAR97;
        VAR95.VAR98.VAR99 = VAR3;
        FUN25(&VAR95);
    }
    return 0;
}