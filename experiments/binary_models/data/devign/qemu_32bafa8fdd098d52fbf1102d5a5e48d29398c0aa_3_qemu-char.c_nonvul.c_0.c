static VAR1 *FUN1(const char *VAR2, VAR3 *VAR4, VAR5 *VAR6, VAR7 **VAR8)
{
    VAR1 *VAR9;
    VAR10 *VAR11;
    VAR12 *VAR13 = VAR4->VAR14.socket.VAR15;
    VAR16 *VAR17 = VAR13->VAR17;
    bool VAR18 = VAR13->VAR19 ? VAR13->VAR20 : false;
    bool VAR21 = VAR13->VAR22 ? VAR13->VAR23 : true;
    bool VAR24 = VAR13->VAR25 ? VAR13->VAR26 : false;
    bool VAR27 = VAR13->VAR28 ? VAR13->VAR29 : false;
    int64_t VAR30 = VAR13->VAR31 ? VAR13->VAR30 : 0;
    VAR32 *VAR33 = FUN2(VAR13);
    VAR34 *VAR35 = NULL;
    VAR9 = FUN3(VAR33, VAR8);
    if (!VAR9)
    {
        return NULL;
    }
    VAR11 = FUN4(VAR10, 1);
    VAR11->VAR36 = VAR17->VAR37 == VAR38;
    VAR11->VAR21 = VAR21;
    VAR11->VAR24 = VAR24;
    VAR11->VAR18 = VAR18;
    if (VAR13->VAR39)
    {
        VAR40 *VAR41;
        VAR41 = FUN5(FUN6(), VAR13->VAR39);
        if (!VAR41)
        {
            FUN7(VAR8, "", VAR13->VAR39);
            goto VAR42;
        }
        VAR11->VAR39 = (VAR43 *)FUN8(VAR41, VAR44);
        if (!VAR11->VAR39)
        {
            FUN7(VAR8, "", VAR13->VAR39);
            goto VAR42;
        }
        FUN9(FUN10(VAR11->VAR39));
        if (VAR21)
        {
            if (VAR11->VAR39->VAR45 != VAR46)
            {
                FUN7(VAR8, "", "");
                goto VAR42;
            }
        }
        else
        {
            if (VAR11->VAR39->VAR45 != VAR47)
            {
                FUN7(VAR8, "", "");
                goto VAR42;
            }
        }
    }
    FUN11(&VAR11->VAR17, VAR13->VAR17);
    VAR9->VAR48 = VAR11;
    VAR9->VAR49 = VAR50;
    VAR9->VAR51 = VAR52;
    VAR9->VAR53 = VAR54;
    VAR9->VAR55 = VAR56;
    VAR9->VAR57 = VAR58;
    VAR9->VAR59 = VAR60;
    VAR9->VAR61 = VAR62;
    VAR9->VAR63 = VAR64;
    VAR9->VAR65 = true;
    VAR9->VAR66 = FUN12("", VAR17, VAR21, VAR24);
    if (VAR21)
    {
        if (VAR24)
        {
            VAR11->VAR67 = 1;
        }
    }
    else if (VAR30 > 0)
    {
        VAR11->VAR68 = VAR30;
    }
    VAR35 = FUN13();
    if (VAR11->VAR68)
    {
        FUN14(VAR35, VAR11->VAR17, VAR69, VAR9, NULL);
    }
    else if (VAR11->VAR21)
    {
        if (FUN15(VAR35, VAR11->VAR17, VAR8) < 0)
        {
            goto VAR42;
        }
        VAR11->VAR70 = VAR35;
        if (VAR27)
        {
            fprintf(VAR71, "", VAR9->VAR66);
            FUN16(FUN17(VAR11->VAR70), VAR72, VAR9);
        }
        FUN18(FUN17(VAR11->VAR70), false, NULL);
        if (!VAR11->VAR73)
        {
            VAR11->VAR74 = FUN19(FUN17(VAR11->VAR70), VAR72, VAR75, VAR9, NULL);
        }
    }
    else
    {
        if (FUN20(VAR35, VAR11->VAR17, VAR8) < 0)
        {
            goto VAR42;
        }
        FUN21(VAR9, VAR35);
        FUN22(FUN10(VAR35));
    }
    return VAR9;
VAR42:
    if (VAR35)
    {
        FUN22(FUN10(VAR35));
    }
    if (VAR11->VAR39)
    {
        FUN22(FUN10(VAR11->VAR39));
    }
    FUN23(VAR11);
    FUN24(VAR9);
    return NULL;
}