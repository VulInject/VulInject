static int FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    VAR5 *VAR6 = VAR2->VAR7;
    VAR8 *VAR9 = (VAR8 *)VAR6->VAR10->VAR11;
    VAR12 *VAR13 = NULL;
    VAR14 *VAR15 = NULL;
    int VAR16;
    MppFrame VAR17 = NULL;
    MppBuffer VAR18 = NULL;
    VAR19 *VAR20 = NULL;
    VAR21 *VAR22 = NULL;
    int VAR23 = 0;
    int VAR24;
    MppFrameFormat VAR25;
    uint32_t VAR26;
VAR27:
    VAR16 = VAR9->VAR28->FUN2(VAR9->VAR29, &VAR17);
    if (VAR16 != VAR30 && VAR16 != VAR31 && !VAR9->VAR32)
    {
        if (VAR23 < 5)
        {
            FUN3(VAR2, VAR33, "", VAR16, VAR23);
            FUN4(10000);
            VAR23++;
            goto VAR27;
        }
        else
        {
            FUN3(VAR2, VAR34, "", VAR16);
            goto VAR35;
        }
    }
    if (VAR17)
    {
        if (FUN5(VAR17))
        {
            VAR36 *VAR37;
            FUN3(VAR2, VAR38, "", (int)FUN6(VAR17), (int)FUN7(VAR17), (int)FUN8(VAR17));
            VAR2->VAR39 = FUN6(VAR17);
            VAR2->VAR40 = FUN7(VAR17);
            VAR9->VAR28->FUN9(VAR9->VAR29, VAR41, NULL);
            VAR9->VAR32 = 1;
            FUN10(&VAR9->VAR42);
            VAR9->VAR42 = FUN11(VAR9->VAR43);
            if (!VAR9->VAR42)
            {
                VAR16 = FUN12(VAR44);
                goto VAR35;
            }
            VAR25 = FUN8(VAR17);
            VAR26 = FUN13(VAR25);
            VAR37 = (VAR36 *)VAR9->VAR42->VAR11;
            VAR37->VAR45 = VAR46;
            VAR37->VAR47 = VAR26 == VAR48 ? VAR49 : VAR50;
            VAR37->VAR39 = VAR2->VAR39;
            VAR37->VAR40 = VAR2->VAR40;
            VAR16 = FUN14(VAR9->VAR42);
            if (VAR16 < 0)
                goto VAR35;
            VAR16 = FUN12(VAR51);
            goto VAR35;
        }
        else if (FUN15(VAR17))
        {
            FUN3(VAR2, VAR33, "");
            VAR9->VAR52 = 1;
            VAR16 = VAR53;
            goto VAR35;
        }
        else if (FUN16(VAR17))
        {
            FUN3(VAR2, VAR33, "");
            VAR16 = FUN12(VAR51);
            goto VAR35;
        }
        else if (FUN17(VAR17))
        {
            FUN3(VAR2, VAR34, "");
            VAR16 = VAR54;
            goto VAR35;
        }
        FUN3(VAR2, VAR33, "");
        VAR4->VAR45 = VAR46;
        VAR4->VAR39 = FUN6(VAR17);
        VAR4->VAR40 = FUN7(VAR17);
        VAR4->VAR55 = FUN18(VAR17);
        VAR4->VAR56 = FUN19(VAR17);
        VAR4->VAR57 = FUN20(VAR17);
        VAR4->VAR58 = FUN21(VAR17);
        VAR4->VAR59 = FUN22(VAR17);
        VAR24 = FUN23(VAR17);
        VAR4->VAR60 = ((VAR24 & VAR61) == VAR62);
        VAR4->VAR63 = ((VAR24 & VAR61) == VAR64);
        VAR25 = FUN8(VAR17);
        VAR26 = FUN13(VAR25);
        VAR18 = FUN24(VAR17);
        if (VAR18)
        {
            VAR20 = FUN25(sizeof(VAR19));
            if (!VAR20)
            {
                VAR16 = FUN12(VAR44);
                goto VAR35;
            }
            VAR20->VAR65 = 1;
            VAR20->VAR66[0].VAR67 = FUN26(VAR18);
            VAR20->VAR66[0].VAR68 = FUN27(VAR18);
            VAR20->VAR69 = 1;
            VAR22 = &VAR20->VAR70[0];
            VAR22->VAR45 = VAR26;
            VAR22->VAR71 = 2;
            VAR22->VAR72[0].VAR73 = 0;
            VAR22->VAR72[0].VAR74 = 0;
            VAR22->VAR72[0].VAR75 = FUN28(VAR17);
            VAR22->VAR72[1].VAR73 = 0;
            VAR22->VAR72[1].VAR74 = VAR22->VAR72[0].VAR75 * FUN29(VAR17);
            VAR22->VAR72[1].VAR75 = VAR22->VAR72[0].VAR75;
            VAR15 = FUN30(sizeof(*VAR13));
            if (!VAR15)
            {
                VAR16 = FUN12(VAR44);
                goto VAR35;
            }
            VAR13 = (VAR12 *)VAR15->VAR11;
            VAR13->VAR10 = FUN31(VAR6->VAR10);
            VAR13->VAR4 = VAR17;
            VAR4->VAR11[0] = (VAR76 *)VAR20;
            VAR4->VAR77[0] = FUN32((VAR76 *)VAR20, sizeof(*VAR20), VAR78, VAR15, VAR79);
            if (!VAR4->VAR77[0])
            {
                VAR16 = FUN12(VAR44);
                goto VAR35;
            }
            VAR4->VAR80 = FUN31(VAR9->VAR42);
            if (!VAR4->VAR80)
            {
                VAR16 = FUN12(VAR44);
                goto VAR35;
            }
            VAR9->VAR32 = 0;
            return 0;
        }
        else
        {
            FUN3(VAR2, VAR34, "", VAR16);
            FUN33(&VAR17);
        }
    }
    else if (VAR9->VAR52)
    {
        return VAR53;
    }
    else if (VAR16 == VAR31)
    {
        FUN3(VAR2, VAR33, "");
    }
    return FUN12(VAR51);
VAR35:
    if (VAR17)
        FUN33(&VAR17);
    if (VAR13)
        FUN10(&VAR13->VAR10);
    if (VAR15)
        FUN10(&VAR15);
    if (VAR20)
        FUN34(VAR20);
    return VAR16;
}