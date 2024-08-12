static void FUN1(VAR1 *VAR2, int VAR3)
{
    struct VAR4 *VAR5 = NULL, *VAR6 = NULL, *VAR7 = NULL, *VAR8 = NULL;
    VAR9 *VAR10;
    VAR11 *VAR12;
    VAR13 *VAR14;
    int VAR15, VAR16, VAR17, VAR18 = 0, VAR19;
    VAR20 *VAR21;
    uint32_t VAR22;
    uint16_t VAR23, VAR24;
    VAR25 *VAR26 = NULL;
    if (!FUN2(VAR2, VAR27, VAR28) || !FUN3(VAR2) || VAR3 != 4 || &VAR2->VAR29 != FUN4(FUN5(&VAR2->VAR29), 0, FUN6(0x2, 0)))
    {
        return;
    }
    VAR14 = FUN4(FUN5(&VAR2->VAR29), 0, FUN6(0x1f, 0));
    if (VAR14 && !FUN7(FUN8(VAR14), ""))
    {
        FUN9(""
                     "",
                     VAR2->VAR30.VAR31);
        return;
    }
    VAR19 = FUN10(VAR2);
    if (VAR19 != 6 && VAR19 != 8)
    {
        FUN9(""
                     "",
                     VAR2->VAR30.VAR31);
        return;
    }
    VAR16 = FUN11(&VAR2->VAR30, VAR32, &VAR5);
    if ((VAR16 || !VAR5->VAR33) && !VAR2->VAR29.VAR34)
    {
        FUN9("", VAR2->VAR30.VAR31);
        goto VAR35;
    }
    if (VAR2->VAR29.VAR36.VAR37)
    {
        FUN9(""
                     "",
                     VAR2->VAR30.VAR31);
        VAR2->VAR38 = true;
        goto VAR35;
    }
    VAR16 = FUN12(&VAR2->VAR30, VAR39 | VAR27, VAR40, &VAR6);
    if (VAR16)
    {
        FUN9(""
                     "",
                     VAR2->VAR30.VAR31);
        goto VAR35;
    }
    VAR16 = FUN12(&VAR2->VAR30, VAR39 | VAR27, VAR41, &VAR7);
    if (VAR16)
    {
        FUN9(""
                     "",
                     VAR2->VAR30.VAR31);
        goto VAR35;
    }
    VAR16 = FUN12(&VAR2->VAR30, VAR39 | VAR27, VAR42, &VAR8);
    if (VAR16)
    {
        FUN9(""
                     "",
                     VAR2->VAR30.VAR31);
        goto VAR35;
    }
    VAR22 = FUN13(&VAR2->VAR29, VAR43, 4);
    if (!(VAR22 & 0x2) && !VAR2->VAR44 && FUN14(VAR2, &VAR26))
    {
        FUN15(VAR26, VAR45, VAR2->VAR30.VAR31);
        FUN9(""
                     "",
                     VAR2->VAR30.VAR31);
        goto VAR35;
    }
    VAR16 = FUN16(VAR2, VAR8);
    if (VAR16)
    {
        FUN9(""
                     "",
                     VAR2->VAR30.VAR31);
        goto VAR35;
    }
    VAR16 = FUN17(VAR2, VAR7);
    if (VAR16)
    {
        FUN9(""
                     "",
                     VAR2->VAR30.VAR31);
        goto VAR35;
    }
    VAR16 = FUN18(VAR2, VAR6, &VAR26);
    if (VAR16)
    {
        FUN19(&VAR26, "");
        FUN15(VAR26, VAR45, VAR2->VAR30.VAR31);
        goto VAR35;
    }
    VAR10 = FUN20(sizeof(*VAR10));
    VAR10->VAR46 = FUN21(VAR47, 2);
    VAR10->VAR48 = 2;
    VAR12 = VAR10->VAR49 = FUN20(sizeof(*VAR12));
    VAR12->VAR2 = VAR2;
    VAR12->VAR50 = ~0;
    VAR12->VAR51 = FUN13(&VAR2->VAR29, VAR52, 4);
    VAR12->VAR51 &= ~((1 << 20) - 1);
    FUN22(&VAR10->VAR46[0], FUN8(VAR2), &VAR53, VAR12, "", 4);
    FUN23(VAR2->VAR54[VAR3].VAR55.VAR46, 0, &VAR10->VAR46[0], 1);
    FUN22(&VAR10->VAR46[1], FUN8(VAR2), &VAR56, VAR12, "", 4);
    FUN23(VAR2->VAR54[VAR3].VAR55.VAR46, 4, &VAR10->VAR46[1], 1);
    FUN24(&VAR2->VAR54[VAR3].VAR57, VAR10, VAR58);
    VAR17 = (VAR22 >> (VAR19 < 8 ? 8 : 6)) & 0x3;
    if (VAR19 > 6)
    {
        VAR17 = 1 << VAR17;
    }
    VAR22 &= ~((VAR19 < 8 ? 0x1f : 0xff) << (VAR19 < 8 ? 3 : 8));
    if (VAR2->VAR59)
    {
        if (VAR2->VAR59 <= 0x10)
        {
            VAR18 = VAR2->VAR59 * 32;
            VAR22 |= VAR2->VAR59 << (VAR19 < 8 ? 3 : 8);
        }
        else
        {
            FUN9("", VAR2->VAR59);
            VAR2->VAR59 = 0;
        }
    }
    VAR21 = FUN25(sizeof(*VAR21));
    *VAR21 = FUN26((VAR17 + VAR18) * 1024 * 1024);
    FUN27(FUN28(), "", VAR21, sizeof(*VAR21));
    FUN29(VAR2->VAR29.VAR60 + VAR43, VAR22);
    FUN29(VAR2->VAR29.VAR61 + VAR43, 0);
    FUN29(VAR2->VAR62 + VAR43, ~0);
    FUN29(VAR2->VAR29.VAR60 + VAR52, 0);
    FUN29(VAR2->VAR29.VAR61 + VAR52, ~0);
    FUN29(VAR2->VAR62 + VAR52, ~0);
    if (pread(VAR2->VAR30.VAR63, &VAR23, sizeof(VAR23), VAR2->VAR64 + VAR65) != sizeof(VAR23))
    {
        FUN9("", VAR2->VAR30.VAR31);
    }
    VAR24 = VAR23 | VAR66;
    if (FUN30(VAR2->VAR30.VAR63, &VAR24, sizeof(VAR24), VAR2->VAR64 + VAR65) != sizeof(VAR24))
    {
        FUN9("", VAR2->VAR30.VAR31);
    }
    for (VAR15 = 1; VAR15 < FUN31(VAR2); VAR15 += 4)
    {
        FUN32(&VAR2->VAR54[4].VAR55, 0, VAR15, 4);
        FUN32(&VAR2->VAR54[4].VAR55, 4, 0, 4);
    }
    if (FUN30(VAR2->VAR30.VAR63, &VAR23, sizeof(VAR23), VAR2->VAR64 + VAR65) != sizeof(VAR23))
    {
        FUN9("", VAR2->VAR30.VAR31);
    }
    FUN33(VAR2->VAR30.VAR31, VAR17 + VAR18);
VAR35:
    FUN34(VAR5);
    FUN34(VAR6);
    FUN34(VAR7);
    FUN34(VAR8);
}