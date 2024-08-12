static int FUN1(VAR1 *VAR2, VAR3 *VAR4, VAR5 *VAR6, VAR7 *VAR8)
{
    VAR9 *VAR10 = NULL;
    uint32_t VAR11, VAR12;
    int VAR13 = 0;
    int VAR14;
    for (;;)
    {
        VAR12 = FUN2(&VAR4->VAR15);
        if (VAR12 <= 0)
        {
            if (VAR16 && VAR2->VAR17 == VAR18 && VAR12 == 0)
            {
                if (!(VAR4->VAR19 & VAR20))
                    return 0;
                else
                    goto VAR21;
            }
            FUN3(VAR2, VAR22, "", VAR12);
            if (VAR4->VAR19 & VAR23 && VAR2->VAR24 <= VAR25)
                goto VAR21;
            VAR14 = VAR26;
            goto VAR27;
        }
        VAR12 = FUN4(&VAR4->VAR15);
        if (VAR12 > 0x7fffffff || VAR12 > FUN2(&VAR4->VAR15))
        {
            FUN3(VAR2, VAR22, "");
            VAR14 = VAR26;
            goto VAR27;
        }
        VAR11 = FUN5(&VAR4->VAR15);
        if (VAR2->VAR28 & VAR29)
            FUN3(VAR2, VAR30, "", (VAR11 & 0xff), ((VAR11 >> 8) & 0xff), ((VAR11 >> 16) & 0xff), ((VAR11 >> 24) & 0xff), VAR12);
        switch (VAR11)
        {
        case FUN6('', '', '', ''):
            if ((VAR14 = FUN7(VAR2, VAR4, VAR12)) < 0)
                goto VAR27;
            break;
        case FUN6('', '', '', ''):
            if ((VAR14 = FUN8(VAR2, VAR4)) < 0)
                goto VAR27;
            break;
        case FUN6('', '', '', ''):
            if (!VAR16 || VAR2->VAR17 != VAR18)
                goto VAR31;
            if ((VAR14 = FUN9(VAR2, VAR4, VAR12)) < 0)
                goto VAR27;
            VAR13 = 1;
            break;
        case FUN6('', '', '', ''):
            if (!VAR16 || VAR2->VAR17 != VAR18)
                goto VAR31;
            if (!VAR13)
            {
                VAR14 = VAR26;
                goto VAR27;
            }
            FUN4(&VAR4->VAR15);
            VAR12 -= 4;
        case FUN6('', '', '', ''):
            if (VAR16 && VAR2->VAR17 == VAR18 && !VAR13)
                goto VAR31;
            if ((VAR14 = FUN10(VAR2, VAR4, VAR12, VAR6)) < 0)
                goto VAR27;
            break;
        case FUN6('', '', '', ''):
            if (FUN11(VAR2, VAR4, VAR12) < 0)
                goto VAR31;
            break;
        case FUN6('', '', '', ''):
            if (FUN12(VAR2, VAR4, VAR12) < 0)
                goto VAR31;
            break;
        case FUN6('', '', '', ''):
            if (FUN13(VAR4, VAR12, 0, &VAR10) < 0)
                FUN3(VAR2, VAR32, "");
            FUN14(&VAR4->VAR15, VAR12 + 4);
            break;
        case FUN6('', '', '', ''):
            if (FUN13(VAR4, VAR12, 1, &VAR10) < 0)
                FUN3(VAR2, VAR32, "");
            FUN14(&VAR4->VAR15, VAR12 + 4);
            break;
        case FUN6('', '', '', ''):
            if (!(VAR4->VAR19 & VAR23))
                FUN3(VAR2, VAR22, "");
            if (!(VAR4->VAR19 & (VAR23 | VAR20)))
            {
                VAR14 = VAR26;
                goto VAR27;
            }
            FUN14(&VAR4->VAR15, 4);
            goto VAR21;
        default:
        VAR31:
            FUN14(&VAR4->VAR15, VAR12 + 4);
            break;
        }
    }
VAR21:
    if (VAR4->VAR33 <= 4)
        FUN15(VAR4, VAR6);
    if (VAR4->VAR34 && VAR4->VAR35 != VAR36)
    {
        size_t VAR37 = VAR4->VAR38 > 8 ? 2 : 1;
        size_t VAR39 = VAR4->VAR40 - VAR37;
        unsigned VAR41, VAR42;
        for (VAR42 = 0; VAR42 < VAR4->VAR43; ++VAR42)
        {
            VAR44 *VAR45 = &VAR4->VAR46[VAR4->VAR47 * VAR42];
            for (VAR41 = VAR4->VAR48; VAR41 > 0; --VAR41)
            {
                VAR44 *VAR49 = &VAR45[VAR4->VAR40 * (VAR41 - 1)];
                memmove(VAR49, &VAR45[VAR39 * (VAR41 - 1)], VAR39);
                if (!memcmp(VAR49, VAR4->VAR50, VAR39))
                {
                    memset(&VAR49[VAR39], 0, VAR37);
                }
                else
                {
                    memset(&VAR49[VAR39], 0xff, VAR37);
                }
            }
        }
    }
    if (VAR4->VAR51.VAR52->VAR53[0])
    {
        if (!(VAR8->VAR54 & VAR55) && VAR2->VAR56 != FUN16("") && VAR4->VAR51.VAR52->VAR48 == VAR6->VAR48 && VAR4->VAR51.VAR52->VAR43 == VAR6->VAR43 && VAR4->VAR51.VAR52->VAR57 == VAR6->VAR57)
        {
            if (VAR58 && VAR2->VAR17 != VAR18)
                FUN17(VAR4, VAR6);
            else if (VAR16 && VAR2->VAR17 == VAR18 && (VAR14 = FUN18(VAR2, VAR4, VAR6)) < 0)
                goto VAR27;
        }
    }
    FUN19(&VAR4->VAR59, VAR60, 0);
    FUN20(VAR6, VAR10);
    VAR10 = NULL;
    return 0;
VAR27:
    FUN21(&VAR10);
    FUN19(&VAR4->VAR59, VAR60, 0);
    return VAR14;