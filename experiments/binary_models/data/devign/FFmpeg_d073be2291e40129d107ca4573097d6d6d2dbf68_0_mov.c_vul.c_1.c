static void FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    VAR5 *VAR6 = VAR4->VAR7;
    VAR8 *VAR9 = VAR4->VAR10;
    int VAR11 = VAR4->VAR12;
    const VAR8 *VAR13 = VAR9 + VAR11;
    const VAR8 *VAR14 = NULL;
    VAR15 *VAR16 = VAR6->VAR17;
    int64_t VAR18 = 0;
    int64_t VAR19 = 0;
    int64_t VAR20 = VAR6->VAR21;
    int64_t VAR22 = 0;
    int64_t VAR23 = 0;
    int64_t VAR24 = 0;
    int64_t VAR25 = 0;
    int64_t VAR26 = 0;
    int64_t VAR27 = 0;
    int64_t VAR28;
    int64_t VAR29 = 0;
    int64_t VAR30 = -1;
    int64_t VAR31 = 0;
    int64_t VAR32 = 0;
    int64_t VAR33;
    int VAR34;
    int64_t VAR35 = 0;
    int64_t VAR36 = 0;
    int64_t VAR37 = 0;
    VAR38 *VAR39 = NULL;
    int VAR40 = 0;
    int VAR41 = -1;
    int VAR42 = 0;
    VAR43 *VAR44;
    int VAR45;
    int VAR46 = 0;
    if (!VAR6->VAR47 || VAR6->VAR48 <= 0 || VAR11 <= 0)
    {
        return;
    }
    VAR6->VAR49 = FUN2((VAR6->VAR48 + 1) * sizeof(VAR6->VAR49[0]));
    if (!VAR6->VAR49)
    {
        FUN3(VAR2->VAR50, VAR51, "");
        return;
    }
    VAR6->VAR44 = VAR6->VAR49;
    VAR44 = VAR6->VAR49 - 1;
    VAR4->VAR10 = NULL;
    VAR4->VAR52 = 0;
    VAR4->VAR12 = 0;
    VAR6->VAR17 = NULL;
    VAR6->VAR21 = 0;
    VAR6->VAR53 = 0;
    VAR6->VAR54 = 0;
    VAR6->VAR55 = 0;
    if (VAR6->VAR56 > 0)
    {
        VAR26 -= VAR6->VAR56;
        FUN3(VAR2->VAR50, VAR57, "", VAR6->VAR56);
    }
    VAR35 = VAR26;
    while (FUN4(VAR2, VAR6, VAR32, &VAR22, &VAR23, VAR2->VAR58))
    {
        FUN3(VAR2->VAR50, VAR57, "" VAR59 "" VAR59 "" VAR59 "", VAR4->VAR33, VAR32, VAR22, VAR23);
        VAR32++;
        VAR25 = VAR26;
        VAR26 += VAR23;
        VAR40 = 0;
        if (VAR22 == -1)
        {
            VAR31 += VAR23;
            continue;
        }
        if (VAR4->VAR60->VAR61 == VAR62)
        {
            if (VAR41 < 0)
            {
                VAR41 = 1;
            }
            else
            {
                VAR41 = 0;
            }
            if (VAR41 > 0)
                VAR4->VAR63 = VAR6->VAR64 = 0;
        }
        VAR37 = VAR22;
        if (VAR4->VAR60->VAR61 == VAR62)
        {
            VAR37 = FUN5(VAR37 - VAR6->VAR58, VAR9[0].VAR65);
        }
        if (FUN6(VAR4, VAR9, VAR11, VAR16, VAR20, VAR37, 0, &VAR33, &VAR18, &VAR19) < 0)
        {
            FUN3(VAR2->VAR50, VAR66, "" VAR59 "" VAR59 "", VAR4->VAR33, VAR32, VAR37);
            if (FUN6(VAR4, VAR9, VAR11, VAR16, VAR20, VAR37, VAR67, &VAR33, &VAR18, &VAR19) < 0)
            {
                FUN3(VAR2->VAR50, VAR66, "" VAR59 "" VAR59 "", VAR4->VAR33, VAR32, VAR37);
                VAR33 = 0;
                VAR18 = 0;
                VAR19 = 0;
            }
        }
        VAR14 = VAR9 + VAR33;
        VAR27 = VAR19;
        VAR36 = 0;
        VAR46 = 0;
        for (; VAR14 < VAR13; VAR14++, VAR33++)
        {
            VAR24 = (VAR14 + 1 < VAR13) ? ((VAR14 + 1)->VAR65 - VAR14->VAR65) : VAR23;
            VAR34 = VAR14->VAR34;
            VAR28 = VAR14->VAR65 + VAR6->VAR56;
            VAR29 = 0;
            if (VAR16 && VAR18 < VAR20)
            {
                VAR29 = VAR16[VAR18].VAR68;
                FUN3(VAR2->VAR50, VAR57, "" VAR59 "" VAR59 "" VAR59 "" VAR59 "", VAR28, VAR29, VAR18, VAR20);
                VAR28 += VAR29;
                VAR19++;
                if (VAR19 == VAR16[VAR18].VAR69)
                {
                    if (FUN7(&VAR6->VAR17, &VAR6->VAR21, &VAR6->VAR55, VAR16[VAR18].VAR69 - VAR27, VAR16[VAR18].VAR68) == -1)
                    {
                        FUN3(VAR2->VAR50, VAR51, "" VAR59 "" VAR59 "", VAR18, VAR16[VAR18].VAR69 - VAR27, VAR16[VAR18].VAR68);
                        break;
                    }
                    VAR18++;
                    VAR19 = 0;
                    VAR27 = 0;
                }
            }
            if (VAR28 < VAR22 || VAR28 >= (VAR23 + VAR22))
            {
                if (VAR4->VAR60->VAR61 == VAR62 && VAR4->VAR60->VAR70 != VAR71 && VAR28 < VAR22 && VAR28 + VAR24 > VAR22 && VAR41 > 0)
                {
                    VAR42 = VAR22 - VAR28;
                    VAR4->VAR63 += VAR42;
                    VAR25 -= VAR42;
                    if (VAR36 == 0)
                    {
                        VAR36 = 1;
                        if (VAR39)
                        {
                            FUN8(VAR4, VAR4->VAR12, VAR25, VAR39, VAR40);
                        }
                    }
                    FUN3(VAR2->VAR50, VAR57, "" VAR59 "", VAR42, VAR28);
                }
                else
                {
                    VAR34 |= VAR72;
                    FUN3(VAR2->VAR50, VAR57, "" VAR59 "" VAR59 "", VAR28, VAR33);
                    if (VAR4->VAR60->VAR61 == VAR62 && VAR36 == 0)
                    {
                        VAR40++;
                        VAR39 = FUN9(VAR39, VAR40 * sizeof(VAR38));
                        if (!VAR39)
                        {
                            FUN3(VAR2->VAR50, VAR51, "");
                            break;
                        }
                        VAR39[VAR40 - 1] = VAR24;
                        if (VAR41 > 0 && VAR4->VAR60->VAR70 != VAR71)
                        {
                            VAR4->VAR63 += VAR24;
                        }
                    }
                }
            }
            else
            {
                if (VAR30 < 0)
                {
                    VAR30 = VAR25 + VAR29 + VAR6->VAR56;
                }
                else
                {
                    VAR30 = FUN10(VAR30, VAR25 + VAR29 + VAR6->VAR56);
                }
                if (VAR36 == 0)
                {
                    VAR36 = 1;
                    if (VAR4->VAR60->VAR61 == VAR62 && VAR39)
                    {
                        FUN8(VAR4, VAR4->VAR12, VAR25, VAR39, VAR40);
                    }
                }
            }
            if (FUN11(VAR4, VAR14->VAR73, VAR25, VAR14->VAR74, VAR14->VAR75, VAR34) == -1)
            {
                FUN3(VAR2->VAR50, VAR51, "");
                break;
            }
            if (VAR44 < VAR6->VAR49 || VAR33 != VAR44->VAR76)
            {
                VAR44++;
                VAR44->VAR77 = VAR33;
            }
            VAR44->VAR76 = VAR33 + 1;
            if (VAR36 > 0)
            {
                VAR25 = VAR25 + VAR24;
            }
            if ((VAR28 + VAR24 >= (VAR23 + VAR22)) && ((VAR34 & VAR78) || ((VAR4->VAR60->VAR61 == VAR62))))
            {
                if (VAR16)
                {
                    if (VAR4->VAR60->VAR61 != VAR62 && VAR46 == 0)
                    {
                        VAR46 = 1;
                        continue;
                    }
                    if (VAR19 != 0)
                    {
                        if (FUN7(&VAR6->VAR17, &VAR6->VAR21, &VAR6->VAR55, VAR19 - VAR27, VAR16[VAR18].VAR68) == -1)
                        {
                            FUN3(VAR2->VAR50, VAR51, "" VAR59 "" VAR59 "", VAR18, VAR19 - VAR27, VAR16[VAR18].VAR68);
                            break;
                        }
                    }
                }
                break;
            }
        }
    }
    VAR30 -= VAR31;
    if (VAR4->VAR60->VAR61 == VAR79 && VAR30 > 0)
    {
        FUN3(VAR2->VAR50, VAR57, "" VAR59 "", VAR30);
        for (VAR45 = 0; VAR45 < VAR4->VAR12; ++VAR45)
        {
            VAR4->VAR10[VAR45].VAR65 -= VAR30;
        }
    }
    VAR4->VAR68 = VAR26 - VAR35;
    VAR6->VAR64 = VAR4->VAR63;
    FUN12(VAR9);
    FUN12(VAR16);
    VAR44++;
    VAR44->VAR77 = 0;
    VAR44->VAR76 = 0;
    VAR6->VAR80 = VAR6->VAR49[0].VAR77;