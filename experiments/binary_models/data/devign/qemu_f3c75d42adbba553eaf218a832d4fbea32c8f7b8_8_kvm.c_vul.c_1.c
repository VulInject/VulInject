int FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = FUN2(VAR2);
    VAR5 *VAR6 = &VAR4->VAR6;
    struct kvm_regs VAR7;
    struct kvm_sregs VAR8;
    uint32_t VAR9;
    int VAR10, VAR11;
    VAR11 = FUN3(VAR2, VAR12, &VAR7);
    if (VAR11 < 0)
        return VAR11;
    VAR9 = VAR7.VAR9;
    for (VAR10 = 7; VAR10 >= 0; VAR10--)
    {
        VAR6->VAR13[VAR10] = VAR9 & 15;
        VAR9 >>= 4;
    }
    VAR6->VAR14 = VAR7.VAR14;
    VAR6->VAR15 = VAR7.VAR15;
    FUN4(VAR6, VAR7.VAR16);
    VAR6->VAR17 = VAR7.VAR17;
    VAR6->VAR18 = VAR7.VAR19;
    VAR6->VAR20[VAR21] = VAR7.VAR22;
    VAR6->VAR20[VAR23] = VAR7.VAR24;
    VAR6->VAR20[VAR25] = VAR7.VAR26;
    VAR6->VAR20[VAR27] = VAR7.VAR28;
    VAR6->VAR20[VAR29] = VAR7.VAR30;
    VAR6->VAR20[VAR31] = VAR7.VAR32;
    VAR6->VAR20[VAR33] = VAR7.VAR34;
    VAR6->VAR20[VAR35] = VAR7.VAR36;
    VAR6->VAR20[VAR37] = VAR7.VAR38;
    VAR6->VAR20[VAR39] = VAR7.VAR40;
    VAR6->VAR20[VAR41] = VAR7.VAR42;
    for (VAR10 = 0; VAR10 < 32; VAR10++)
        VAR6->VAR43[VAR10] = VAR7.VAR43[VAR10];
    FUN5(VAR2);
    if (VAR44)
    {
        VAR11 = FUN3(VAR2, VAR45, &VAR8);
        if (VAR11 < 0)
        {
            return VAR11;
        }
        if (VAR8.VAR46.VAR47.VAR48 & VAR49)
        {
            VAR6->VAR20[VAR50] = VAR8.VAR46.VAR47.VAR51;
            VAR6->VAR20[VAR52] = VAR8.VAR46.VAR47.VAR53;
            VAR6->VAR20[VAR54] = VAR8.VAR46.VAR47.VAR55;
            VAR6->VAR20[VAR56] = VAR8.VAR46.VAR47.VAR57;
            VAR6->VAR20[VAR58] = VAR8.VAR46.VAR47.VAR59;
            VAR6->VAR20[VAR60] = VAR8.VAR46.VAR47.VAR61;
            VAR6->VAR20[VAR62] = VAR8.VAR46.VAR47.VAR63;
            VAR6->VAR20[VAR64] = VAR8.VAR46.VAR47.VAR65;
            VAR6->VAR20[VAR66] = VAR8.VAR46.VAR47.VAR67 & 0xffffffff;
            VAR6->VAR20[VAR68] = VAR8.VAR46.VAR47.VAR67 >> 32;
            VAR6->VAR20[VAR69] = VAR8.VAR46.VAR47.VAR70;
        }
        if (VAR8.VAR46.VAR47.VAR48 & VAR71)
        {
            VAR6->VAR20[VAR72] = VAR8.VAR46.VAR47.VAR73;
            VAR6->VAR20[VAR74] = VAR8.VAR46.VAR47.VAR75;
            VAR6->VAR20[VAR76] = VAR8.VAR46.VAR47.VAR77;
            VAR6->VAR20[VAR78] = VAR8.VAR46.VAR47.VAR79;
            VAR6->VAR20[VAR80] = VAR8.VAR46.VAR47.VAR81;
        }
        if (VAR8.VAR46.VAR47.VAR48 & VAR82)
        {
            VAR6->VAR20[VAR83] = VAR8.VAR46.VAR47.VAR84;
        }
        if (VAR8.VAR46.VAR47.VAR48 & VAR85)
        {
            VAR6->VAR20[VAR86] = VAR8.VAR46.VAR47.VAR87;
        }
        if (VAR8.VAR46.VAR47.VAR48 & VAR88)
        {
            VAR6->VAR20[VAR89] = VAR8.VAR46.VAR47.VAR90[0];
            VAR6->VAR20[VAR91] = VAR8.VAR46.VAR47.VAR90[1];
            VAR6->VAR20[VAR92] = VAR8.VAR46.VAR47.VAR90[2];
            VAR6->VAR20[VAR93] = VAR8.VAR46.VAR47.VAR90[3];
            VAR6->VAR20[VAR94] = VAR8.VAR46.VAR47.VAR90[4];
            VAR6->VAR20[VAR95] = VAR8.VAR46.VAR47.VAR90[5];
            VAR6->VAR20[VAR96] = VAR8.VAR46.VAR47.VAR90[6];
            VAR6->VAR20[VAR97] = VAR8.VAR46.VAR47.VAR90[7];
            VAR6->VAR20[VAR98] = VAR8.VAR46.VAR47.VAR90[8];
            VAR6->VAR20[VAR99] = VAR8.VAR46.VAR47.VAR90[9];
            VAR6->VAR20[VAR100] = VAR8.VAR46.VAR47.VAR90[10];
            VAR6->VAR20[VAR101] = VAR8.VAR46.VAR47.VAR90[11];
            VAR6->VAR20[VAR102] = VAR8.VAR46.VAR47.VAR90[12];
            VAR6->VAR20[VAR103] = VAR8.VAR46.VAR47.VAR90[13];
            VAR6->VAR20[VAR104] = VAR8.VAR46.VAR47.VAR90[14];
            VAR6->VAR20[VAR105] = VAR8.VAR46.VAR47.VAR90[15];
            if (VAR8.VAR46.VAR47.VAR48 & VAR106)
            {
                VAR6->VAR20[VAR107] = VAR8.VAR46.VAR47.VAR108[0];
                VAR6->VAR20[VAR109] = VAR8.VAR46.VAR47.VAR108[1];
                VAR6->VAR20[VAR110] = VAR8.VAR46.VAR47.VAR108[2];
            }
            if (VAR8.VAR46.VAR47.VAR48 & VAR111)
            {
                VAR6->VAR20[VAR112] = VAR8.VAR46.VAR47.VAR108[3];
            }
            if (VAR8.VAR46.VAR47.VAR48 & VAR113)
            {
                VAR6->VAR20[VAR114] = VAR8.VAR46.VAR47.VAR108[4];
                VAR6->VAR20[VAR115] = VAR8.VAR46.VAR47.VAR108[5];
            }
        }
        if (VAR8.VAR46.VAR47.VAR48 & VAR116)
        {
            VAR6->VAR20[VAR117] = VAR8.VAR46.VAR47.VAR118;
            VAR6->VAR20[VAR119] = VAR8.VAR46.VAR47.VAR120;
            VAR6->VAR20[VAR121] = VAR8.VAR46.VAR47.VAR122;
            VAR6->VAR20[VAR123] = VAR8.VAR46.VAR47.VAR124 & 0xffffffff;
            VAR6->VAR20[VAR125] = VAR8.VAR46.VAR47.VAR126;
            VAR6->VAR20[VAR127] = VAR8.VAR46.VAR47.VAR128;
            VAR6->VAR20[VAR129] = VAR8.VAR46.VAR47.VAR124 >> 32;
            VAR6->VAR20[VAR130] = VAR8.VAR46.VAR47.VAR131;
            VAR6->VAR20[VAR132] = VAR8.VAR46.VAR47.VAR133[0];
            VAR6->VAR20[VAR134] = VAR8.VAR46.VAR47.VAR133[1];
        }
        if (VAR8.VAR46.VAR47.VAR48 & VAR135)
        {
            VAR6->VAR20[VAR136] = VAR8.VAR46.VAR47.VAR137;
        }
        if (VAR8.VAR46.VAR47.VAR48 & VAR138)
        {
            VAR6->VAR20[VAR139] = VAR8.VAR46.VAR47.VAR140;
            VAR6->VAR20[VAR141] = VAR8.VAR46.VAR47.VAR142;
        }
        if (VAR8.VAR46.VAR47.VAR143 == VAR144)
        {
            VAR6->VAR20[VAR145] = VAR8.VAR46.VAR47.VAR146.VAR147.VAR148;
            VAR6->VAR20[VAR149] = VAR8.VAR46.VAR47.VAR146.VAR147.VAR150;
            VAR6->VAR20[VAR151] = VAR8.VAR46.VAR47.VAR146.VAR147.VAR152;
            if (VAR8.VAR46.VAR47.VAR146.VAR147.VAR48 & VAR153)
            {
                VAR6->VAR20[VAR154] = VAR8.VAR46.VAR47.VAR146.VAR147.VAR155;
                VAR6->VAR20[VAR156] = VAR8.VAR46.VAR47.VAR146.VAR147.VAR157;
            }
        }
    }
    if (VAR158)
    {
        VAR11 = FUN3(VAR2, VAR45, &VAR8);
        if (VAR11 < 0)
        {
            return VAR11;
        }
        FUN6(VAR6, VAR8.VAR46.VAR159.VAR160);
        memset(VAR6->VAR161, 0, sizeof(VAR6->VAR161));
        for (VAR10 = 0; VAR10 < FUN7(VAR6->VAR161); VAR10++)
        {
            target_ulong VAR162 = VAR8.VAR46.VAR159.VAR163.VAR161[VAR10].VAR164;
            target_ulong VAR165 = VAR8.VAR46.VAR159.VAR163.VAR161[VAR10].VAR166;
            if (VAR162 & VAR167)
            {
                FUN8(VAR6, VAR162, VAR165);
            }
        }
        for (VAR10 = 0; VAR10 < 16; VAR10++)
        {
            VAR6->VAR168[VAR10] = VAR8.VAR46.VAR159.VAR169.VAR168[VAR10];
        }
        for (VAR10 = 0; VAR10 < 8; VAR10++)
        {
            VAR6->VAR170[0][VAR10] = VAR8.VAR46.VAR159.VAR169.VAR171[VAR10] & 0xffffffff;
            VAR6->VAR170[1][VAR10] = VAR8.VAR46.VAR159.VAR169.VAR171[VAR10] >> 32;
            VAR6->VAR172[0][VAR10] = VAR8.VAR46.VAR159.VAR169.VAR173[VAR10] & 0xffffffff;
            VAR6->VAR172[1][VAR10] = VAR8.VAR46.VAR159.VAR169.VAR173[VAR10] >> 32;
        }
    }
    if (VAR174)
    {
        FUN9(VAR2, VAR175, VAR176);
    }
    if (VAR177)
    {
        int VAR10;
        for (VAR10 = 0; VAR10 < 1024; VAR10++)
        {
            uint64_t VAR178 = VAR6->VAR179[VAR10].VAR180;
            if (VAR178 != 0)
            {
                FUN9(VAR2, VAR178, VAR10);
            }
        }
        if (VAR181)
        {
            if (FUN10(VAR2) < 0)
            {
                FUN11("");
            }
        }
    }
    return 0;
}