static int FUN1(VAR1 *VAR2, void *VAR3, int *VAR4, VAR5 *VAR6)
{
    const VAR7 *VAR8 = VAR6->VAR8;
    int VAR9 = VAR6->VAR9;
    VAR10 *VAR11 = VAR2->VAR12;
    int VAR13, VAR14, VAR15, VAR16;
    int VAR17 = VAR11->VAR11.VAR18[VAR19].VAR20 && (!VAR11->VAR11.VAR21.VAR22.VAR23 || !VAR11->VAR11.VAR21.VAR22.VAR24);
    VAR25 *VAR26;
    if ((VAR13 = FUN2(VAR2, VAR8, VAR9, &VAR16)) < 0)
    {
        return VAR13;
    }
    else if (VAR13 == 0)
    {
        if (!VAR11->VAR11.VAR27[VAR16].VAR26->VAR28[0])
        {
            FUN3(VAR2, VAR29, "", VAR16);
            return VAR30;
        }
        if ((VAR13 = FUN4(VAR3, VAR11->VAR11.VAR27[VAR16].VAR26)) < 0)
            return VAR13;
        ((VAR25 *)VAR3)->VAR31 = VAR6->VAR31;
        FUN5((VAR25 *)VAR3)->VAR32 = VAR6->VAR31;
        FUN6((VAR25 *)VAR3)->VAR33 = VAR6->VAR34;
        for (VAR14 = 0; VAR14 < 8; VAR14++)
        {
            if (VAR11->VAR35[VAR14].VAR26->VAR28[0])
                FUN7(VAR2, &VAR11->VAR35[VAR14]);
            if (VAR11->VAR11.VAR27[VAR14].VAR26->VAR28[0] && (VAR13 = FUN8(&VAR11->VAR35[VAR14], &VAR11->VAR11.VAR27[VAR14])) < 0)
                return VAR13;
        }
        *VAR4 = 1;
        return VAR6->VAR9;
    }
    VAR8 += VAR13;
    VAR9 -= VAR13;
    if (!VAR17 || VAR11->VAR11.VAR21.VAR36 || VAR11->VAR11.VAR21.VAR37)
    {
        if (VAR11->VAR11.VAR18[VAR19].VAR38.VAR26->VAR28[0])
            FUN9(VAR2, &VAR11->VAR11.VAR18[VAR19]);
        if (!VAR11->VAR11.VAR21.VAR36 && !VAR11->VAR11.VAR21.VAR37 && !VAR11->VAR11.VAR21.VAR39 && VAR11->VAR11.VAR18[VAR40].VAR38.VAR26->VAR28[0] && (VAR13 = FUN10(VAR2, &VAR11->VAR11.VAR18[VAR19], &VAR11->VAR11.VAR18[VAR40])) < 0)
            return VAR13;
    }
    if (VAR11->VAR11.VAR18[VAR41].VAR38.VAR26->VAR28[0])
        FUN9(VAR2, &VAR11->VAR11.VAR18[VAR41]);
    if (!VAR11->VAR11.VAR21.VAR37 && !VAR11->VAR11.VAR21.VAR36 && !VAR11->VAR11.VAR21.VAR39 && VAR11->VAR11.VAR18[VAR40].VAR38.VAR26->VAR28[0] && (VAR13 = FUN10(VAR2, &VAR11->VAR11.VAR18[VAR41], &VAR11->VAR11.VAR18[VAR40])) < 0)
        return VAR13;
    if (VAR11->VAR11.VAR18[VAR40].VAR38.VAR26->VAR28[0])
        FUN9(VAR2, &VAR11->VAR11.VAR18[VAR40]);
    if ((VAR13 = FUN11(VAR2, &VAR11->VAR11.VAR18[VAR40])) < 0)
        return VAR13;
    VAR26 = VAR11->VAR11.VAR18[VAR40].VAR38.VAR26;
    VAR26->VAR42 = VAR11->VAR11.VAR21.VAR36;
    VAR26->VAR43 = (VAR11->VAR11.VAR21.VAR36 || VAR11->VAR11.VAR21.VAR37) ? VAR44 : VAR45;
    if (VAR11->VAR11.VAR18[VAR19].VAR38.VAR26->VAR28[0] && (VAR11->VAR11.VAR18[VAR41].VAR38.VAR26->VAR46 != VAR11->VAR11.VAR18[VAR40].VAR38.VAR26->VAR46 || VAR11->VAR11.VAR18[VAR41].VAR38.VAR26->VAR47 != VAR11->VAR11.VAR18[VAR40].VAR38.VAR26->VAR47))
    {
        FUN9(VAR2, &VAR11->VAR11.VAR18[VAR19]);
    }
    for (VAR14 = 0; VAR14 < 8; VAR14++)
    {
        if (VAR11->VAR35[VAR14].VAR26->VAR28[0])
            FUN7(VAR2, &VAR11->VAR35[VAR14]);
        if (VAR11->VAR11.VAR21.VAR48 & (1 << VAR14))
        {
            VAR13 = FUN8(&VAR11->VAR35[VAR14], &VAR11->VAR11.VAR18[VAR40].VAR38);
        }
        else if (VAR11->VAR11.VAR27[VAR14].VAR26->VAR28[0])
        {
            VAR13 = FUN8(&VAR11->VAR35[VAR14], &VAR11->VAR11.VAR27[VAR14]);
        }
        if (VAR13 < 0)
            return VAR13;
    }
    if (VAR2->VAR49)
    {
        VAR13 = VAR2->VAR49->FUN12(VAR2, NULL, 0);
        if (VAR13 < 0)
            return VAR13;
        VAR13 = VAR2->VAR49->FUN13(VAR2, VAR6->VAR8, VAR6->VAR9);
        if (VAR13 < 0)
            return VAR13;
        VAR13 = VAR2->VAR49->FUN14(VAR2);
        if (VAR13 < 0)
            return VAR13;
        goto VAR50;
    }
    memset(VAR11->VAR51, 0, VAR11->VAR52);
    memset(VAR11->VAR53, 0, VAR11->VAR52);
    if (VAR11->VAR11.VAR21.VAR36 || VAR11->VAR11.VAR21.VAR37)
    {
        memset(VAR11->VAR54, VAR55, VAR11->VAR52 * 2);
    }
    else
    {
        memset(VAR11->VAR54, VAR56, VAR11->VAR52);
    }
    memset(VAR11->VAR57, 0, VAR11->VAR58 * 16);
    memset(VAR11->VAR59[0], 0, VAR11->VAR58 * 16 >> VAR11->VAR60);
    memset(VAR11->VAR59[1], 0, VAR11->VAR58 * 16 >> VAR11->VAR60);
    memset(VAR11->VAR61, 0, VAR11->VAR52);
    VAR11->VAR62 = VAR11->VAR11.VAR18[VAR40].VAR63 = VAR2->VAR64 == VAR65 && VAR11->VAR11.VAR21.VAR66 && !VAR11->VAR11.VAR21.VAR67;
    if ((VAR13 = FUN15(VAR2)) < 0)
    {
        FUN3(VAR2, VAR29, "");
        return VAR13;
    }
    if (VAR11->VAR11.VAR21.VAR66 && VAR11->VAR11.VAR21.VAR67)
    {
        int VAR15, VAR68, VAR69, VAR70;
        for (VAR14 = 0; VAR14 < 4; VAR14++)
        {
            for (VAR15 = 0; VAR15 < 2; VAR15++)
                for (VAR68 = 0; VAR68 < 2; VAR68++)
                    for (VAR69 = 0; VAR69 < 6; VAR69++)
                        for (VAR70 = 0; VAR70 < 6; VAR70++)
                            memcpy(VAR11->VAR71[VAR11->VAR11.VAR21.VAR72].VAR73[VAR14][VAR15][VAR68][VAR69][VAR70], VAR11->VAR74.VAR73[VAR14][VAR15][VAR68][VAR69][VAR70], 3);
            if (VAR11->VAR11.VAR21.VAR75 == VAR14)
                break;
        }
        VAR11->VAR71[VAR11->VAR11.VAR21.VAR72].VAR76 = VAR11->VAR74.VAR76;
        FUN16(VAR2);
    }
    else if (!VAR11->VAR11.VAR21.VAR66)
    {
        FUN16(VAR2);
    }
    if (VAR2->VAR64 & VAR77)
    {
        for (VAR14 = 0; VAR14 < VAR11->VAR78; VAR14++)
            FUN17(&VAR11->VAR79[VAR14], 0);
    }
    do
    {
        for (VAR14 = 0; VAR14 < VAR11->VAR80; VAR14++)
        {
            VAR11->VAR81[VAR14].VAR82 = VAR11->VAR81[VAR14].VAR83;
            VAR11->VAR81[VAR14].VAR84 = VAR11->VAR81[VAR14].VAR85;
            VAR11->VAR81[VAR14].VAR86[0] = VAR11->VAR81[VAR14].VAR87[0];
            VAR11->VAR81[VAR14].VAR86[1] = VAR11->VAR81[VAR14].VAR87[1];
            VAR11->VAR81[VAR14].VAR88 = VAR11->VAR81[VAR14].VAR89;
            VAR11->VAR81[VAR14].VAR90[0] = VAR11->VAR81[VAR14].VAR91[0];
            VAR11->VAR81[VAR14].VAR90[1] = VAR11->VAR81[VAR14].VAR91[1];
        }
        if (VAR2->VAR64 == VAR77)
        {
            int VAR92, VAR93;
            FUN18(!VAR11->VAR62);
            for (VAR92 = 0; VAR92 < VAR11->VAR11.VAR21.VAR94.VAR95; VAR92++)
            {
                for (VAR93 = 0; VAR93 < VAR11->VAR11.VAR21.VAR94.VAR96; VAR93++)
                {
                    int64_t VAR97;
                    if (VAR93 == VAR11->VAR11.VAR21.VAR94.VAR96 - 1 && VAR92 == VAR11->VAR11.VAR21.VAR94.VAR95 - 1)
                    {
                        VAR97 = VAR9;
                    }
                    else
                    {
                        VAR97 = FUN19(VAR8);
                        VAR8 += 4;
                        VAR9 -= 4;
                    }
                    if (VAR97 > VAR9)
                        return VAR30;
                    VAR13 = FUN20(&VAR11->VAR81[VAR93].VAR98[VAR92], VAR8, VAR97);
                    if (VAR13 < 0)
                        return VAR13;
                    if (FUN21(&VAR11->VAR81[VAR93].VAR98[VAR92], 128))
                        return VAR30;
                    VAR8 += VAR97;
                    VAR9 -= VAR97;
                }
            }
            FUN22(VAR2, VAR99, VAR100, VAR11->VAR81, NULL, VAR11->VAR11.VAR21.VAR94.VAR96);
        }
        else
        {
            VAR13 = FUN23(VAR2, VAR8, VAR9);
            if (VAR13 < 0)
                return VAR13;
        }
        if (VAR2->VAR64 == VAR77)
            for (VAR14 = 1; VAR14 < VAR11->VAR11.VAR21.VAR94.VAR96; VAR14++)
                for (VAR15 = 0; VAR15 < sizeof(VAR11->VAR81[VAR14].VAR101) / sizeof(unsigned); VAR15++)
                    ((unsigned *)&VAR11->VAR81[0].VAR101)[VAR15] += ((unsigned *)&VAR11->VAR81[VAR14].VAR101)[VAR15];
        if (VAR11->VAR62 < 2 && VAR11->VAR11.VAR21.VAR66 && !VAR11->VAR11.VAR21.VAR67)
        {
            FUN24(VAR11);
            FUN16(VAR2);
        }
    } while (VAR11->VAR62++ == 1);
    FUN25(&VAR11->VAR11.VAR18[VAR40].VAR38, VAR102, 0);
VAR50:
    for (VAR14 = 0; VAR14 < 8; VAR14++)
    {
        if (VAR11->VAR11.VAR27[VAR14].VAR26->VAR28[0])
            FUN7(VAR2, &VAR11->VAR11.VAR27[VAR14]);
        if (VAR11->VAR35[VAR14].VAR26->VAR28[0] && (VAR13 = FUN8(&VAR11->VAR11.VAR27[VAR14], &VAR11->VAR35[VAR14])) < 0)
            return VAR13;
    }
    if (!VAR11->VAR11.VAR21.VAR103)
    {
        if ((VAR13 = FUN4(VAR3, VAR11->VAR11.VAR18[VAR40].VAR38.VAR26)) < 0)
            return VAR13;
        *VAR4 = 1;
    }
    return VAR6->VAR9;
}