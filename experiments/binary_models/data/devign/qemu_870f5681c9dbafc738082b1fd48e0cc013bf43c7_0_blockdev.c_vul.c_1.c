void FUN1(VAR1 *VAR2, VAR3 **VAR4)
{
    int VAR5 = 0;
    VAR1 *VAR6 = VAR2;
    VAR7 *VAR8, *VAR9;
    FUN2(VAR10, VAR7)
    VAR10;
    FUN3(&VAR10);
    FUN4();
    while (NULL != VAR6)
    {
        VAR11 *VAR12 = NULL;
        VAR13 *VAR14;
        VAR13 *VAR15;
        int VAR16;
        enum NewImageMode VAR17;
        const char *VAR18;
        const char *VAR19;
        const char *VAR20 = "";
        VAR12 = VAR6->VAR21;
        VAR6 = VAR6->VAR9;
        VAR8 = FUN5(sizeof(VAR7));
        FUN6(&VAR10, VAR8, VAR22);
        switch (VAR12->VAR23)
        {
        case VAR24:
            VAR19 = VAR12->VAR25->VAR19;
            if (!VAR12->VAR25->VAR26)
            {
                VAR12->VAR25->VAR17 = VAR27;
            }
            VAR18 = VAR12->VAR25->VAR28;
            if (VAR12->VAR25->VAR29)
            {
                VAR20 = VAR12->VAR25->VAR20;
            }
            VAR17 = VAR12->VAR25->VAR17;
            break;
        default:
            FUN7();
        }
        VAR15 = FUN8(VAR20);
        if (!VAR15)
        {
            FUN9(VAR4, VAR30, VAR20);
            goto VAR31;
        }
        VAR8->VAR32 = FUN10(VAR19);
        if (!VAR8->VAR32)
        {
            FUN9(VAR4, VAR33, VAR19);
            goto VAR31;
        }
        if (!FUN11(VAR8->VAR32))
        {
            FUN9(VAR4, VAR34, VAR19);
            goto VAR31;
        }
        if (FUN12(VAR8->VAR32))
        {
            FUN9(VAR4, VAR35, VAR19);
            goto VAR31;
        }
        if (!FUN13(VAR8->VAR32))
        {
            if (FUN14(VAR8->VAR32))
            {
                FUN9(VAR4, VAR36);
                goto VAR31;
            }
        }
        VAR16 = VAR8->VAR32->VAR37;
        VAR14 = FUN15(VAR18);
        if (!VAR14)
        {
            FUN9(VAR4, VAR30, VAR20);
            goto VAR31;
        }
        if (VAR17 != VAR38)
        {
            VAR5 = FUN16(VAR18, VAR20, VAR8->VAR32->VAR39, VAR8->VAR32->VAR15->VAR40, NULL, -1, VAR16);
            if (VAR5)
            {
                FUN9(VAR4, VAR41, VAR18);
                goto VAR31;
            }
        }
        VAR8->VAR42 = FUN17("");
        VAR5 = FUN18(VAR8->VAR42, VAR18, VAR16 | VAR43, VAR15);
        if (VAR5 != 0)
        {
            FUN9(VAR4, VAR41, VAR18);
            goto VAR31;
        }
    }
    FUN19(VAR8, &VAR10, VAR22) { FUN20(VAR8->VAR42, VAR8->VAR32); }
    goto VAR44;
VAR31:
    FUN19(VAR8, &VAR10, VAR22)
    {
        if (VAR8->VAR42)
        {
            FUN21(VAR8->VAR42);
        }
    }
VAR44:
    FUN22(VAR8, &VAR10, VAR22, VAR9) { FUN23(VAR8); }
    return;