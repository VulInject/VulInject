static int FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    VAR5 *VAR6 = FUN2(VAR2);
    VAR7 *VAR8 = FUN3(VAR6);
    VAR9 *VAR10 = FUN4(VAR2);
    struct mfi_ctrl_info VAR11;
    size_t VAR12 = sizeof(VAR11);
    VAR13 *VAR14;
    int VAR15 = 0;
    memset(&VAR11, 0x0, VAR4->VAR16);
    if (VAR4->VAR16 < VAR12)
    {
        FUN5(VAR4->VAR17, VAR4->VAR16, VAR12);
        return VAR18;
    }
    VAR11.VAR19.VAR20 = FUN6(VAR8->VAR21);
    VAR11.VAR19.VAR22 = FUN6(VAR8->VAR23);
    VAR11.VAR19.VAR24 = FUN6(VAR8->VAR25);
    VAR11.VAR19.VAR26 = FUN6(VAR8->VAR27);
    VAR11.VAR28.VAR29 = VAR30;
    VAR11.VAR22.VAR29 = VAR31;
    VAR11.VAR22.VAR32 = 8;
    FUN7(VAR14, &VAR2->VAR33.VAR34.VAR35, VAR36)
    {
        VAR37 *VAR38 = FUN8(VAR37, VAR39, VAR14->VAR40);
        uint16_t VAR41;
        if (VAR15 < 8)
        {
            VAR41 = ((VAR38->VAR42 & 0xFF) << 8) | (VAR38->VAR43 & 0xFF);
            VAR11.VAR22.VAR44[VAR15] = FUN9(FUN10(VAR41));
        }
        VAR15++;
    }
    memcpy(VAR11.VAR45, VAR10->VAR45, 24);
    snprintf(VAR11.VAR46, 32, "", VAR2->VAR47);
    snprintf(VAR11.VAR48, 0x60, "", FUN11());
    memcpy(VAR11.VAR49[0].VAR50, "", 3);
    snprintf(VAR11.VAR49[0].VAR51, 10, "", VAR10->VAR52);
    memcpy(VAR11.VAR49[0].VAR53, "", 11);
    memcpy(VAR11.VAR49[0].VAR54, "", 8);
    VAR11.VAR55 = 1;
    if (VAR6->VAR56)
    {
        uint8_t VAR57[32];
        VAR58 *VAR59;
        VAR59 = FUN12(&VAR6->VAR60);
        memcpy(VAR57, VAR59 + 0x41, 31);
        memcpy(VAR11.VAR49[1].VAR50, "", 4);
        memcpy(VAR11.VAR49[1].VAR51, VAR57, strlen((const char *)VAR57));
        VAR11.VAR55++;
    }
    VAR11.VAR61 = FUN13(FUN14());
    VAR11.VAR62 = 32;
    VAR11.VAR63 = 8;
    VAR11.VAR64 = VAR65;
    VAR11.VAR66 = VAR67;
    VAR11.VAR68 = FUN6(VAR2->VAR69);
    VAR11.VAR70 = FUN6(VAR2->VAR71);
    VAR11.VAR72 = FUN13(VAR73);
    if (!FUN15(VAR2))
        VAR11.VAR74 = FUN6(VAR15);
    VAR11.VAR75 = FUN6(VAR15);
    VAR11.VAR76 = FUN6(VAR15);
    VAR11.VAR77 = FUN13(VAR78 | VAR79 | VAR80);
    VAR11.VAR81 = FUN6(512);
    VAR11.VAR82 = FUN6(32);
    VAR11.VAR83 = FUN6(16);
    VAR11.VAR84 = FUN13(VAR85);
    VAR11.VAR86 = FUN13(VAR87 | VAR88 | VAR89);
    VAR11.VAR90 = FUN13(VAR91 | VAR92 | VAR93 | VAR94 | VAR95);
    VAR11.VAR96 = FUN6(VAR2->VAR71);
    VAR11.VAR97.VAR98 = 3;
    VAR11.VAR97.VAR99 = FUN16(VAR73 + 1);
    VAR11.VAR100.VAR101 = FUN6(300);
    VAR11.VAR100.VAR102 = FUN6(16);
    VAR11.VAR100.VAR103 = FUN6(50);
    VAR11.VAR100.VAR104 = 30;
    VAR11.VAR100.VAR105 = 30;
    VAR11.VAR100.VAR106 = 30;
    VAR11.VAR100.VAR107 = 30;
    VAR11.VAR100.VAR108 = 30;
    VAR11.VAR100.VAR109 = 4;
    VAR11.VAR100.VAR110 = 2;
    VAR11.VAR100.VAR111 = 6;
    VAR11.VAR100.VAR112 = 15;
    VAR11.VAR100.VAR113 = FUN6(1440);
    VAR11.VAR100.VAR114 = 1;
    VAR11.VAR100.VAR115 = FUN13(VAR116);
    VAR11.VAR117 = FUN13(VAR118 | VAR119);
    VAR11.VAR120 = FUN13(VAR121 | VAR122 | VAR123);
    VAR4->VAR16 -= FUN17((VAR58 *)&VAR11, VAR12, &VAR4->VAR124);
    return VAR125;
}