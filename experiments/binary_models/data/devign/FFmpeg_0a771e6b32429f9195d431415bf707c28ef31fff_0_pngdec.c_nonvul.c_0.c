static int FUN1(VAR1 *VAR2, VAR3 *VAR4, VAR5 *VAR6, VAR7 *VAR8)
{
    VAR9 **VAR10 = NULL;
    uint32_t VAR11, VAR12;
    int VAR13 = 0;
    int VAR14, VAR15;
    for (;;)
    {
        VAR12 = FUN2(&VAR4->VAR16);
        if (VAR12 <= 0)
        {
            if (VAR2->VAR17 == VAR18 && VAR2->VAR19 == VAR20)
            {
                return 0;
            }
            if (VAR21 && VAR2->VAR17 == VAR22 && VAR12 == 0)
            {
                if (!(VAR4->VAR23 & VAR24))
                    return 0;
                else
                    goto VAR25;
            }
            FUN3(VAR2, VAR26, "", VAR12);
            if (VAR4->VAR23 & VAR27 && VAR2->VAR28 <= VAR29)
                goto VAR25;
            VAR15 = VAR30;
            goto VAR31;
        }
        VAR12 = FUN4(&VAR4->VAR16);
        if (VAR12 > 0x7fffffff || VAR12 > FUN2(&VAR4->VAR16))
        {
            FUN3(VAR2, VAR26, "");
            VAR15 = VAR30;
            goto VAR31;
        }
        VAR11 = FUN5(&VAR4->VAR16);
        if (VAR2->VAR32 & VAR33)
            FUN3(VAR2, VAR34, "", FUN6(VAR11), VAR12);
        if (VAR2->VAR17 == VAR18 && VAR2->VAR19 == VAR20)
        {
            switch (VAR11)
            {
            case FUN7('', '', '', ''):
            case FUN7('', '', '', ''):
            case FUN7('', '', '', ''):
            case FUN7('', '', '', ''):
            case FUN7('', '', '', ''):
                break;
            default:
                goto VAR35;
            }
        }
        VAR10 = &VAR6->VAR36;
        switch (VAR11)
        {
        case FUN7('', '', '', ''):
            if ((VAR15 = FUN8(VAR2, VAR4, VAR12)) < 0)
                goto VAR31;
            break;
        case FUN7('', '', '', ''):
            if ((VAR15 = FUN9(VAR2, VAR4)) < 0)
                goto VAR31;
            break;
        case FUN7('', '', '', ''):
            if (!VAR21 || VAR2->VAR17 != VAR22)
                goto VAR35;
            if ((VAR15 = FUN10(VAR2, VAR4, VAR12)) < 0)
                goto VAR31;
            VAR13 = 1;
            break;
        case FUN7('', '', '', ''):
            if (!VAR21 || VAR2->VAR17 != VAR22)
                goto VAR35;
            if (!VAR13)
            {
                VAR15 = VAR30;
                goto VAR31;
            }
            FUN4(&VAR4->VAR16);
            VAR12 -= 4;
        case FUN7('', '', '', ''):
            if (VAR21 && VAR2->VAR17 == VAR22 && !VAR13)
                goto VAR35;
            if ((VAR15 = FUN11(VAR2, VAR4, VAR12, VAR6)) < 0)
                goto VAR31;
            break;
        case FUN7('', '', '', ''):
            if (FUN12(VAR2, VAR4, VAR12) < 0)
                goto VAR35;
            break;
        case FUN7('', '', '', ''):
            if (FUN13(VAR2, VAR4, VAR12) < 0)
                goto VAR35;
            break;
        case FUN7('', '', '', ''):
            if (FUN14(VAR4, VAR12, 0, VAR10) < 0)
                FUN3(VAR2, VAR37, "");
            FUN15(&VAR4->VAR16, VAR12 + 4);
            break;
        case FUN7('', '', '', ''):
            if (FUN14(VAR4, VAR12, 1, VAR10) < 0)
                FUN3(VAR2, VAR37, "");
            FUN15(&VAR4->VAR16, VAR12 + 4);
            break;
        case FUN7('', '', '', ''):
        {
            int VAR38 = FUN16(&VAR4->VAR16);
            VAR39 *VAR40 = FUN17(VAR6);
            if (!VAR40)
                goto VAR31;
            if (VAR38 == 0 || VAR38 == 1)
            {
                VAR40->VAR41 = VAR42;
                VAR40->VAR43 = VAR38 ? 0 : VAR44;
            }
            else
            {
                FUN3(VAR2, VAR37, "", VAR38);
            }
            FUN15(&VAR4->VAR16, 4);
            break;
        }
        case FUN7('', '', '', ''):
        {
            if (FUN18(VAR4, VAR12, VAR6) < 0)
                goto VAR31;
            break;
        }
        case FUN7('', '', '', ''):
        {
            VAR45 *VAR46 = FUN19(VAR6);
            if (!VAR46)
            {
                VAR15 = FUN20(VAR47);
                goto VAR31;
            }
            VAR46->VAR48[0] = FUN21(FUN4(&VAR4->VAR16), 100000);
            VAR46->VAR48[1] = FUN21(FUN4(&VAR4->VAR16), 100000);
            for (VAR14 = 0; VAR14 < 3; VAR14++)
            {
                VAR46->VAR49[VAR14][0] = FUN21(FUN4(&VAR4->VAR16), 100000);
                VAR46->VAR49[VAR14][1] = FUN21(FUN4(&VAR4->VAR16), 100000);
            }
            VAR46->VAR50 = 1;
            FUN15(&VAR4->VAR16, 4);
            break;
        }
        case FUN7('', '', '', ''):
        {
            AVBPrint VAR51;
            char *VAR52;
            int VAR53 = FUN4(&VAR4->VAR16);
            FUN22(&VAR51, 0, -1);
            FUN23(&VAR51, "", VAR53, 100000);
            FUN24(&VAR51, &VAR52);
            if (!VAR52)
                return FUN20(VAR47);
            FUN25(&VAR6->VAR36, "", VAR52, VAR54);
            FUN15(&VAR4->VAR16, 4);
            break;
        }
        case FUN7('', '', '', ''):
            if (!(VAR4->VAR23 & VAR27))
                FUN3(VAR2, VAR26, "");
            if (!(VAR4->VAR23 & (VAR27 | VAR24)))
            {
                VAR15 = VAR30;
                goto VAR31;
            }
            FUN15(&VAR4->VAR16, 4);
            goto VAR25;
        default:
        VAR35:
            FUN15(&VAR4->VAR16, VAR12 + 4);
            break;
        }
    }
VAR25:
    if (VAR2->VAR17 == VAR18 && VAR2->VAR19 == VAR20)
    {
        return 0;
    }
    if (VAR4->VAR55 <= 4)
        FUN26(VAR4, VAR6);
    if (VAR4->VAR56 && VAR4->VAR57 != VAR58)
    {
        size_t VAR59 = VAR4->VAR60 > 8 ? 2 : 1;
        size_t VAR61 = VAR4->VAR62 - VAR59;
        unsigned VAR63, VAR64;
        FUN27(VAR4->VAR60 > 1);
        for (VAR64 = 0; VAR64 < VAR4->VAR65; ++VAR64)
        {
            VAR66 *VAR67 = &VAR4->VAR68[VAR4->VAR69 * VAR64];
            for (VAR63 = VAR4->VAR70; VAR63 > 0; --VAR63)
            {
                VAR66 *VAR71 = &VAR67[VAR4->VAR62 * (VAR63 - 1)];
                memmove(VAR71, &VAR67[VAR61 * (VAR63 - 1)], VAR61);
                if (!memcmp(VAR71, VAR4->VAR72, VAR61))
                {
                    memset(&VAR71[VAR61], 0, VAR59);
                }
                else
                {
                    memset(&VAR71[VAR61], 0xff, VAR59);
                }
            }
        }
    }
    if (VAR4->VAR73.VAR74->VAR75[0])
    {
        if (!(VAR8->VAR43 & VAR76) && VAR2->VAR77 != FUN28("") && VAR4->VAR73.VAR74->VAR70 == VAR6->VAR70 && VAR4->VAR73.VAR74->VAR65 == VAR6->VAR65 && VAR4->VAR73.VAR74->VAR78 == VAR6->VAR78)
        {
            if (VAR79 && VAR2->VAR17 != VAR22)
                FUN29(VAR4, VAR6);
            else if (VAR21 && VAR2->VAR17 == VAR22 && (VAR15 = FUN30(VAR2, VAR4, VAR6)) < 0)
                goto VAR31;
        }
    }
    FUN31(&VAR4->VAR80, VAR81, 0);
    FUN31(&VAR4->VAR82, VAR81, 0);
    return 0;
VAR31:
    FUN31(&VAR4->VAR80, VAR81, 0);
    FUN31(&VAR4->VAR82, VAR81, 0);
    return VAR15;
}