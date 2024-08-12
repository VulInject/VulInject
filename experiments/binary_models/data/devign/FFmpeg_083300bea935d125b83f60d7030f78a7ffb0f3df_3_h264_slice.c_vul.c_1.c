static int FUN1(VAR1 *VAR2, const VAR3 *VAR4, const VAR5 *VAR6, int VAR7)
{
    int VAR8;
    const VAR9 *VAR10;
    int VAR11, VAR12, VAR13;
    VAR13 = FUN2(VAR2, VAR4, VAR7);
    if (VAR13 < 0)
        return VAR13;
    VAR10 = VAR2->VAR14.VAR10;
    VAR12 = VAR2->VAR15;
    VAR11 = VAR2->VAR16;
    VAR2->VAR15 = (VAR6->VAR17 == 0);
    VAR2->VAR16 = VAR4->VAR16;
    VAR2->VAR18.VAR19 = VAR4->VAR19;
    VAR2->VAR18.VAR20 = VAR4->VAR20;
    VAR2->VAR18.VAR21 = VAR4->VAR21;
    VAR2->VAR18.VAR22[0] = VAR4->VAR22[0];
    VAR2->VAR18.VAR22[1] = VAR4->VAR22[1];
    if (VAR2->VAR18.VAR19 != VAR2->VAR18.VAR23)
    {
        int VAR24 = VAR2->VAR18.VAR23;
        int VAR25 = 1 << VAR10->VAR26;
        if (VAR24 > VAR2->VAR18.VAR19)
            VAR24 -= VAR25;
        if ((VAR2->VAR18.VAR19 - VAR24) > VAR10->VAR27)
        {
            VAR24 = (VAR2->VAR18.VAR19 - VAR10->VAR27) - 1;
            if (VAR24 < 0)
                VAR24 += VAR25;
            VAR2->VAR18.VAR23 = VAR24;
        }
    }
    if (VAR2->VAR28)
    {
        FUN3(VAR2->VAR29);
        FUN3(VAR2->VAR29->VAR30->VAR31[0]);
        assert(VAR2->VAR29->VAR32 != VAR33);
        if (VAR2->VAR29->VAR34.VAR35 == VAR2->VAR36)
        {
            FUN4(&VAR2->VAR29->VAR34, VAR37, VAR11 == VAR38);
        }
        if (!FUN5(VAR2) || VAR2->VAR16 == VAR11)
        {
            if (VAR11 != VAR39)
            {
                FUN4(&VAR2->VAR29->VAR34, VAR37, VAR11 == VAR40);
            }
        }
        else
        {
            if (VAR2->VAR29->VAR19 != VAR2->VAR18.VAR19)
            {
                if (VAR11 != VAR39)
                {
                    FUN4(&VAR2->VAR29->VAR34, VAR37, VAR11 == VAR40);
                }
            }
            else
            {
                if (!((VAR11 == VAR40 && VAR2->VAR16 == VAR38) || (VAR11 == VAR38 && VAR2->VAR16 == VAR40)))
                {
                    FUN6(VAR2->VAR36, VAR41, "", VAR11, VAR2->VAR16);
                    VAR2->VAR16 = VAR11;
                    VAR2->VAR15 = VAR12;
                    return VAR42;
                }
                else if (VAR12 != VAR2->VAR15)
                {
                    FUN7(VAR2->VAR36, "");
                    VAR2->VAR16 = VAR11;
                    VAR2->VAR15 = VAR12;
                    return VAR43;
                }
            }
        }
    }
    while (VAR2->VAR18.VAR19 != VAR2->VAR18.VAR23 && !VAR2->VAR28 && VAR2->VAR18.VAR19 != (VAR2->VAR18.VAR23 + 1) % (1 << VAR10->VAR26))
    {
        VAR44 *VAR45 = VAR2->VAR46 ? VAR2->VAR47[0] : NULL;
        FUN6(VAR2->VAR36, VAR48, "", VAR2->VAR18.VAR19, VAR2->VAR18.VAR23);
        if (!VAR10->VAR49)
            for (VAR8 = 0; VAR8 < FUN8(VAR2->VAR50); VAR8++)
                VAR2->VAR50[VAR8] = VAR51;
        VAR13 = FUN9(VAR2);
        if (VAR13 < 0)
        {
            VAR2->VAR28 = 0;
            return VAR13;
        }
        VAR2->VAR18.VAR23++;
        VAR2->VAR18.VAR23 %= 1 << VAR10->VAR26;
        VAR2->VAR29->VAR19 = VAR2->VAR18.VAR23;
        VAR2->VAR29->VAR52 = !VAR10->VAR49;
        FUN4(&VAR2->VAR29->VAR34, VAR37, 0);
        FUN4(&VAR2->VAR29->VAR34, VAR37, 1);
        VAR2->VAR53 = 0;
        VAR13 = FUN10(VAR2);
        if (VAR13 < 0 && (VAR2->VAR36->VAR54 & VAR55))
            return VAR13;
        if (VAR2->VAR46)
        {
            if (VAR45 && VAR2->VAR47[0]->VAR30->VAR56 == VAR45->VAR30->VAR56 && VAR2->VAR47[0]->VAR30->VAR57 == VAR45->VAR30->VAR57 && VAR2->VAR47[0]->VAR30->VAR58 == VAR45->VAR30->VAR58)
            {
                FUN11(&VAR45->VAR34, VAR37, 0);
                if (VAR45->VAR59)
                    FUN11(&VAR45->VAR34, VAR37, 1);
                FUN12(VAR2->VAR47[0]->VAR30->VAR60, VAR2->VAR47[0]->VAR30->VAR61, (const VAR62 **)VAR45->VAR30->VAR60, VAR45->VAR30->VAR61, VAR45->VAR30->VAR58, VAR45->VAR30->VAR56, VAR45->VAR30->VAR57);
                VAR2->VAR47[0]->VAR18 = VAR45->VAR18 + 2;
            }
            VAR2->VAR47[0]->VAR19 = VAR2->VAR18.VAR23;
        }
    }
    if (VAR2->VAR28)
    {
        FUN3(VAR2->VAR29);
        FUN3(VAR2->VAR29->VAR30->VAR31[0]);
        assert(VAR2->VAR29->VAR32 != VAR33);
        if (!FUN5(VAR2) || VAR2->VAR16 == VAR11)
        {
            VAR2->VAR63++;
            VAR2->VAR29 = NULL;
            VAR2->VAR28 = FUN5(VAR2);
        }
        else
        {
            VAR2->VAR63 = 0;
            if (VAR2->VAR29->VAR19 != VAR2->VAR18.VAR19)
            {
                FUN4(&VAR2->VAR29->VAR34, VAR37, VAR2->VAR16 == VAR38);
                VAR2->VAR28 = 1;
                VAR2->VAR29 = NULL;
            }
            else
            {
                VAR2->VAR28 = 0;
            }
        }
    }
    else
    {
        VAR2->VAR28 = FUN5(VAR2);
    }
    if (!FUN5(VAR2) || VAR2->VAR28)
    {
        if (FUN9(VAR2) < 0)
        {
            VAR2->VAR28 = 0;
            return VAR42;
        }
    }
    else
    {
        FUN13(VAR2, 0);
    }
    if (FUN5(VAR2))
    {
        for (VAR8 = (VAR2->VAR16 == VAR38); VAR8 < VAR2->VAR64; VAR8++)
            memset(VAR2->VAR65 + VAR8 * VAR2->VAR66, -1, (VAR2->VAR66 - (VAR8 + 1 == VAR2->VAR64)) * sizeof(*VAR2->VAR65));
    }
    else
    {
        memset(VAR2->VAR65, -1, (VAR2->VAR64 * VAR2->VAR66 - 1) * sizeof(*VAR2->VAR65));
    }
    FUN14(VAR2->VAR29->VAR67, &VAR2->VAR29->VAR18, VAR2->VAR14.VAR10, &VAR2->VAR18, VAR2->VAR16, VAR6->VAR17);
    memcpy(VAR2->VAR68, VAR4->VAR68, VAR4->VAR69 * sizeof(*VAR2->VAR68));
    VAR2->VAR69 = VAR4->VAR69;
    VAR2->VAR53 = VAR4->VAR53;
    VAR2->VAR70 = VAR6->VAR71 == VAR72;
    if (VAR2->VAR73.VAR74.VAR75 >= 0)
    {
        const int VAR76 = VAR2->VAR73.VAR74.VAR75;
        if (VAR2->VAR18.VAR19 != VAR76 || VAR4->VAR77 != VAR78)
            VAR2->VAR79 = 1;
        if (VAR2->VAR80 < 0 || FUN15(VAR2->VAR80 - VAR2->VAR18.VAR19, VAR2->VAR14.VAR10->VAR26) > VAR76)
        {
            VAR2->VAR80 = FUN15(VAR2->VAR18.VAR19 + VAR76, VAR2->VAR14.VAR10->VAR26);
            if (!VAR2->VAR79)
                VAR2->VAR80 = VAR2->VAR18.VAR19;
        }
    }
    VAR2->VAR29->VAR30->VAR81 |= (VAR6->VAR71 == VAR72);
    if (VAR6->VAR71 == VAR72 || (VAR2->VAR80 == VAR2->VAR18.VAR19 && VAR6->VAR17))
    {
        VAR2->VAR80 = -1;
        VAR2->VAR29->VAR82 = 1;
    }
    if (VAR6->VAR71 == VAR72)
        VAR2->VAR83 |= VAR84;
    VAR2->VAR29->VAR82 |= VAR2->VAR83;
    VAR2->VAR29->VAR82 |= !!(VAR2->VAR83 & VAR84);
    if (!FUN5(VAR2) || !VAR2->VAR28 || VAR2->VAR63 > 1)
    {
        VAR13 = FUN16(VAR2);
        if (VAR13 < 0)
            return VAR13;
        VAR13 = FUN17(VAR2);
        if (VAR13 < 0)
            return VAR13;
    }
    return 0;
}