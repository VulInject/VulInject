static void *FUN1(hwaddr VAR1, hwaddr VAR2, hwaddr VAR3, bool VAR4, const char *VAR5, const char *VAR6, uint32_t VAR7)
{
    void *VAR8;
    VAR9 *VAR10;
    uint32_t VAR11 = FUN2(VAR1);
    uint32_t VAR12 = FUN2(VAR1 + VAR2);
    VAR13 *VAR14 = FUN3(256);
    VAR13 *VAR15 = FUN3(256);
    uint32_t VAR16[] = {FUN2(0x4), FUN2(0x4)};
    uint32_t VAR17[] = {0, FUN2(VAR18)};
    int VAR19 = FUN4();
    unsigned char VAR20[] = {0x0, 0x0, 0x0, 0x0, 0x0, 0x80};
    VAR21 *VAR22 = FUN5(FUN6(""), NULL);
    unsigned VAR23 = VAR22 ? FUN7(VAR22, "", 0) : 0;
    uint32_t VAR24 = VAR23 ? (VAR18 / VAR23) : 1;
    FUN8(VAR14, "");
    FUN8(VAR14, "");
    FUN8(VAR14, "");
    FUN8(VAR14, "");
    FUN8(VAR14, "");
    FUN8(VAR14, "");
    FUN8(VAR14, "");
    FUN8(VAR14, "");
    FUN8(VAR14, "");
    FUN8(VAR15, "");
    VAR8 = FUN9(VAR25);
    FUN10((FUN11(VAR8, VAR25)));
    if (VAR3)
    {
        FUN10((FUN12(VAR8, VAR26, VAR3)));
    }
    if (VAR2)
    {
        FUN10((FUN12(VAR8, VAR1, VAR2)));
    }
    FUN10((FUN13(VAR8)));
    FUN10((FUN14(VAR8, "")));
    FUN10((FUN15(VAR8, "", "")));
    FUN10((FUN15(VAR8, "", "")));
    FUN10((FUN15(VAR8, "", "")));
    FUN10((FUN16(VAR8, "", 0x2)));
    FUN10((FUN16(VAR8, "", 0x2)));
    FUN10((FUN14(VAR8, "")));
    FUN10((FUN17(VAR8, "", VAR20, sizeof(VAR20))));
    FUN10((FUN15(VAR8, "", VAR6)));
    FUN10((FUN17(VAR8, "", &VAR11, sizeof(VAR11))));
    FUN10((FUN17(VAR8, "", &VAR12, sizeof(VAR12))));
    if (VAR3)
    {
        uint64_t VAR27[2] = {FUN18(VAR26), FUN18(VAR3)};
        FUN10((FUN17(VAR8, "", &VAR27, sizeof(VAR27))));
        if (VAR4)
        {
            FUN10((FUN17(VAR8, "", NULL, 0)));
        }
    }
    if (VAR5)
    {
        FUN10((FUN15(VAR8, "", VAR5)));
    }
    if (VAR28)
    {
        FUN10((FUN16(VAR8, "", VAR28)));
    }
    FUN10((FUN16(VAR8, "", VAR29)));
    FUN10((FUN16(VAR8, "", VAR30)));
    FUN10((FUN16(VAR8, "", VAR31)));
    FUN10((FUN19(VAR8)));
    FUN10((FUN14(VAR8, "")));
    FUN10((FUN16(VAR8, "", 0x1)));
    FUN10((FUN16(VAR8, "", 0x0)));
    FUN20(VAR10)
    {
        VAR32 *VAR33 = FUN21(VAR10);
        VAR34 *VAR35 = &VAR33->VAR35;
        VAR36 *VAR37 = FUN22(VAR10);
        VAR38 *VAR39 = FUN23(VAR10);
        int VAR40 = FUN24(VAR33);
        char *VAR41;
        uint32_t VAR42[] = {FUN2(28), FUN2(40), 0xffffffff, 0xffffffff};
        uint32_t VAR43 = FUN25() ? FUN26() : VAR44;
        uint32_t VAR45 = FUN25() ? FUN27() : 1000000000;
        uint32_t VAR46[64];
        size_t VAR47;
        if ((VAR40 % VAR19) != 0)
        {
            continue;
        }
        VAR41 = FUN28("", VAR37->VAR48, VAR40);
        FUN10((FUN14(VAR8, VAR41)));
        FUN29(VAR41);
        FUN10((FUN16(VAR8, "", VAR40)));
        FUN10((FUN15(VAR8, "", "")));
        FUN10((FUN16(VAR8, "", VAR35->VAR49[VAR50])));
        FUN10((FUN16(VAR8, "", VAR35->VAR51)));
        FUN10((FUN16(VAR8, "", VAR35->VAR51)));
        FUN10((FUN16(VAR8, "", VAR35->VAR52)));
        FUN10((FUN16(VAR8, "", VAR35->VAR52)));
        if (VAR39->VAR53)
        {
            FUN10((FUN16(VAR8, "", VAR39->VAR53)));
        }
        else
        {
            fprintf(VAR54, "");
        }
        if (VAR39->VAR55)
        {
            FUN10((FUN16(VAR8, "", VAR39->VAR55)));
        }
        else
        {
            fprintf(VAR54, "");
        }
        FUN10((FUN16(VAR8, "", VAR43)));
        FUN10((FUN16(VAR8, "", VAR45)));
        FUN10((FUN16(VAR8, "", VAR35->VAR56)));
        FUN10((FUN15(VAR8, "", "")));
        FUN10((FUN17(VAR8, "", NULL, 0)));
        if (VAR35->VAR57[VAR58].VAR59)
        {
            FUN10((FUN17(VAR8, "", NULL, 0)));
        }
        if (VAR35->VAR60 & VAR61)
        {
            FUN10((FUN17(VAR8, "", VAR42, sizeof(VAR42))));
        }
        if (VAR35->VAR62 & VAR63)
        {
            uint32_t VAR64 = (VAR35->VAR65 & VAR66) ? 2 : 1;
            FUN10((FUN16(VAR8, "", VAR64)));
        }
        if (VAR35->VAR65 & VAR67)
        {
            FUN10((FUN16(VAR8, "", 1)));
        }
        VAR47 = FUN30(VAR35, VAR46, sizeof(VAR46));
        if (VAR47)
        {
            FUN10((FUN17(VAR8, "", VAR46, VAR47)));
        }
        FUN10((FUN16(VAR8, "", VAR10->VAR68 / VAR24)));
        FUN10((FUN19(VAR8)));
    }
    FUN10((FUN19(VAR8)));
    FUN10((FUN14(VAR8, "")));
    if (!FUN25() || FUN31())
    {
        FUN8(VAR14, "");
    }
    FUN10((FUN17(VAR8, "", VAR14->VAR69, VAR14->VAR70)));
    FUN32(VAR14, VAR71);
    FUN10((FUN17(VAR8, "", VAR15->VAR69, VAR15->VAR70)));
    FUN32(VAR15, VAR71);
    FUN10((FUN17(VAR8, "", VAR16, sizeof(VAR16))));
    FUN10((FUN16(VAR8, "", VAR72)));
    FUN10((FUN19(VAR8)));
    FUN10((FUN14(VAR8, "")));
    FUN10((FUN15(VAR8, "", "")));
    FUN10((FUN15(VAR8, "", "")));
    FUN10((FUN17(VAR8, "", NULL, 0)));
    FUN10((FUN17(VAR8, "", VAR17, sizeof(VAR17))));
    FUN10((FUN16(VAR8, "", 2)));
    FUN10((FUN16(VAR8, "", VAR73)));
    FUN10((FUN16(VAR8, "", VAR73)));
    FUN10((FUN19(VAR8)));
    FUN10((FUN14(VAR8, "")));
    FUN10((FUN15(VAR8, "", "")));
    FUN10((FUN15(VAR8, "", "")));
    FUN10((FUN16(VAR8, "", 0x1)));
    FUN10((FUN16(VAR8, "", 0x0)));
    FUN10((FUN16(VAR8, "", 0x2)));
    FUN10((FUN17(VAR8, "", NULL, 0)));
    FUN10((FUN19(VAR8)));
    FUN33(VAR8, VAR7);
    if (FUN25())
    {
        uint8_t VAR74[16];
        FUN10((FUN14(VAR8, "")));
        FUN10((FUN15(VAR8, "", "")));
        if (FUN34())
        {
            *Older KVM versions with older guest kernels were broken with VAR75 *magic VAR76, VAR77 't allow the guest to map VAR78. FUN35 ( VAR79 -> VAR80 , VAR74 , sizeof ( VAR74 ) ) ; FUN10 ( ( FUN17 ( VAR8 , "" , VAR74 , sizeof ( VAR74 ) ) ) ) ; } FUN10 ( ( FUN19 ( VAR8 ) ) ) ; } FUN10 ( ( FUN19 ( VAR8 ) ) ) ; FUN10 ( ( FUN36 ( VAR8 ) ) ) ; return VAR8 ;