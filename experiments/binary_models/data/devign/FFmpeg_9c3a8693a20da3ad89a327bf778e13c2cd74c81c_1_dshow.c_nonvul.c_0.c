FUN1(VAR1 *VAR2, enum dshowDeviceType VAR3, VAR4 *VAR5, int *VAR6)
{
    struct VAR7 *VAR8 = VAR2->VAR9;
    VAR10 *VAR11 = NULL;
    VAR12 *VAR13 = NULL;
    int VAR14 = 0;
    void *VAR15 = NULL;
    int VAR16, VAR17, VAR18;
    if (FUN2(VAR5, &VAR19, (void **)&VAR11) != VAR20)
        return;
    if (FUN3(VAR11, &VAR17, &VAR18) != VAR20)
        goto VAR21;
    VAR15 = FUN4(VAR18);
    if (!VAR15)
        goto VAR21;
    for (VAR16 = 0; VAR16 < VAR17 && !VAR14; VAR16++)
    {
        FUN5(VAR11, VAR16, &VAR13, (void *)VAR15);
        FUN6(VAR13);
        if (VAR3 == VAR22)
        {
            VAR23 *VAR24 = VAR15;
            VAR25 *VAR26;
            VAR27 *VAR28;
            const VAR29 *const VAR30[] = {FUN7(), NULL};
            FUN8(VAR24);
            if (FUN9(&VAR13->VAR31, &VAR32))
            {
                VAR33 *VAR34 = (void *)VAR13->VAR35;
                VAR28 = &VAR34->VAR36;
                VAR26 = &VAR34->VAR37;
            }
            else if (FUN9(&VAR13->VAR31, &VAR38))
            {
                VAR39 *VAR34 = (void *)VAR13->VAR35;
                VAR28 = &VAR34->VAR36;
                VAR26 = &VAR34->VAR37;
            }
            else
            {
                goto VAR40;
            }
            if (!VAR6)
            {
                enum AVPixelFormat VAR41 = FUN10(VAR26->VAR42, VAR26->VAR43);
                if (VAR41 == VAR44)
                {
                    enum AVCodecID VAR45 = FUN11(VAR30, VAR26->VAR42);
                    VAR46 *VAR47 = FUN12(VAR45);
                    if (VAR45 == VAR48 || !VAR47)
                    {
                        FUN13(VAR2, VAR49, "", (int)VAR26->VAR42);
                    }
                    else
                    {
                        FUN13(VAR2, VAR49, "", VAR47->VAR50);
                    }
                }
                else
                {
                    FUN13(VAR2, VAR49, "", FUN14(VAR41));
                }
                FUN13(VAR2, VAR49, "", VAR24->VAR51.VAR52, VAR24->VAR51.VAR53, 1e7 / VAR24->VAR54, VAR24->VAR55.VAR52, VAR24->VAR55.VAR53, 1e7 / VAR24->VAR56);
                continue;
            }
            if (VAR8->VAR57 != VAR58)
            {
                if (VAR8->VAR57 != FUN11(VAR30, VAR26->VAR42))
                    goto VAR40;
            }
            if (VAR8->VAR59 != VAR44 && VAR8->VAR59 != FUN10(VAR26->VAR42, VAR26->VAR43))
            {
                goto VAR40;
            }
            if (VAR8->VAR60)
            {
                int64_t VAR60 = ((VAR27)VAR8->VAR61.VAR62 * 10000000) / VAR8->VAR61.VAR63;
                if (VAR60 > VAR24->VAR54 || VAR60 < VAR24->VAR56)
                    goto VAR40;
                *VAR28 = VAR60;
            }
            if (VAR8->VAR64 && VAR8->VAR65)
            {
                if (VAR8->VAR64 > VAR24->VAR55.VAR52 || VAR8->VAR64 < VAR24->VAR51.VAR52 || VAR8->VAR65 > VAR24->VAR55.VAR53 || VAR8->VAR65 < VAR24->VAR51.VAR53)
                    goto VAR40;
                VAR26->VAR66 = VAR8->VAR64;
                VAR26->VAR67 = VAR8->VAR65;
            }
        }
        else
        {
            VAR68 *VAR69 = VAR15;
            VAR70 *VAR71;
            FUN15(VAR69);
            if (FUN9(&VAR13->VAR31, &VAR72))
            {
                VAR71 = (void *)VAR13->VAR35;
            }
            else
            {
                goto VAR40;
            }
            if (!VAR6)
            {
                FUN13(VAR2, VAR49, "", VAR69->VAR73, VAR69->VAR74, VAR69->VAR75, VAR69->VAR76, VAR69->VAR77, VAR69->VAR78);
                continue;
            }
            if (VAR8->VAR79)
            {
                if (VAR8->VAR79 > VAR69->VAR78 || VAR8->VAR79 < VAR69->VAR75)
                    goto VAR40;
                VAR71->VAR80 = VAR8->VAR79;
            }
            if (VAR8->VAR81)
            {
                if (VAR8->VAR81 > VAR69->VAR77 || VAR8->VAR81 < VAR69->VAR74)
                    goto VAR40;
                VAR71->VAR82 = VAR8->VAR81;
            }
            if (VAR8->VAR83)
            {
                if (VAR8->VAR83 > VAR69->VAR76 || VAR8->VAR83 < VAR69->VAR73)
                    goto VAR40;
                VAR71->VAR84 = VAR8->VAR83;
            }
        }
        if (FUN16(VAR11, VAR13) != VAR20)
            goto VAR40;
        VAR14 = 1;
    VAR40:
        if (VAR13->VAR35)
            FUN17(VAR13->VAR35);
        FUN17(VAR13);
    }
VAR21:
    FUN18(VAR11);
    FUN19(VAR15);
    if (VAR6)
        *VAR6 = VAR14;
}