void FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = NULL;
    const char *VAR5;
    assert(!VAR6);
    VAR5 = FUN2(VAR2, "");
    if (VAR5)
    {
        struct VAR7 *VAR8;
        int VAR9;
        struct VAR10 *VAR11;
        FUN3(VAR2, VAR12, &VAR4);
        if (VAR4)
        {
            FUN4("", FUN5(VAR4));
            FUN6(1);
        }
        VAR9 = FUN7(VAR5);
        if (VAR9 == -1 || VAR9 < sizeof(struct VAR7))
        {
            FUN4("", VAR5);
            FUN6(1);
        }
        VAR13 = FUN8(VAR13, VAR14 + VAR9);
        VAR8 = (struct VAR7 *)(VAR13 + VAR14);
        if (FUN9(VAR5, (VAR15 *)VAR8) != VAR9)
        {
            FUN4("", VAR5);
            FUN6(1);
        }
        if (FUN10(VAR8->VAR16, VAR17))
        {
            FUN4("", VAR8->VAR16);
            FUN6(1);
        }
        FUN11(VAR8->VAR16, VAR18);
        if (VAR8->VAR16 == 4)
        {
            VAR19++;
        }
        VAR14 += VAR9;
        if (VAR9 > VAR20)
        {
            VAR20 = VAR9;
        }
        VAR21++;
        if (!VAR22)
        {
            VAR23 = sizeof(VAR24);
            VAR22 = FUN12(VAR23);
        }
        VAR22 = FUN8(VAR22, VAR23 + VAR9 + sizeof(*VAR11));
        VAR11 = (struct VAR10 *)(VAR22 + VAR23);
        VAR11->VAR8.VAR16 = VAR25;
        VAR11->VAR8.VAR26 = FUN13(sizeof(*VAR11) + VAR9);
        memcpy(VAR11->VAR27, VAR8, VAR9);
        VAR23 += sizeof(*VAR11) + VAR9;
        (*(VAR24 *)VAR22) = FUN13(FUN14(*(VAR24 *)VAR22) + 1);
        return;
    }
    VAR5 = FUN2(VAR2, "");
    if (VAR5)
    {
        unsigned long VAR16 = FUN15(VAR5, NULL, 0);
        if (VAR16 > VAR28)
        {
            FUN4("");
            FUN6(1);
        }
        if (FUN10(VAR16, VAR18))
        {
            FUN4("");
            FUN6(1);
        }
        FUN11(VAR16, VAR17);
        switch (VAR16)
        {
        case 0:
            FUN3(VAR2, VAR29, &VAR4);
            if (VAR4)
            {
                FUN4("", FUN5(VAR4));
                FUN6(1);
            }
            FUN16(&VAR30.VAR31, VAR2, "");
            FUN16(&VAR30.VAR32, VAR2, "");
            FUN16(&VAR30.VAR33, VAR2, "");
            VAR5 = FUN2(VAR2, "");
            if (VAR5)
            {
                if (sscanf(VAR5, "", &VAR30.VAR34, &VAR30.VAR35) != 2)
                {
                    FUN4("");
                    FUN6(1);
                }
                VAR30.VAR36 = true;
            }
            return;
        case 1:
            FUN3(VAR2, VAR37, &VAR4);
            if (VAR4)
            {
                FUN4("", FUN5(VAR4));
                FUN6(1);
            }
            FUN16(&VAR38.VAR39, VAR2, "");
            FUN16(&VAR38.VAR40, VAR2, "");
            FUN16(&VAR38.VAR32, VAR2, "");
            FUN16(&VAR38.VAR41, VAR2, "");
            FUN16(&VAR38.VAR42, VAR2, "");
            FUN16(&VAR38.VAR43, VAR2, "");
            VAR5 = FUN2(VAR2, "");
            if (VAR5)
            {
                if (FUN17(VAR5, VAR44) != 0)
                {
                    FUN4("");
                    FUN6(1);
                }
                VAR45 = true;
            }
            return;
        case 2:
            FUN3(VAR2, VAR46, &VAR4);
            if (VAR4)
            {
                FUN4("", FUN5(VAR4));
                FUN6(1);
            }
            FUN16(&VAR47.VAR39, VAR2, "");
            FUN16(&VAR47.VAR40, VAR2, "");
            FUN16(&VAR47.VAR32, VAR2, "");
            FUN16(&VAR47.VAR41, VAR2, "");
            FUN16(&VAR47.VAR48, VAR2, "");
            FUN16(&VAR47.VAR49, VAR2, "");
            return;
        case 3:
            FUN3(VAR2, VAR50, &VAR4);
            if (VAR4)
            {
                FUN4("", FUN5(VAR4));
                FUN6(1);
            }
            FUN16(&VAR51.VAR39, VAR2, "");
            FUN16(&VAR51.VAR32, VAR2, "");
            FUN16(&VAR51.VAR41, VAR2, "");
            FUN16(&VAR51.VAR48, VAR2, "");
            FUN16(&VAR51.VAR42, VAR2, "");
            return;
        case 4:
            FUN3(VAR2, VAR52, &VAR4);
            if (VAR4)
            {
                FUN4("", FUN5(VAR4));
                FUN6(1);
            }
            FUN16(&VAR53.VAR54, VAR2, "");
            FUN16(&VAR53.VAR39, VAR2, "");
            FUN16(&VAR53.VAR32, VAR2, "");
            FUN16(&VAR53.VAR41, VAR2, "");
            FUN16(&VAR53.VAR48, VAR2, "");
            FUN16(&VAR53.VAR55, VAR2, "");
            return;
        case 17:
            FUN3(VAR2, VAR56, &VAR4);
            if (VAR4)
            {
                FUN4("", FUN5(VAR4));
                FUN6(1);
            }
            FUN16(&VAR57.VAR58, VAR2, "");
            FUN16(&VAR57.VAR59, VAR2, "");
            FUN16(&VAR57.VAR39, VAR2, "");
            FUN16(&VAR57.VAR41, VAR2, "");
            FUN16(&VAR57.VAR48, VAR2, "");
            FUN16(&VAR57.VAR55, VAR2, "");
            return;
        default:
            FUN4("", VAR16);
            FUN6(1);
        }
    }
    FUN4("");
    FUN6(1);
}