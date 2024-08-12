static void *FUN1(hwaddr VAR1, hwaddr VAR2, hwaddr VAR3, bool VAR4, const char *VAR5, uint32_t VAR6)
{
    void *VAR7;
    uint32_t VAR8 = FUN2(VAR1);
    uint32_t VAR9 = FUN2(VAR1 + VAR2);
    VAR10 *VAR11 = FUN3(256);
    VAR10 *VAR12 = FUN3(256);
    uint32_t VAR13[] = {FUN2(0x4), FUN2(0x4)};
    uint32_t VAR14[] = {0, FUN2(VAR15)};
    unsigned char VAR16[] = {0x0, 0x0, 0x0, 0x0, 0x0, 0x80};
    char *VAR17;
    FUN4(VAR11, "");
    FUN4(VAR11, "");
    FUN4(VAR11, "");
    FUN4(VAR11, "");
    FUN4(VAR11, "");
    FUN4(VAR11, "");
    FUN4(VAR11, "");
    FUN4(VAR11, "");
    FUN4(VAR11, "");
    FUN4(VAR11, "");
    FUN4(VAR11, "");
    FUN4(VAR11, "");
    FUN4(VAR12, "");
    VAR7 = FUN5(VAR18);
    FUN6((FUN7(VAR7, VAR18)));
    if (VAR3)
    {
        FUN6((FUN8(VAR7, VAR19, VAR3)));
    }
    if (VAR2)
    {
        FUN6((FUN8(VAR7, VAR1, VAR2)));
    }
    FUN6((FUN9(VAR7)));
    FUN6((FUN10(VAR7, "")));
    FUN6((FUN11(VAR7, "", "")));
    FUN6((FUN11(VAR7, "", "")));
    FUN6((FUN11(VAR7, "", "")));
    if (FUN12(&VAR17))
    {
        FUN6((FUN11(VAR7, "", VAR17)));
        FUN13(VAR17);
    }
    if (FUN14(&VAR17))
    {
        FUN6((FUN11(VAR7, "", VAR17)));
        FUN13(VAR17);
    }
    VAR17 = FUN15(&VAR20);
    FUN6((FUN11(VAR7, "", VAR17)));
    if (VAR21)
    {
        FUN6((FUN11(VAR7, "", VAR17)));
    }
    FUN13(VAR17);
    if (FUN16())
    {
        FUN6((FUN11(VAR7, "", FUN16())));
    }
    FUN6((FUN17(VAR7, "", 0x2)));
    FUN6((FUN17(VAR7, "", 0x2)));
    FUN6((FUN10(VAR7, "")));
    FUN6((FUN18(VAR7, "", VAR16, sizeof(VAR16))));
    FUN6((FUN11(VAR7, "", VAR5)));
    FUN6((FUN18(VAR7, "", &VAR8, sizeof(VAR8))));
    FUN6((FUN18(VAR7, "", &VAR9, sizeof(VAR9))));
    if (VAR3)
    {
        uint64_t VAR22[2] = {FUN19(VAR19), FUN19(VAR3)};
        FUN6((FUN18(VAR7, "", &VAR22, sizeof(VAR22))));
        if (VAR4)
        {
            FUN6((FUN18(VAR7, "", NULL, 0)));
        }
    }
    if (VAR23)
    {
        FUN6((FUN17(VAR7, "", VAR23)));
    }
    FUN6((FUN17(VAR7, "", VAR24)));
    FUN6((FUN17(VAR7, "", VAR25)));
    FUN6((FUN17(VAR7, "", VAR26)));
    FUN6((FUN20(VAR7)));
    FUN6((FUN10(VAR7, "")));
    if (!FUN21() || FUN22())
    {
        FUN4(VAR11, "");
    }
    FUN6((FUN18(VAR7, "", VAR11->VAR27, VAR11->VAR28)));
    FUN23(VAR11, VAR29);
    FUN6((FUN18(VAR7, "", VAR12->VAR27, VAR12->VAR28)));
    FUN23(VAR12, VAR29);
    FUN6((FUN18(VAR7, "", VAR13, sizeof(VAR13))));
    FUN6((FUN17(VAR7, "", VAR30)));
    FUN6((FUN17(VAR7, "", VAR31)));
    if (VAR32)
    {
        FUN6((FUN18(VAR7, "", NULL, 0)));
    }
    FUN6((FUN18(VAR7, "", NULL, 0)));
    FUN6((FUN20(VAR7)));
    FUN6((FUN10(VAR7, "")));
    FUN6((FUN11(VAR7, "", "")));
    FUN6((FUN11(VAR7, "", "")));
    FUN6((FUN18(VAR7, "", NULL, 0)));
    FUN6((FUN18(VAR7, "", VAR14, sizeof(VAR14))));
    FUN6((FUN17(VAR7, "", 2)));
    FUN6((FUN17(VAR7, "", VAR33)));
    FUN6((FUN17(VAR7, "", VAR33)));
    FUN6((FUN20(VAR7)));
    FUN6((FUN10(VAR7, "")));
    FUN6((FUN11(VAR7, "", "")));
    FUN6((FUN11(VAR7, "", "")));
    FUN6((FUN17(VAR7, "", 0x1)));
    FUN6((FUN17(VAR7, "", 0x0)));
    FUN6((FUN17(VAR7, "", 0x2)));
    FUN6((FUN18(VAR7, "", NULL, 0)));
    FUN6((FUN20(VAR7)));
    FUN24(VAR7, VAR6);
    if (FUN21())
    {
        uint8_t VAR34[16];
        FUN6((FUN10(VAR7, "")));
        FUN6((FUN11(VAR7, "", "")));
        if (FUN25())
        {
            if (!FUN26(VAR35->VAR36, VAR34, sizeof(VAR34)))
            {
                FUN6((FUN18(VAR7, "", VAR34, sizeof(VAR34))));
            }
        }
        FUN6((FUN20(VAR7)));
    }
    FUN6((FUN20(VAR7)));
    FUN6((FUN27(VAR7)));
    return VAR7;
}