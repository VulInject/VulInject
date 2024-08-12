static VAR1 *FUN1(const char *VAR2, VAR3 *VAR4, VAR5 *VAR6, VAR7 **VAR8)
{
    VAR1 *VAR9;
    VAR10 *VAR11;
    VAR12 *VAR13 = VAR4->VAR14.socket;
    VAR15 *VAR16 = VAR13->VAR16;
    bool VAR17 = VAR13->VAR18 ? VAR13->VAR19 : false;
    bool VAR20 = VAR13->VAR21 ? VAR13->VAR22 : true;
    bool VAR23 = VAR13->VAR24 ? VAR13->VAR25 : false;
    bool VAR26 = VAR13->VAR27 ? VAR13->VAR28 : false;
    int64_t VAR29 = VAR13->VAR30 ? VAR13->VAR29 : 0;
    VAR31 *VAR32 = FUN2(VAR4->VAR14.socket);
    VAR9 = FUN3(VAR32, VAR8);
    if (!VAR9)
    {
        return NULL;
    }
    VAR11 = FUN4(VAR10, 1);
    VAR11->VAR33 = VAR16->VAR34 == VAR35;
    VAR11->VAR20 = VAR20;
    VAR11->VAR23 = VAR23;
    VAR11->VAR17 = VAR17;
    FUN5(&VAR11->VAR16, VAR13->VAR16);
    VAR9->VAR36 = VAR11;
    VAR9->VAR37 = VAR38;
    VAR9->VAR39 = VAR40;
    VAR9->VAR41 = VAR42;
    VAR9->VAR43 = VAR44;
    VAR9->VAR45 = VAR46;
    VAR9->VAR47 = VAR48;
    VAR9->VAR49 = VAR50;
    VAR9->VAR51 = VAR52;
    VAR9->VAR53 = true;
    VAR9->VAR54 = FUN6("", VAR16, VAR20, VAR23);
    if (VAR20)
    {
        if (VAR23)
        {
            VAR11->VAR55 = 1;
        }
    }
    else if (VAR29 > 0)
    {
        VAR11->VAR56 = VAR29;
    }
    if (VAR11->VAR56)
    {
        FUN7(VAR9);
    }
    else if (!FUN8(VAR9, VAR8))
    {
        FUN9(VAR11);
        FUN10(VAR9);
        return NULL;
    }
    if (VAR20 && VAR26)
    {
        fprintf(VAR57, "", VAR9->VAR54);
        FUN11(FUN12(VAR11->VAR58), VAR59, VAR9);
        FUN13(FUN12(VAR11->VAR58), false, NULL);
    }
    return VAR9;
}