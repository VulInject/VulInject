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
    int64_t VAR34;
    int VAR35;
    unsigned int VAR36 = 0;
    int64_t VAR37 = 0;
    int64_t VAR38 = 0;
    int64_t VAR39 = 0;
    int64_t VAR40 = 0;
    VAR41 *VAR42 = NULL;
    int VAR43 = 0;
    int VAR44 = -1;
    int VAR45 = 0;
    VAR46 *VAR47;
    int VAR48;
    if (!VAR6->VAR49 || VAR6->VAR50 <= 0 || VAR11 <= 0)
    {
        return;
    }
    VAR6->VAR51 = FUN2((VAR6->VAR50 + 1) * sizeof(VAR6->VAR51[0]));
    if (!VAR6->VAR51)
    {
        FUN3(VAR2->VAR52, VAR53, "");
        return;
    }
    VAR6->VAR47 = VAR6->VAR51;
    VAR47 = VAR6->VAR51 - 1;
    VAR4->VAR10 = NULL;
    VAR4->VAR54 = 0;
    VAR4->VAR12 = 0;
    VAR6->VAR17 = NULL;
    VAR6->VAR21 = 0;
    VAR6->VAR55 = 0;
    VAR6->VAR56 = 0;
    if (VAR6->VAR57 > 0)
    {
        VAR26 -= VAR6->VAR57;
        FUN3(VAR2->VAR52, VAR58, "", VAR6->VAR57);
    }
    VAR37 = VAR26;
    while (FUN4(VAR2, VAR6, VAR32, &VAR22, &VAR23, VAR2->VAR59))
    {
        FUN3(VAR2->VAR52, VAR58, "" VAR60 "" VAR60 "" VAR60 "", VAR4->VAR33, VAR32, VAR22, VAR23);
        VAR32++;
        VAR25 = VAR26;
        VAR26 += VAR23;
        VAR43 = 0;
        if (VAR22 == -1)
        {
            VAR31 += VAR23;
            continue;
        }
        if (VAR4->VAR61->VAR62 == VAR63)
        {
            if (VAR44 < 0)
            {
                VAR44 = 1;
            }
            else
            {
                VAR44 = 0;
            }
            if (VAR44 > 0)
                VAR4->VAR64 = VAR6->VAR65 = 0;
        }
        VAR38 = VAR22;
        if (VAR6->VAR57 > 0)
        {
            VAR38 -= VAR6->VAR57;
        }
        VAR40 = VAR38;
        if (VAR4->VAR61->VAR62 == VAR63)
        {
            VAR40 = FUN5(VAR40 - VAR6->VAR59, VAR9[0].VAR66);
        }
        VAR33 = FUN6(VAR4, VAR9, VAR11, VAR40, 0);
        if (VAR33 == -1)
        {
            FUN3(VAR2->VAR52, VAR67, "" VAR60 "" VAR60 "", VAR4->VAR33, VAR32, VAR40);
            VAR33 = FUN6(VAR4, VAR9, VAR11, VAR40, VAR68);
            if (VAR33 == -1)
            {
                FUN3(VAR2->VAR52, VAR67, "" VAR60 "" VAR60 ""
                                                "",
                       VAR4->VAR33, VAR32, VAR40);
                VAR33 = 0;
                VAR22 = 0;
            }
        }
        VAR14 = VAR9 + VAR33;
        VAR18 = 0;
        VAR19 = 0;
        for (VAR34 = 0; VAR34 < VAR33; VAR34++)
        {
            if (VAR16 && VAR18 < VAR20)
            {
                VAR19++;
                if (VAR16[VAR18].VAR69 == VAR19)
                {
                    VAR18++;
                    VAR19 = 0;
                }
            }
        }
        VAR27 = VAR19;
        VAR39 = 0;
        for (; VAR14 < VAR13; VAR14++, VAR33++)
        {
            VAR24 = (VAR14 + 1 < VAR13) ? ((VAR14 + 1)->VAR66 - VAR14->VAR66) : VAR23;
            VAR35 = VAR14->VAR35;
            VAR28 = VAR14->VAR66 + VAR6->VAR57;
            VAR29 = 0;
            if (VAR16 && VAR18 < VAR20)
            {
                VAR29 = VAR16[VAR18].VAR70;
                FUN3(VAR2->VAR52, VAR58, "" VAR60 "" VAR60 "" VAR60 "" VAR60 "", VAR28, VAR29, VAR18, VAR20);
                VAR28 += VAR29;
                VAR19++;
                if (VAR19 == VAR16[VAR18].VAR69)
                {
                    if (FUN7(&VAR6->VAR17, &VAR6->VAR21, &VAR36, VAR16[VAR18].VAR69 - VAR27, VAR16[VAR18].VAR70) == -1)
                    {
                        FUN3(VAR2->VAR52, VAR53, "" VAR60 "" VAR60 "", VAR18, VAR16[VAR18].VAR69 - VAR27, VAR16[VAR18].VAR70);
                        break;
                    }
                    VAR18++;
                    VAR19 = 0;
                    VAR27 = 0;
                }
            }
            if (VAR28 < VAR22 || VAR28 >= (VAR23 + VAR22))
            {
                if (VAR4->VAR61->VAR62 == VAR63 && VAR4->VAR61->VAR71 != VAR72 && VAR28 < VAR22 && VAR28 + VAR24 > VAR22 && VAR44 > 0)
                {
                    VAR45 = VAR22 - VAR28;
                    VAR4->VAR64 += VAR45;
                    VAR25 -= VAR45;
                    if (VAR39 == 0)
                    {
                        VAR39 = 1;
                        if (VAR42)
                        {
                            FUN8(VAR4, VAR4->VAR12, VAR25, VAR42, VAR43);
                            FUN9(&VAR42);
                        }
                    }
                    FUN3(VAR2->VAR52, VAR58, "" VAR60 "", VAR45, VAR28);
                }
                else
                {
                    VAR35 |= VAR73;
                    FUN3(VAR2->VAR52, VAR58, "" VAR60 "" VAR60 "", VAR28, VAR33);
                    if (VAR4->VAR61->VAR62 == VAR63 && VAR39 == 0)
                    {
                        VAR43++;
                        VAR42 = FUN10(VAR42, VAR43 * sizeof(VAR41));
                        if (!VAR42)
                        {
                            FUN3(VAR2->VAR52, VAR53, "");
                            break;
                        }
                        VAR42[VAR43 - 1] = VAR24;
                        if (VAR44 > 0 && VAR4->VAR61->VAR71 != VAR72)
                        {
                            VAR4->VAR64 += VAR24;
                            VAR6->VAR65 = VAR4->VAR64;
                        }
                    }
                }
            }
            else
            {
                if (VAR30 < 0)
                {
                    VAR30 = VAR25 + VAR29 + VAR6->VAR57;
                }
                else
                {
                    VAR30 = FUN11(VAR30, VAR25 + VAR29 + VAR6->VAR57);
                }
                if (VAR39 == 0)
                {
                    VAR39 = 1;
                    if (VAR4->VAR61->VAR62 == VAR63 && VAR42)
                    {
                        FUN8(VAR4, VAR4->VAR12, VAR25, VAR42, VAR43);
                        FUN9(&VAR42);
                    }
                }
            }
            if (FUN12(VAR4, VAR14->VAR74, VAR25, VAR14->VAR75, VAR14->VAR76, VAR35) == -1)
            {
                FUN3(VAR2->VAR52, VAR53, "");
                break;
            }
            if (VAR47 < VAR6->VAR51 || VAR33 != VAR47->VAR77)
            {
                VAR47++;
                VAR47->VAR78 = VAR33;
            }
            VAR47->VAR77 = VAR33 + 1;
            if (VAR39 > 0)
            {
                VAR25 = VAR25 + VAR24;
            }
            if (((VAR28 + VAR24) >= (VAR23 + VAR22)) && ((VAR35 & VAR79) || ((VAR4->VAR61->VAR62 == VAR63))))
            {
                if (VAR16 && VAR19 != 0)
                {
                    if (FUN7(&VAR6->VAR17, &VAR6->VAR21, &VAR36, VAR19 - VAR27, VAR16[VAR18].VAR70) == -1)
                    {
                        FUN3(VAR2->VAR52, VAR53, "" VAR60 "" VAR60 "", VAR18, VAR19 - VAR27, VAR16[VAR18].VAR70);
                        break;
                    }
                }
                break;
            }
        }
    }
    VAR30 -= VAR31;
    if (VAR4->VAR61->VAR62 == VAR80 && VAR30 > 0)
    {
        FUN3(VAR2->VAR52, VAR58, "" VAR60 "", VAR30);
        for (VAR48 = 0; VAR48 < VAR4->VAR12; ++VAR48)
        {
            VAR4->VAR10[VAR48].VAR66 -= VAR30;
        }
    }
    VAR4->VAR70 = VAR26 - VAR37;
    FUN13(VAR9);
    FUN13(VAR16);
    VAR47++;
    VAR47->VAR78 = 0;
    VAR47->VAR77 = 0;
    VAR6->VAR81 = VAR6->VAR51[0].VAR78;
}