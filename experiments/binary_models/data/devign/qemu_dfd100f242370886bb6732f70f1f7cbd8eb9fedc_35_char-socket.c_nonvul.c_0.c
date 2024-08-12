static void FUN1(VAR1 *VAR2, VAR3 *VAR4, bool *VAR5, VAR6 **VAR7)
{
    VAR8 *VAR9 = FUN2(VAR2);
    VAR10 *VAR11 = VAR4->VAR12.socket.VAR13;
    VAR14 *VAR15 = VAR11->VAR15;
    bool VAR16 = VAR11->VAR17 ? VAR11->VAR18 : false;
    bool VAR19 = VAR11->VAR20 ? VAR11->VAR21 : true;
    bool VAR22 = VAR11->VAR23 ? VAR11->VAR24 : false;
    bool VAR25 = VAR11->VAR26 ? VAR11->VAR27 : false;
    bool VAR28 = VAR11->VAR29 ? VAR11->VAR30 : false;
    int64_t VAR31 = VAR11->VAR32 ? VAR11->VAR31 : 0;
    VAR33 *VAR34 = NULL;
    VAR9->VAR19 = VAR19;
    VAR9->VAR22 = VAR22;
    VAR9->VAR25 = VAR25;
    VAR9->VAR16 = VAR16;
    if (VAR11->VAR35)
    {
        VAR36 *VAR37;
        VAR37 = FUN3(FUN4(), VAR11->VAR35);
        if (!VAR37)
        {
            FUN5(VAR7, "", VAR11->VAR35);
            goto VAR38;
        }
        VAR9->VAR35 = (VAR39 *)FUN6(VAR37, VAR40);
        if (!VAR9->VAR35)
        {
            FUN5(VAR7, "", VAR11->VAR35);
            goto VAR38;
        }
        FUN7(FUN8(VAR9->VAR35));
        if (VAR19)
        {
            if (VAR9->VAR35->VAR41 != VAR42)
            {
                FUN5(VAR7, "", "");
                goto VAR38;
            }
        }
        else
        {
            if (VAR9->VAR35->VAR41 != VAR43)
            {
                FUN5(VAR7, "", "");
                goto VAR38;
            }
        }
    }
    VAR9->VAR15 = FUN9(VAR14, VAR11->VAR15);
    FUN10(VAR2, VAR44);
    if (VAR15->VAR45 == VAR46)
    {
        FUN10(VAR2, VAR47);
    }
    *VAR5 = false;
    FUN11(VAR9);
    if (VAR19)
    {
        if (VAR22 || VAR25)
        {
            VAR9->VAR48 = 1;
        }
    }
    else if (VAR31 > 0)
    {
        VAR9->VAR49 = VAR31;
    }
    if (VAR9->VAR49)
    {
        VAR34 = FUN12();
        FUN13(VAR2, VAR34);
        FUN14(VAR34, VAR9->VAR15, VAR50, VAR2, NULL);
    }
    else
    {
        if (VAR9->VAR19)
        {
            char *VAR51;
            VAR34 = FUN12();
            VAR51 = FUN15("", VAR2->VAR52);
            FUN16(FUN17(VAR34), VAR51);
            FUN18(VAR51);
            if (FUN19(VAR34, VAR9->VAR15, VAR7) < 0)
            {
                goto VAR38;
            }
            FUN20(VAR9->VAR15);
            VAR9->VAR15 = FUN21(VAR34->VAR53, VAR7);
            FUN11(VAR9);
            VAR9->VAR54 = VAR34;
            if (VAR28 && FUN22(VAR2, VAR7) < 0)
            {
                return;
            }
            if (!VAR9->VAR55)
            {
                VAR9->VAR56 = FUN23(FUN17(VAR9->VAR54), VAR57, VAR58, VAR2, NULL);
            }
        }
        else if (FUN22(VAR2, VAR7) < 0)
        {
            goto VAR38;
        }
    }
    return;
VAR38:
    if (VAR34)
    {
        FUN24(FUN8(VAR34));
    }
}