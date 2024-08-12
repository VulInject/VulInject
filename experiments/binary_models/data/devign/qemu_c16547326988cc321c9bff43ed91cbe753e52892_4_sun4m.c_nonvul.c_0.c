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
        fprintf(VAR48, "", VAR47);
        FUN13(1);
    }
    VAR28 = 0;
    if (VAR28 == 0)
    {
        FUN14(VAR2->VAR49, 0x00100000, VAR50, VAR51, VAR47);
    }
    for (VAR6 = VAR28; VAR6 < VAR52; VAR6++)
    {
        if (VAR2->VAR53[VAR6].VAR54)
        {
            FUN5(VAR2->VAR53[VAR6].VAR54, 0x2000);
        }
    }
    if (VAR2->VAR55)
    {
        FUN5(VAR2->VAR55, 0x2000);
    }
    FUN15(&VAR56[0], VAR2->VAR57, VAR9, VAR17);
    VAR10 = FUN16(VAR14[0], VAR2->VAR58, 0, 0x2000, 8);
    FUN17(VAR2->VAR59, VAR14[19], VAR15, VAR30);
    FUN18(VAR2->VAR60, VAR14[14], VAR61 == VAR62, VAR63, 1);
    FUN19(VAR2->VAR64, VAR14[15], VAR14[15], VAR65[0], VAR65[1], VAR63, 1);
    VAR21 = FUN3(VAR66, NULL, 1);
    if (VAR2->VAR67)
    {
        FUN20(VAR2->VAR67, VAR21[0]);
    }
    if (VAR2->VAR68)
    {
        memset(VAR24, 0, sizeof(VAR24));
        VAR24[0] = FUN21(VAR69, 0, 0);
        FUN22(VAR14[22], VAR2->VAR68, VAR24, &VAR20);
    }
    else
    {
        VAR20 = *FUN3(VAR70, NULL, 1);
    }
    FUN23(VAR2->VAR31, VAR2->VAR71, VAR2->VAR72, VAR14[30], VAR20);
    if (FUN24(VAR73) > 0)
    {
        fprintf(VAR48, "");
        FUN13(1);
    }
    FUN25(VAR2->VAR74, 2, VAR75, VAR76, VAR8, VAR16, &VAR18, &VAR19);
    FUN26(VAR8, 0, VAR18);
    FUN26(VAR8, 1, VAR19);
    if (VAR2->VAR77)
    {
        FUN27("", VAR2->VAR77, VAR14[5]);
    }
    if (VAR2->VAR78)
    {
        FUN5(VAR2->VAR78 + 0x1000, 0x30);
        FUN5(VAR2->VAR78 + 0x10000, 0x100);
    }
    if (VAR2->VAR79)
    {
        FUN5(VAR2->VAR79, 0x20);
    }
    VAR22 = FUN28(VAR4->VAR80, VAR4->VAR81, VAR4->VAR34);
    FUN29(VAR10, (VAR82 *)&VAR56[0].VAR83, VAR4->VAR84, VAR4->VAR85, VAR4->VAR34, VAR22, VAR50, VAR51, VAR47, VAR2->VAR86, "");
    if (VAR2->VAR36)
        FUN30(VAR2->VAR36, VAR14[28], VAR2->VAR87);
    VAR27 = FUN31(0, 0, VAR88, VAR88 + 2);
    FUN32(VAR27, VAR89, (VAR90)VAR91);
    FUN33(VAR27, VAR92, 1);
    FUN34(VAR27, VAR93, (VAR94)VAR34);
    FUN32(VAR27, VAR95, VAR2->VAR96);
    FUN32(VAR27, VAR97, VAR47);
    FUN32(VAR27, VAR98, VAR50);
    FUN32(VAR27, VAR99, VAR51);
    FUN33(VAR27, VAR100, VAR101);
    FUN33(VAR27, VAR102, VAR22);
    if (VAR4->VAR84)
    {
        FUN33(VAR27, VAR103, VAR104);
        FUN35("", VAR104, VAR105, VAR4->VAR84);
        FUN36(VAR27, VAR106, VAR4->VAR84);
        FUN33(VAR27, VAR107, strlen(VAR4->VAR84) + 1);
    }
    else
    {
        FUN33(VAR27, VAR103, 0);
        FUN33(VAR27, VAR107, 0);
    }
    FUN33(VAR27, VAR108, VAR109);
    FUN33(VAR27, VAR110, 0);
    FUN32(VAR27, VAR111, VAR4->VAR85[0]);
    FUN37(VAR112, VAR27);
}