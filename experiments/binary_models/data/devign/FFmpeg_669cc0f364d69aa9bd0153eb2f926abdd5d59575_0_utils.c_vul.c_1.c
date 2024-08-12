int FUN1(VAR1 *VAR2, VAR3 *VAR4, int VAR5)
{
    int VAR6;
    switch (VAR2->VAR7)
    {
    case VAR8:
        if (!VAR4->VAR9)
            VAR4->VAR9 = VAR2->VAR9;
        if (!VAR4->VAR10)
            VAR4->VAR10 = VAR2->VAR10;
        if (VAR4->VAR11 < 0)
            VAR4->VAR11 = VAR2->VAR12;
        if (!VAR4->VAR13.VAR14)
            VAR4->VAR13 = VAR2->VAR13;
        if ((VAR6 = FUN2(VAR2->VAR9, VAR2->VAR10, 0, VAR2)) < 0)
            return VAR6;
        break;
    case VAR15:
        if (!VAR4->VAR16)
            VAR4->VAR16 = VAR2->VAR16;
        if (VAR4->VAR11 < 0)
            VAR4->VAR11 = VAR2->VAR17;
        if (!VAR4->VAR18)
        {
            if (VAR2->VAR18)
            {
                if (FUN3(VAR2->VAR18) != VAR2->VAR19)
                {
                    FUN4(VAR2, VAR20, ""
                                                "");
                    return FUN5(VAR21);
                }
                VAR4->VAR18 = VAR2->VAR18;
            }
            else
            {
                if (VAR2->VAR19 > VAR22)
                {
                    FUN4(VAR2, VAR20, "", VAR2->VAR19);
                    return FUN5(VAR23);
                }
                VAR4->VAR18 = FUN6(VAR2->VAR19);
                if (!VAR4->VAR18)
                    VAR4->VAR18 = (1ULL << VAR2->VAR19) - 1;
            }
        }
        break;
    default:
        return FUN5(VAR21);
    }
    VAR4->VAR24 = VAR2->VAR25 ? VAR2->VAR25->VAR26 : VAR27;
    VAR4->VAR28 = VAR2->VAR28;
    if (VAR2->VAR29)
    {
        VAR30 *VAR31 = NULL;
        VAR32 *VAR33 = NULL;
        int VAR34, VAR35, VAR6;
        if (VAR5 & VAR36)
            VAR4->VAR37 = 1;
        VAR6 = VAR2->FUN7(VAR2, VAR4);
        if (VAR6 < 0)
            return VAR6;
        if (VAR4->VAR38[0])
            return 0;
        VAR31 = FUN8(sizeof(*VAR31));
        if (!VAR31)
        {
            VAR6 = FUN5(VAR39);
            goto VAR40;
        }
        VAR31->VAR2 = *VAR2;
        VAR31->VAR4 = *VAR4;
        VAR33 = FUN9(NULL, 0, VAR41, VAR31, 0);
        if (!VAR33)
        {
            VAR6 = FUN5(VAR39);
            goto VAR40;
        }
        do
        {
            VAR32 *VAR42 = FUN10(VAR33);
            if (!VAR42)
            {
                VAR6 = FUN5(VAR39);
                goto VAR40;
            }
            VAR43 = FUN9(VAR44, VAR45, VAR46, VAR42, 0);
            if (!VAR43)
            {
                FUN11(VAR4);
                VAR6 = FUN5(VAR39);
                goto VAR40;
            }
        } while (0) if (VAR2->VAR7 == VAR8)
        {
            const VAR47 *VAR48 = FUN12(VAR4->VAR11);
            if (!VAR48)
            {
                VAR6 = FUN5(VAR21);
                goto VAR40;
            }
            VAR34 = (VAR48->VAR5 & VAR49) ? VAR48->VAR50 : 1;
            for (VAR35 = 0; VAR35 < VAR34; VAR35++)
            {
                int VAR51 = (VAR35 == 1 || VAR35 == 2) ? VAR48->VAR52 : 0;
                int VAR53 = (VAR4->VAR9 >> VAR51) * VAR4->VAR54[VAR35];
                FUN13(VAR4->VAR38[VAR35], VAR4->VAR44[VAR35], VAR53);
            }
        }
        else
        {
            int VAR55 = FUN14(VAR4->VAR11);
            VAR34 = VAR55 ? VAR2->VAR19 : 1;
            if (VAR34 > FUN15(VAR4->VAR38))
            {
                VAR4->VAR56 = VAR34 - FUN15(VAR4->VAR38);
                VAR4->VAR57 = FUN16(sizeof(*VAR4->VAR57) * VAR4->VAR56);
                if (!VAR4->VAR57)
                {
                    VAR6 = FUN5(VAR39);
                    goto VAR40;
                }
            }
            for (VAR35 = 0; VAR35 < FUN17(VAR34, FUN15(VAR4->VAR38)); VAR35++)
                FUN13(VAR4->VAR38[VAR35], VAR4->VAR58[VAR35], VAR4->VAR54[0]);
            for (VAR35 = 0; VAR35 < VAR34 - FUN15(VAR4->VAR38); VAR35++)
                FUN13(VAR4->VAR57[VAR35], VAR4->VAR58[VAR35 + FUN15(VAR4->VAR38)], VAR4->VAR54[0]);
        }
        FUN18(&VAR33);
        return 0;
    VAR40:
        VAR2->FUN19(VAR2, VAR4);
        FUN20(&VAR31);
        FUN18(&VAR33);
        return VAR6;
    }
    return VAR2->FUN21(VAR2, VAR4, VAR5);
}