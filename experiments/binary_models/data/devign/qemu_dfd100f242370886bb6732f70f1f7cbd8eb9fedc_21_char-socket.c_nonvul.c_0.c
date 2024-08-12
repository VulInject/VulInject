static void FUN1(VAR1 *VAR2, VAR3 *VAR4, VAR5 **VAR6)
{
    bool VAR7 = FUN2(VAR2, "", false);
    bool VAR8 = VAR7 && FUN2(VAR2, "", true);
    bool VAR9 = FUN2(VAR2, "", false);
    bool VAR10 = FUN2(VAR2, "", false);
    bool VAR11 = !FUN2(VAR2, "", true);
    int64_t VAR12 = FUN3(VAR2, "", 0);
    const char *VAR13 = FUN4(VAR2, "");
    const char *VAR14 = FUN4(VAR2, "");
    const char *VAR15 = FUN4(VAR2, "");
    const char *VAR16 = FUN4(VAR2, "");
    VAR17 *VAR18;
    VAR19 *VAR20;
    VAR4->VAR21 = VAR22;
    if (!VAR13)
    {
        if (!VAR14)
        {
            FUN5(VAR6, "");
            return;
        }
        if (!VAR15)
        {
            FUN5(VAR6, "");
            return;
        }
    }
    else
    {
        if (VAR16)
        {
            FUN5(VAR6, "");
            return;
        }
    }
    VAR20 = VAR4->VAR23.socket.VAR24 = FUN6(VAR19, 1);
    FUN7(VAR2, FUN8(VAR20));
    VAR20->VAR25 = true;
    VAR20->VAR26 = VAR11;
    VAR20->VAR27 = true;
    VAR20->VAR28 = VAR7;
    VAR20->VAR29 = true;
    VAR20->VAR30 = VAR9;
    VAR20->VAR31 = true;
    VAR20->VAR32 = VAR10;
    VAR20->VAR33 = true;
    VAR20->VAR34 = VAR8;
    VAR20->VAR35 = true;
    VAR20->VAR12 = VAR12;
    VAR20->VAR16 = FUN9(VAR16);
    VAR18 = FUN6(VAR17, 1);
    if (VAR13)
    {
        VAR36 *VAR37;
        VAR18->VAR21 = VAR38;
        VAR37 = VAR18->VAR23.VAR37.VAR24 = FUN6(VAR36, 1);
        VAR37->VAR13 = FUN9(VAR13);
    }
    else
    {
        VAR18->VAR21 = VAR39;
        VAR18->VAR23.VAR40.VAR24 = FUN10(VAR41, 1);
        *VAR18->VAR23.VAR40.VAR24 = (VAR41){
            .VAR14 = FUN9(VAR14),
            .VAR15 = FUN9(VAR15),
            .VAR42 = FUN4(VAR2, ""),
            .VAR43 = FUN3(VAR2, "", 0),
            .VAR44 = FUN4(VAR2, ""),
            .VAR45 = FUN2(VAR2, "", 0),
            .VAR46 = FUN4(VAR2, ""),
            .VAR47 = FUN2(VAR2, "", 0),
        };
    }
    VAR20->VAR18 = VAR18;
}