static int FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    VAR5 *VAR6 = VAR2->VAR7;
    VAR1 *VAR8 = VAR6->VAR9[0];
    VAR10 *VAR11 = VAR6->VAR12;
    VAR3 *VAR13 = NULL;
    VASurfaceID VAR14, VAR15;
    VAProcPipelineParameterBuffer VAR16;
    VABufferID VAR17;
    VARectangle VAR18;
    VAStatus VAR19;
    int VAR20;
    FUN2(VAR11, VAR21, "" VAR22 "", FUN3(VAR4->VAR23), VAR4->VAR24, VAR4->VAR25, VAR4->VAR26);
    if (VAR11->VAR27 == VAR28)
        return FUN4(VAR29);
    VAR14 = (VAR30)(VAR31)VAR4->VAR32[3];
    FUN2(VAR11, VAR21, "", VAR14);
    VAR13 = FUN5();
    if (!VAR13)
    {
        FUN2(VAR11, VAR33, "");
        VAR20 = FUN4(VAR34);
        goto VAR35;
    }
    VAR20 = FUN6(VAR11->VAR36, VAR13, 0);
    if (VAR20 < 0)
    {
        FUN2(VAR11, VAR33, ""
                                  "",
               VAR20);
    }
    VAR15 = (VAR30)(VAR31)VAR13->VAR32[3];
    FUN2(VAR11, VAR21, "", VAR15);
    memset(&VAR16, 0, sizeof(VAR16));
    VAR18 = (VAR37){
        .VAR38 = 0,
        .VAR39 = 0,
        .VAR24 = VAR4->VAR24,
        .VAR25 = VAR4->VAR25,
    };
    VAR16.VAR40 = VAR14;
    VAR16.VAR41 = &VAR18;
    VAR16.VAR42 = FUN7(VAR4->VAR43);
    VAR16.VAR44 = 0;
    VAR16.VAR45 = 0xff000000;
    VAR16.VAR46 = VAR16.VAR42;
    VAR16.VAR47 = 0;
    VAR16.VAR48 = VAR49;
    VAR19 = FUN8(VAR11->VAR50->VAR51, VAR11->VAR27, VAR15);
    if (VAR19 != VAR52)
    {
        FUN2(VAR11, VAR33, ""
                                  "",
               VAR19, FUN9(VAR19));
        VAR20 = FUN4(VAR53);
        goto VAR35;
    }
    VAR19 = FUN10(VAR11->VAR50->VAR51, VAR11->VAR27, VAR54, sizeof(VAR16), 1, &VAR16, &VAR17);
    if (VAR19 != VAR52)
    {
        FUN2(VAR11, VAR33, ""
                                  "",
               VAR19, FUN9(VAR19));
        VAR20 = FUN4(VAR53);
        goto VAR55;
    }
    FUN2(VAR11, VAR21, "", VAR17);
    VAR19 = FUN11(VAR11->VAR50->VAR51, VAR11->VAR27, &VAR17, 1);
    if (VAR19 != VAR52)
    {
        FUN2(VAR11, VAR33, ""
                                  "",
               VAR19, FUN9(VAR19));
        VAR20 = FUN4(VAR53);
        goto VAR55;
    }
    VAR19 = FUN12(VAR11->VAR50->VAR51, VAR11->VAR27);
    if (VAR19 != VAR52)
    {
        FUN2(VAR11, VAR33, ""
                                  "",
               VAR19, FUN9(VAR19));
        VAR20 = FUN4(VAR53);
        goto VAR56;
    }
    if (VAR11->VAR50->VAR57 & VAR58)
    {
        VAR19 = FUN13(VAR11->VAR50->VAR51, VAR17);
        if (VAR19 != VAR52)
        {
            FUN2(VAR11, VAR33, ""
                                      "",
                   VAR19, FUN9(VAR19));
        }
    }
    FUN14(VAR13, VAR4);
    FUN15(&VAR4);
    FUN2(VAR11, VAR21, "" VAR22 "", FUN3(VAR13->VAR23), VAR13->VAR24, VAR13->VAR25, VAR13->VAR26);
    return FUN16(VAR8, VAR13);
VAR55:
    FUN11(VAR11->VAR50->VAR51, VAR11->VAR27, &VAR17, 1);
VAR56:
    FUN12(VAR11->VAR50->VAR51, VAR11->VAR27);
VAR35:
    FUN15(&VAR4);
    FUN15(&VAR13);
    return VAR20;
}