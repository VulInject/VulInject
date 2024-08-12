static int FUN1(VAR1 *VAR2, const char *VAR3, const char *VAR4)
{
    VAR5 *VAR6;
    VAR7 *VAR8 = NULL;
    int VAR9, VAR10, VAR11;
    int64_t VAR12;
    uint8_t VAR13[128];
    VAR14 **VAR15;
    int VAR16;
    if (VAR2->VAR17)
    {
        if (!(VAR8 = FUN2(VAR2->VAR17)))
        {
            FUN3(NULL, VAR18, "", VAR2->VAR17);
            FUN4(1);
        }
    }
    if (!strcmp(VAR4, ""))
        VAR4 = "";
    VAR19 |= !FUN5(VAR4, "", 5) || !strcmp(VAR4, "");
    VAR6 = FUN6();
    if (!VAR6)
    {
        FUN7(VAR4, FUN8(VAR20));
        FUN4(1);
    }
    if (VAR2->VAR21)
    {
        snprintf(VAR13, sizeof(VAR13), "", VAR2->VAR22[VAR2->VAR21 - 1].VAR23.VAR10);
        FUN9(&VAR24, "", VAR13, 0);
    }
    if (VAR2->VAR25)
    {
        snprintf(VAR13, sizeof(VAR13), "", VAR2->VAR26[VAR2->VAR25 - 1].VAR23.VAR10);
        FUN9(&VAR24, "", VAR13, 0);
    }
    if (VAR2->VAR27)
    {
        FUN9(&VAR24, "", VAR2->VAR28[VAR2->VAR27 - 1].VAR23.VAR29, 0);
    }
    if (VAR2->VAR30)
    {
        FUN9(&VAR24, "", VAR2->VAR31[VAR2->VAR30 - 1].VAR23.VAR29, 0);
    }
    if (VAR2->VAR32)
        FUN9(&VAR24, "", VAR2->VAR33[VAR2->VAR32 - 1].VAR23.VAR29, 0);
    VAR6->VAR34 = VAR35 ? FUN10(VAR35, VAR36, 0)->VAR37 : VAR38;
    VAR6->VAR39 = VAR40 ? FUN10(VAR40, VAR41, 0)->VAR37 : VAR38;
    VAR6->VAR42 = VAR43 ? FUN10(VAR43, VAR44, 0)->VAR37 : VAR38;
    VAR6->VAR45 |= VAR46;
    VAR6->VAR47 = VAR48;
    if (VAR49)
    {
        FUN3(NULL, VAR50, ""
                                     "");
        VAR6->VAR49 = VAR49;
    }
    VAR9 = FUN11(&VAR6, VAR4, VAR8, &VAR24);
    if (VAR9 < 0)
    {
        FUN7(VAR4, VAR9);
        FUN4(1);
    }
    FUN12(VAR24);
    for (VAR10 = 0; VAR10 < VAR6->VAR51; VAR10++)
        FUN13(VAR2, VAR6, VAR6->VAR52[VAR10]);
    VAR15 = FUN14(VAR6, VAR53);
    VAR16 = VAR6->VAR51;
    VAR11 = FUN15(VAR6, VAR15);
    if (VAR11 < 0)
    {
        FUN3(NULL, VAR18, "", VAR4);
        FUN16(VAR6);
        FUN4(1);
    }
    VAR12 = VAR2->VAR54;
    if (VAR6->VAR54 != VAR55)
        VAR12 += VAR6->VAR54;
    if (VAR2->VAR54 != 0)
    {
        VAR11 = FUN17(VAR6, -1, VAR12, VAR56);
        if (VAR11 < 0)
        {
            FUN3(NULL, VAR50, "", VAR4, (double)VAR12 / VAR57);
        }
    }
    FUN18(VAR2, VAR6);
    FUN19(VAR6, VAR58, VAR4, 0);
    VAR59 = FUN20(VAR59, sizeof(*VAR59), &VAR58, VAR58 + 1);
    VAR59[VAR58 - 1].VAR60 = VAR6;
    VAR59[VAR58 - 1].VAR61 = VAR62 - VAR6->VAR51;
    VAR59[VAR58 - 1].VAR63 = VAR2->VAR64 - (VAR65 ? 0 : VAR12);
    VAR59[VAR58 - 1].VAR51 = VAR6->VAR51;
    VAR59[VAR58 - 1].VAR66 = VAR2->VAR66;
    for (VAR10 = 0; VAR10 < VAR2->VAR67; VAR10++)
    {
        int VAR68;
        for (VAR68 = 0; VAR68 < VAR6->VAR51; VAR68++)
        {
            VAR69 *VAR70 = VAR6->VAR52[VAR68];
            if (FUN21(VAR6, VAR70, VAR2->VAR71[VAR10].VAR72) == 1)
                FUN22(VAR70, VAR2->VAR71[VAR10].VAR23.VAR29);
        }
    }
    for (VAR10 = 0; VAR10 < VAR16; VAR10++)
        FUN23(&VAR15[VAR10]);
    FUN24(&VAR15);
    FUN25(VAR2, 1);
    return 0;
}