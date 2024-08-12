static int FUN1(VAR1 *VAR2, VAR3 *VAR4, int *VAR5, VAR6 *VAR7)
{
    VAR8 *VAR9, *VAR10 = NULL;
    void *VAR11 = NULL;
    int VAR12, VAR13 = 0;
    float VAR14;
    int VAR15 = 1;
    if (!VAR2->VAR9 && !(VAR2->VAR9 = FUN2()))
        return FUN3(VAR16);
    else
        FUN4(VAR2->VAR9);
    VAR9 = VAR2->VAR9;
    VAR4->VAR17 = *VAR7;
    VAR4->VAR18 = VAR2->VAR19;
    *VAR7 = VAR20;
    VAR13 = FUN5(VAR2->VAR21->VAR22, VAR9, VAR5, VAR4);
    if (VAR13 < 0)
        return VAR13;
    VAR14 = VAR23 ? VAR9->VAR14 : 0;
    if (!*VAR5)
    {
        return VAR13;
    }
    VAR9->VAR17 = FUN6(&VAR2->VAR24, VAR9->VAR7, VAR9->VAR25);
    VAR4->VAR26 = 0;
    FUN7(VAR2, (VAR27 *)VAR9, &VAR11);
    FUN8(VAR2);
    for (VAR12 = 0; VAR12 < VAR28; VAR12++)
    {
        VAR29 *VAR30 = &VAR31[VAR12];
        int VAR32, VAR33;
        if (!FUN9(VAR2, VAR30) || !VAR30->VAR34)
            continue;
        VAR33 = VAR30->VAR35 != VAR9->VAR36 || VAR30->VAR37 != VAR9->VAR38 || VAR30->VAR39 != VAR9->VAR40;
        if (VAR33)
        {
            FUN10(NULL, VAR41, "", VAR2->VAR42, VAR2->VAR21->VAR43, VAR30->VAR35, VAR30->VAR37, FUN11(VAR30->VAR39), VAR9->VAR36, VAR9->VAR38, FUN11(VAR9->VAR40));
            FUN12(&VAR30->VAR44);
            if (FUN13(VAR2, VAR30))
            {
                FUN10(NULL, VAR45, "");
                FUN14(1);
            }
            VAR30->VAR35 = VAR9->VAR36;
            VAR30->VAR37 = VAR9->VAR38;
            VAR30->VAR39 = VAR9->VAR40;
        }
        if (VAR2->VAR21->VAR46.VAR47)
            VAR9->VAR46 = VAR2->VAR21->VAR46;
        if (VAR2->VAR21->VAR22->VAR22->VAR48 & VAR49)
        {
            VAR50 *VAR51 = VAR9->VAR52;
            VAR53 *VAR54 = FUN15(VAR9->VAR55, VAR9->VAR56, VAR57 | VAR58, VAR2->VAR21->VAR22->VAR36, VAR2->VAR21->VAR22->VAR38, VAR2->VAR21->VAR22->VAR59);
            FUN16(VAR54, VAR9);
            VAR54->VAR51->VAR60 = VAR51;
            VAR54->VAR51->free = VAR61;
            VAR51->VAR62++;
            FUN17(VAR30->VAR63, VAR54);
        }
        else
            FUN18(VAR30->VAR63, VAR9, VAR9->VAR17, VAR9->VAR46);
        if (!VAR2->VAR10 && !(VAR2->VAR10 = FUN2()))
        {
            FUN19(VAR11);
            return FUN3(VAR16);
        }
        else
            FUN4(VAR2->VAR10);
        VAR10 = VAR2->VAR10;
        VAR15 = FUN20(VAR30->VAR64->VAR65[0]);
        while (VAR15)
        {
            AVRational VAR66;
            FUN21(VAR30->VAR64, VAR10, &VAR30->VAR67, &VAR66);
            if (VAR30->VAR67)
                VAR10->VAR17 = FUN22(VAR30->VAR67->VAR17, VAR66, VAR68);
            if (VAR30->VAR67->VAR69 && !VAR30->VAR70)
                VAR30->VAR21->VAR22->VAR46 = VAR30->VAR67->VAR69->VAR71;
            VAR10 = VAR9;
            FUN23(VAR72[VAR30->VAR42].VAR73, VAR30, VAR2, VAR10, &VAR32, VAR23 ? VAR14 : VAR30->VAR21->VAR22->VAR74);
            if (VAR75 && VAR32)
                FUN24(VAR72[VAR30->VAR42].VAR73, VAR30, VAR32);
            VAR15 = VAR30->VAR64 && FUN20(VAR30->VAR64->VAR65[0]);
            if (VAR30->VAR67)
                FUN25(VAR30->VAR67);
        }
    }
    FUN19(VAR11);
    return VAR13;
}