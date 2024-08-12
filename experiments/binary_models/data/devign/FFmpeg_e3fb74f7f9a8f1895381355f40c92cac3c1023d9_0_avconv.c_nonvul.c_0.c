static int FUN1(VAR1 *VAR2, char *VAR3, int VAR4)
{
    int VAR5 = 0;
    if (VAR2->VAR6)
    {
        VAR7 *VAR8 = VAR2->VAR9;
        VAR10 *VAR11 = NULL;
        VAR12 *VAR13;
        VAR5 = FUN2(VAR2);
        if (VAR5 < 0)
            return VAR5;
        if ((VAR13 = FUN3(VAR2)))
            VAR11 = VAR13->VAR14;
        if (VAR11 && VAR11->VAR15)
        {
            VAR2->VAR16->VAR15 = FUN4(VAR11->VAR17);
            if (!VAR2->VAR16->VAR15)
                return FUN5(VAR18);
            memcpy(VAR2->VAR16->VAR15, VAR11->VAR15, VAR11->VAR17);
            VAR2->VAR16->VAR17 = VAR11->VAR17;
        }
        if (!FUN6(VAR2->VAR19, "", NULL, 0))
            FUN7(&VAR2->VAR19, "", "", 0);
        if (VAR2->VAR20 && VAR2->VAR20->VAR20->VAR21[0]->VAR22 && ((VAR23 *)VAR2->VAR20->VAR20->VAR21[0]->VAR22->VAR24)->VAR25 == VAR2->VAR20->VAR20->VAR21[0]->VAR25)
        {
            VAR2->VAR16->VAR22 = FUN8(VAR2->VAR20->VAR20->VAR21[0]->VAR22);
            if (!VAR2->VAR16->VAR22)
                return FUN5(VAR18);
        }
        if ((VAR5 = FUN9(VAR2->VAR16, VAR8, &VAR2->VAR19)) < 0)
        {
            if (VAR5 == VAR26)
                FUN10(VAR8, 1);
            snprintf(VAR3, VAR4, ""
                                       "",
                     VAR2->VAR27, VAR2->VAR28);
            return VAR5;
        }
        FUN11(VAR2->VAR19);
        if (VAR2->VAR16->VAR29 && VAR2->VAR16->VAR29 < 1000)
            FUN12(NULL, VAR30, ""
                                         "");
        VAR5 = FUN13(VAR2->VAR31->VAR32, VAR2->VAR16);
        if (VAR5 < 0)
        {
            FUN12(NULL, VAR33, "");
            FUN14(1);
        }
        if (VAR2->VAR16->VAR34)
        {
            int VAR35;
            VAR2->VAR31->VAR36 = FUN15(NULL, VAR2->VAR16->VAR34, sizeof(*VAR2->VAR31->VAR36));
            if (!VAR2->VAR31->VAR36)
                return FUN5(VAR18);
            for (VAR35 = 0; VAR35 < VAR2->VAR16->VAR34; VAR35++)
            {
                const VAR37 *VAR38 = &VAR2->VAR16->VAR39[VAR35];
                VAR37 *VAR40 = &VAR2->VAR31->VAR36[VAR35];
                VAR40->VAR24 = FUN4(VAR38->VAR41);
                if (!VAR40->VAR24)
                    return FUN5(VAR18);
                memcpy(VAR40->VAR24, VAR38->VAR24, VAR38->VAR41);
                VAR40->VAR41 = VAR38->VAR41;
                VAR40->VAR42 = VAR38->VAR42;
                VAR2->VAR31->VAR43++;
            }
        }
        VAR2->VAR31->VAR44 = VAR2->VAR16->VAR44;
    }
    else if (VAR2->VAR45)
    {
        VAR5 = FUN16(VAR2);
        if (VAR5 < 0)
            return VAR5;
        VAR5 = FUN17(VAR2->VAR46, VAR2->VAR31->VAR32);
        if (VAR5 < 0)
            return VAR5;
    }
    VAR5 = FUN18(VAR2);
    if (VAR5 < 0)
        return VAR5;
    VAR2->VAR47 = VAR2->VAR31->VAR44;
    VAR2->VAR48 = 1;
    VAR5 = FUN19(VAR49[VAR2->VAR27], VAR2->VAR27);
    if (VAR5 < 0)
        return VAR5;
    return VAR5;
}