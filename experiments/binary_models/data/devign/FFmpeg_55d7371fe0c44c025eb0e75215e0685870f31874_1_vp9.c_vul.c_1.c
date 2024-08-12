static int FUN1(VAR1 *VAR2, void *VAR3, int *VAR4, VAR5 *VAR6)
{
    const VAR7 *VAR8 = VAR6->VAR8;
    int VAR9 = VAR6->VAR9;
    VAR10 *VAR11 = VAR2->VAR12;
    int VAR13, VAR14, VAR15, VAR16, VAR17, VAR18, VAR19;
    int VAR20 = VAR11->VAR11.VAR21[VAR22].VAR23 && (!VAR11->VAR11.VAR24.VAR25.VAR26 || !VAR11->VAR11.VAR24.VAR25.VAR27);
    ptrdiff_t VAR28, VAR29, VAR30, VAR31;
    VAR32 *VAR33;
    int VAR34;
    if ((VAR13 = FUN2(VAR2, VAR8, VAR9, &VAR17)) < 0)
    {
        return VAR13;
    }
    else if (VAR13 == 0)
    {
        if (!VAR11->VAR11.VAR35[VAR17].VAR33->VAR36[0])
        {
            FUN3(VAR2, VAR37, "", VAR17);
            return VAR38;
        }
        if ((VAR13 = FUN4(VAR3, VAR11->VAR11.VAR35[VAR17].VAR33)) < 0)
            return VAR13;
        ((VAR32 *)VAR3)->VAR39 = VAR6->VAR39;
        FUN5((VAR32 *)VAR3)->VAR40 = VAR6->VAR39;
        FUN6((VAR32 *)VAR3)->VAR41 = VAR6->VAR42;
        for (VAR16 = 0; VAR16 < 8; VAR16++)
        {
            if (VAR11->VAR43[VAR16].VAR33->VAR36[0])
                FUN7(VAR2, &VAR11->VAR43[VAR16]);
            if (VAR11->VAR11.VAR35[VAR16].VAR33->VAR36[0] && (VAR13 = FUN8(&VAR11->VAR43[VAR16], &VAR11->VAR11.VAR35[VAR16])) < 0)
                return VAR13;
        }
        *VAR4 = 1;
        return VAR6->VAR9;
    }
    VAR8 += VAR13;
    VAR9 -= VAR13;
    if (!VAR20 || VAR11->VAR11.VAR24.VAR44 || VAR11->VAR11.VAR24.VAR45)
    {
        if (VAR11->VAR11.VAR21[VAR22].VAR46.VAR33->VAR36[0])
            FUN9(VAR2, &VAR11->VAR11.VAR21[VAR22]);
        if (!VAR11->VAR11.VAR24.VAR44 && !VAR11->VAR11.VAR24.VAR45 && !VAR11->VAR11.VAR24.VAR47 && VAR11->VAR11.VAR21[VAR48].VAR46.VAR33->VAR36[0] && (VAR13 = FUN10(VAR2, &VAR11->VAR11.VAR21[VAR22], &VAR11->VAR11.VAR21[VAR48])) < 0)
            return VAR13;
    }
    if (VAR11->VAR11.VAR21[VAR49].VAR46.VAR33->VAR36[0])
        FUN9(VAR2, &VAR11->VAR11.VAR21[VAR49]);
    if (!VAR11->VAR11.VAR24.VAR45 && !VAR11->VAR11.VAR24.VAR44 && !VAR11->VAR11.VAR24.VAR47 && VAR11->VAR11.VAR21[VAR48].VAR46.VAR33->VAR36[0] && (VAR13 = FUN10(VAR2, &VAR11->VAR11.VAR21[VAR49], &VAR11->VAR11.VAR21[VAR48])) < 0)
        return VAR13;
    if (VAR11->VAR11.VAR21[VAR48].VAR46.VAR33->VAR36[0])
        FUN9(VAR2, &VAR11->VAR11.VAR21[VAR48]);
    if ((VAR13 = FUN11(VAR2, &VAR11->VAR11.VAR21[VAR48])) < 0)
        return VAR13;
    VAR33 = VAR11->VAR11.VAR21[VAR48].VAR46.VAR33;
    VAR33->VAR50 = VAR11->VAR11.VAR24.VAR44;
    VAR33->VAR51 = (VAR11->VAR11.VAR24.VAR44 || VAR11->VAR11.VAR24.VAR45) ? VAR52 : VAR53;
    VAR30 = VAR33->VAR54[0];
    VAR31 = VAR33->VAR54[1];
    if (VAR11->VAR11.VAR21[VAR22].VAR46.VAR33->VAR36[0] && (VAR11->VAR11.VAR21[VAR49].VAR46.VAR33->VAR55 != VAR11->VAR11.VAR21[VAR48].VAR46.VAR33->VAR55 || VAR11->VAR11.VAR21[VAR49].VAR46.VAR33->VAR56 != VAR11->VAR11.VAR21[VAR48].VAR46.VAR33->VAR56))
    {
        FUN9(VAR2, &VAR11->VAR11.VAR21[VAR22]);
    }
    for (VAR16 = 0; VAR16 < 8; VAR16++)
    {
        if (VAR11->VAR43[VAR16].VAR33->VAR36[0])
            FUN7(VAR2, &VAR11->VAR43[VAR16]);
        if (VAR11->VAR11.VAR24.VAR57 & (1 << VAR16))
        {
            VAR13 = FUN8(&VAR11->VAR43[VAR16], &VAR11->VAR11.VAR21[VAR48].VAR46);
        }
        else if (VAR11->VAR11.VAR35[VAR16].VAR33->VAR36[0])
        {
            VAR13 = FUN8(&VAR11->VAR43[VAR16], &VAR11->VAR11.VAR35[VAR16]);
        }
        if (VAR13 < 0)
            return VAR13;
    }
    if (VAR2->VAR58)
    {
        VAR13 = VAR2->VAR58->FUN12(VAR2, NULL, 0);
        if (VAR13 < 0)
            return VAR13;
        VAR13 = VAR2->VAR58->FUN13(VAR2, VAR6->VAR8, VAR6->VAR9);
        if (VAR13 < 0)
            return VAR13;
        VAR13 = VAR2->VAR58->FUN14(VAR2);
        if (VAR13 < 0)
            return VAR13;
        goto VAR59;
    }
    VAR34 = VAR11->VAR34;
    memset(VAR11->VAR60, 0, VAR11->VAR61);
    memset(VAR11->VAR62, 0, VAR11->VAR61);
    if (VAR11->VAR11.VAR24.VAR44 || VAR11->VAR11.VAR24.VAR45)
    {
        memset(VAR11->VAR63, VAR64, VAR11->VAR61 * 2);
    }
    else
    {
        memset(VAR11->VAR63, VAR65, VAR11->VAR61);
    }
    memset(VAR11->VAR66, 0, VAR11->VAR67 * 16);
    memset(VAR11->VAR68[0], 0, VAR11->VAR67 * 16 >> VAR11->VAR69);
    memset(VAR11->VAR68[1], 0, VAR11->VAR67 * 16 >> VAR11->VAR69);
    memset(VAR11->VAR70, 0, VAR11->VAR61);
    VAR11->VAR71 = VAR11->VAR11.VAR21[VAR48].VAR72 = VAR2->VAR73 == VAR74 && VAR11->VAR11.VAR24.VAR75 && !VAR11->VAR11.VAR24.VAR76;
    if ((VAR13 = FUN15(VAR2)) < 0)
    {
        FUN3(VAR2, VAR37, "");
        return VAR13;
    }
    if (VAR11->VAR11.VAR24.VAR75 && VAR11->VAR11.VAR24.VAR76)
    {
        int VAR77, VAR78, VAR79, VAR80;
        for (VAR16 = 0; VAR16 < 4; VAR16++)
        {
            for (VAR77 = 0; VAR77 < 2; VAR77++)
                for (VAR78 = 0; VAR78 < 2; VAR78++)
                    for (VAR79 = 0; VAR79 < 6; VAR79++)
                        for (VAR80 = 0; VAR80 < 6; VAR80++)
                            memcpy(VAR11->VAR81[VAR11->VAR11.VAR24.VAR82].VAR83[VAR16][VAR77][VAR78][VAR79][VAR80], VAR11->VAR84.VAR83[VAR16][VAR77][VAR78][VAR79][VAR80], 3);
            if (VAR11->VAR11.VAR24.VAR85 == VAR16)
                break;
        }
        VAR11->VAR81[VAR11->VAR11.VAR24.VAR82].VAR86 = VAR11->VAR84.VAR86;
        FUN16(VAR2);
    }
    else if (!VAR11->VAR11.VAR24.VAR75)
    {
        FUN16(VAR2);
    }
    do
    {
        VAR28 = VAR29 = 0;
        VAR11->VAR87 = VAR11->VAR88;
        VAR11->VAR89 = VAR11->VAR90;
        VAR11->VAR91[0] = VAR11->VAR92[0];
        VAR11->VAR91[1] = VAR11->VAR92[1];
        VAR11->VAR93 = VAR11->VAR94;
        VAR11->VAR95[0] = VAR11->VAR96[0];
        VAR11->VAR95[1] = VAR11->VAR96[1];
        for (VAR14 = 0; VAR14 < VAR11->VAR11.VAR24.VAR97.VAR98; VAR14++)
        {
            FUN17(&VAR11->VAR99, &VAR11->VAR100, VAR14, VAR11->VAR11.VAR24.VAR97.VAR101, VAR11->VAR102);
            if (VAR11->VAR71 != 2)
            {
                for (VAR15 = 0; VAR15 < VAR11->VAR11.VAR24.VAR97.VAR103; VAR15++)
                {
                    int64_t VAR104;
                    if (VAR15 == VAR11->VAR11.VAR24.VAR97.VAR103 - 1 && VAR14 == VAR11->VAR11.VAR24.VAR97.VAR98 - 1)
                    {
                        VAR104 = VAR9;
                    }
                    else
                    {
                        VAR104 = FUN18(VAR8);
                        VAR8 += 4;
                        VAR9 -= 4;
                    }
                    if (VAR104 > VAR9)
                    {
                        FUN19(&VAR11->VAR11.VAR21[VAR48].VAR46, VAR105, 0);
                        return VAR38;
                    }
                    FUN20(&VAR11->VAR106[VAR15], VAR8, VAR104);
                    if (FUN21(&VAR11->VAR106[VAR15], 128))
                    {
                        FUN19(&VAR11->VAR11.VAR21[VAR48].VAR46, VAR105, 0);
                        return VAR38;
                    }
                    VAR8 += VAR104;
                    VAR9 -= VAR104;
                }
            }
            for (VAR18 = VAR11->VAR99; VAR18 < VAR11->VAR100; VAR18 += 8, VAR28 += VAR30 * 64, VAR29 += VAR31 * 64 >> VAR11->VAR107)
            {
                struct VAR108 *VAR109 = VAR11->VAR110;
                ptrdiff_t VAR111 = VAR28, VAR112 = VAR29;
                for (VAR15 = 0; VAR15 < VAR11->VAR11.VAR24.VAR97.VAR103; VAR15++)
                {
                    FUN17(&VAR11->VAR113, &VAR11->VAR114, VAR15, VAR11->VAR11.VAR24.VAR97.VAR115, VAR11->VAR67);
                    if (VAR11->VAR71 != 2)
                    {
                        memset(VAR11->VAR116, 0, 8);
                        memset(VAR11->VAR117, 0, 8);
                        if (VAR11->VAR11.VAR24.VAR44 || VAR11->VAR11.VAR24.VAR45)
                        {
                            memset(VAR11->VAR118, VAR64, 16);
                        }
                        else
                        {
                            memset(VAR11->VAR118, VAR65, 8);
                        }
                        memset(VAR11->VAR119, 0, 16);
                        memset(VAR11->VAR120, 0, 32);
                        memset(VAR11->VAR121, 0, 8);
                        memcpy(&VAR11->VAR122, &VAR11->VAR106[VAR15], sizeof(VAR11->VAR122));
                    }
                    for (VAR19 = VAR11->VAR113; VAR19 < VAR11->VAR114; VAR19 += 8, VAR111 += 64 * VAR34, VAR112 += 64 * VAR34 >> VAR11->VAR69, VAR109++)
                    {
                        if (VAR11->VAR71 != 1)
                        {
                            memset(VAR109->VAR123, 0, sizeof(VAR109->VAR123));
                        }
                        if (VAR11->VAR71 == 2)
                        {
                            FUN22(VAR2, VAR18, VAR19, VAR109, VAR111, VAR112, VAR124);
                        }
                        else
                        {
                            FUN23(VAR2, VAR18, VAR19, VAR109, VAR111, VAR112, VAR124);
                        }
                    }
                    if (VAR11->VAR71 != 2)
                    {
                        memcpy(&VAR11->VAR106[VAR15], &VAR11->VAR122, sizeof(VAR11->VAR122));
                    }
                }
                if (VAR11->VAR71 == 1)
                {
                    continue;
                }
                if (VAR18 + 8 < VAR11->VAR125)
                {
                    memcpy(VAR11->VAR126[0], VAR33->VAR8[0] + VAR28 + 63 * VAR30, 8 * VAR11->VAR61 * VAR34);
                    memcpy(VAR11->VAR126[1], VAR33->VAR8[1] + VAR29 + ((64 >> VAR11->VAR107) - 1) * VAR31, 8 * VAR11->VAR61 * VAR34 >> VAR11->VAR69);
                    memcpy(VAR11->VAR126[2], VAR33->VAR8[2] + VAR29 + ((64 >> VAR11->VAR107) - 1) * VAR31, 8 * VAR11->VAR61 * VAR34 >> VAR11->VAR69);
                }
                if (VAR11->VAR11.VAR24.VAR127.VAR128)
                {
                    VAR111 = VAR28;
                    VAR112 = VAR29;
                    VAR109 = VAR11->VAR110;
                    for (VAR19 = 0; VAR19 < VAR11->VAR61; VAR19 += 8, VAR111 += 64 * VAR34, VAR112 += 64 * VAR34 >> VAR11->VAR69, VAR109++)
                    {
                        FUN24(VAR2, VAR109, VAR18, VAR19, VAR111, VAR112);
                    }
                }
                FUN19(&VAR11->VAR11.VAR21[VAR48].VAR46, VAR18 >> 3, 0);
            }
        }
        if (VAR11->VAR71 < 2 && VAR11->VAR11.VAR24.VAR75 && !VAR11->VAR11.VAR24.VAR76)
        {
            FUN25(VAR11);
            FUN16(VAR2);
        }
    } while (VAR11->VAR71++ == 1);
    FUN19(&VAR11->VAR11.VAR21[VAR48].VAR46, VAR105, 0);
VAR59:
    for (VAR16 = 0; VAR16 < 8; VAR16++)
    {
        if (VAR11->VAR11.VAR35[VAR16].VAR33->VAR36[0])
            FUN7(VAR2, &VAR11->VAR11.VAR35[VAR16]);
        if (VAR11->VAR43[VAR16].VAR33->VAR36[0] && (VAR13 = FUN8(&VAR11->VAR11.VAR35[VAR16], &VAR11->VAR43[VAR16])) < 0)
            return VAR13;
    }
    if (!VAR11->VAR11.VAR24.VAR129)
    {
        if ((VAR13 = FUN4(VAR3, VAR11->VAR11.VAR21[VAR48].VAR46.VAR33)) < 0)
            return VAR13;
        *VAR4 = 1;
    }
    return VAR6->VAR9;
}