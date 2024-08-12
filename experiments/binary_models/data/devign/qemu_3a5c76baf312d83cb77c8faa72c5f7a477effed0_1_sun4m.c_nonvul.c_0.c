static void FUN1(const struct VAR1 *VAR2, VAR3 *VAR4)
{
    const char *VAR5 = VAR4->VAR5;
    unsigned int VAR6;
    void *VAR7, *VAR8, *VAR9, *VAR10;
    VAR11 *VAR12[VAR13], VAR14[32], VAR15[VAR13], VAR16, VAR17;
    qemu_irq VAR18, VAR19;
    qemu_irq VAR20;
    VAR11 *VAR21;
    unsigned long VAR22;
    VAR23 *VAR24[VAR25];
    VAR26 *VAR27;
    unsigned int VAR28;
    if (!VAR5)
        VAR5 = VAR2->VAR29;
    for (VAR6 = 0; VAR6 < VAR30; VAR6++)
    {
        FUN2(VAR5, VAR6, VAR2->VAR31, &VAR12[VAR6]);
    }
    for (VAR6 = VAR30; VAR6 < VAR13; VAR6++)
        VAR12[VAR6] = FUN3(VAR32, NULL, VAR33);
    FUN4(0, VAR4->VAR34, VAR2->VAR35);
    if (!VAR2->VAR36)
    {
        FUN5(VAR4->VAR34, VAR2->VAR35 - VAR4->VAR34);
    }
    FUN6(VAR2->VAR31, VAR37);
    VAR38 = FUN7(VAR2->VAR39, VAR2->VAR39 + 0x10000ULL, VAR12);
    for (VAR6 = 0; VAR6 < 32; VAR6++)
    {
        VAR14[VAR6] = FUN8(VAR38, VAR6);
    }
    for (VAR6 = 0; VAR6 < VAR13; VAR6++)
    {
        VAR15[VAR6] = FUN8(VAR38, 32 + VAR6);
    }
    if (VAR2->VAR40)
    {
        FUN9(VAR2->VAR40);
    }
    if (VAR2->VAR41)
    {
        FUN10(VAR2->VAR41);
    }
    VAR7 = FUN11(VAR2->VAR42, VAR2->VAR43, VAR14[30]);
    if (VAR2->VAR44)
    {
        FUN5(VAR2->VAR44, VAR2->VAR45);
    }
    VAR8 = FUN12(VAR2->VAR46, VAR14[18], VAR7, &VAR16, 0);
    VAR9 = FUN12(VAR2->VAR46 + 16ULL, VAR14[16], VAR7, &VAR17, 1);
    if (VAR47 != 8 && VAR47 != 24)
    {
        FUN13("", VAR47);
        FUN14(1);
    }
    VAR28 = 0;
    if (VAR28 == 0)
    {
        if (VAR48 == VAR49)
        {
            if (VAR47 != 8)
            {
                FUN13("", VAR47);
                FUN14(1);
            }
            if (!(VAR50 == 1024 && VAR51 == 768) && !(VAR50 == 1152 && VAR51 == 900))
            {
                FUN13("", VAR50, VAR51);
                FUN14(1);
            }
            FUN15(VAR2->VAR52, VAR14[11], 0x00100000, VAR50, VAR51, VAR47);
        }
        else
        {
            if (VAR47 != 8 && VAR47 != 24)
            {
                FUN13("", VAR47);
                FUN14(1);
            }
            if (!(VAR50 == 1024 && VAR51 == 768))
            {
                FUN13("", VAR50, VAR51);
                FUN14(1);
            }
            FUN16(VAR2->VAR52, VAR14[11], 0x00100000, VAR50, VAR51, VAR47);
        }
    }
    for (VAR6 = VAR28; VAR6 < VAR53; VAR6++)
    {
        if (VAR2->VAR54[VAR6].VAR55)
        {
            FUN5(VAR2->VAR54[VAR6].VAR55, 0x2000);
        }
    }
    if (VAR2->VAR56)
    {
        FUN5(VAR2->VAR56, 0x2000);
    }
    FUN17(&VAR57[0], VAR2->VAR58, VAR9, VAR17);
    VAR10 = FUN18(VAR14[0], VAR2->VAR59, 0, 0x2000, 1968, 8);
    FUN19(VAR2->VAR60, VAR14[19], VAR15, VAR30);
    FUN20(VAR2->VAR61, VAR14[14], VAR62 == VAR63, VAR64, 1);
    FUN21(VAR2->VAR65, VAR14[15], VAR14[15], VAR66[0], VAR66[1], VAR64, 1);
    VAR21 = FUN3(VAR67, NULL, 1);
    if (VAR2->VAR68)
    {
        FUN22(VAR2->VAR68, VAR21[0]);
    }
    if (VAR2->VAR69)
    {
        memset(VAR24, 0, sizeof(VAR24));
        VAR24[0] = FUN23(VAR70, 0, 0);
        FUN24(VAR14[22], VAR2->VAR69, VAR24, &VAR20);
    }
    else
    {
        VAR20 = *FUN3(VAR71, NULL, 1);
    }
    FUN25(VAR2->VAR31, VAR2->VAR72, VAR2->VAR73, VAR14[30], VAR20);
    if (FUN26(VAR74) > 0)
    {
        fprintf(VAR75, "");
        FUN14(1);
    }
    FUN27(VAR2->VAR76, 2, VAR77, VAR78, VAR8, VAR16, &VAR18, &VAR19);
    FUN28(VAR8, 0, VAR18);
    FUN28(VAR8, 1, VAR19);
    if (VAR2->VAR79)
    {
        FUN29("", VAR2->VAR79, VAR14[5]);
    }
    if (VAR2->VAR80)
    {
        FUN5(VAR2->VAR80 + 0x1000, 0x30);
        FUN5(VAR2->VAR80 + 0x10000, 0x100);
    }
    if (VAR2->VAR81)
    {
        FUN5(VAR2->VAR81, 0x20);
    }
    VAR22 = FUN30(VAR4->VAR82, VAR4->VAR83, VAR4->VAR34);
    FUN31(VAR10, (VAR84 *)&VAR57[0].VAR85, VAR4->VAR86, VAR4->VAR87, VAR4->VAR34, VAR22, VAR50, VAR51, VAR47, VAR2->VAR88, "");
    if (VAR2->VAR36)
        FUN32(VAR2->VAR36, VAR14[28], VAR2->VAR89);
    VAR27 = FUN33(VAR90, VAR90 + 2);
    FUN34(VAR27, VAR91, (VAR92)VAR93);
    FUN35(VAR27, VAR94, (VAR95)VAR34);
    FUN34(VAR27, VAR96, VAR2->VAR97);
    FUN34(VAR27, VAR98, VAR47);
    FUN34(VAR27, VAR99, VAR50);
    FUN34(VAR27, VAR100, VAR51);
    FUN36(VAR27, VAR101, VAR102);
    FUN36(VAR27, VAR103, VAR22);
    if (VAR4->VAR86)
    {
        FUN36(VAR27, VAR104, VAR105);
        FUN37("", VAR105, VAR106, VAR4->VAR86);
        FUN38(VAR27, VAR107, VAR4->VAR86);
        FUN36(VAR27, VAR108, strlen(VAR4->VAR86) + 1);
    }
    else
    {
        FUN36(VAR27, VAR104, 0);
        FUN36(VAR27, VAR108, 0);
    }
    FUN36(VAR27, VAR109, VAR110);
    FUN36(VAR27, VAR111, 0);
    FUN34(VAR27, VAR112, VAR4->VAR87[0]);
    FUN39(VAR113, VAR27);
}