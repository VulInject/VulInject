static void FUN1(const char *VAR1, const char *VAR2, VAR3 *VAR4)
{
    static const int VAR5[] = {5, 6, 33, 34};
    static const int VAR6[] = {19, 21, 23, 35};
    static const uint32_t VAR7[7] = {0x40004000, 0x40005000, 0x40006000, 0x40007000, 0x40024000, 0x40025000, 0x40026000};
    static const int VAR8[7] = {0, 1, 2, 3, 4, 30, 31};
    VAR9 *VAR10;
    VAR11 *VAR12[7];
    qemu_irq VAR13[7][8];
    qemu_irq VAR14[7][8];
    qemu_irq VAR15;
    int VAR16;
    int VAR17;
    VAR18 *VAR19;
    VAR11 *VAR20;
    int VAR21;
    int VAR22;
    VAR23 *VAR24 = FUN2(VAR23, 1);
    VAR23 *VAR25 = FUN2(VAR23, 1);
    VAR23 *VAR26 = FUN3();
    VAR17 = (((VAR4->VAR27 & 0xffff) + 1) << 1) * 1024;
    VAR16 = ((VAR4->VAR27 >> 18) + 1) * 1024;
    FUN4(VAR25, NULL, "", VAR17, &VAR28);
    FUN5(VAR25);
    FUN6(VAR25, true);
    FUN7(VAR26, 0, VAR25);
    FUN4(VAR24, NULL, "", VAR16, &VAR28);
    FUN5(VAR24);
    FUN7(VAR26, 0x20000000, VAR24);
    VAR10 = FUN8(VAR26, VAR17, VAR29, VAR1, VAR2);
    if (VAR4->VAR30 & (1 << 16))
    {
        VAR20 = FUN9(VAR31, 0x40038000, VAR10[14], VAR10[15], VAR10[16], VAR10[17], NULL);
        VAR15 = FUN10(VAR20, 0);
    }
    else
    {
        VAR15 = NULL;
    }
    for (VAR21 = 0; VAR21 < 4; VAR21++)
    {
        if (VAR4->VAR32 & (0x10000 << VAR21))
        {
            VAR20 = FUN11(VAR33, 0x40030000 + VAR21 * 0x1000, VAR10[VAR6[VAR21]]);
            FUN12(VAR20, 0, VAR15);
        }
    }
    FUN13(0x400fe000, VAR10[28], VAR4, VAR34[0].VAR35.VAR36);
    for (VAR21 = 0; VAR21 < 7; VAR21++)
    {
        if (VAR4->VAR37 & (1 << VAR21))
        {
            VAR12[VAR21] = FUN11("", VAR7[VAR21], VAR10[VAR8[VAR21]]);
            for (VAR22 = 0; VAR22 < 8; VAR22++)
            {
                VAR13[VAR21][VAR22] = FUN10(VAR12[VAR21], VAR22);
                VAR14[VAR21][VAR22] = NULL;
            }
        }
    }
    if (VAR4->VAR32 & (1 << 12))
    {
        VAR20 = FUN11(VAR38, 0x40020000, VAR10[8]);
        VAR19 = (VAR18 *)FUN14(VAR20, "");
        if (VAR4->VAR39 & VAR40)
        {
            FUN15(VAR19, "", 0x3d);
        }
    }
    for (VAR21 = 0; VAR21 < 4; VAR21++)
    {
        if (VAR4->VAR32 & (1 << VAR21))
        {
            FUN11("", 0x4000c000 + VAR21 * 0x1000, VAR10[VAR5[VAR21]]);
        }
    }
    if (VAR4->VAR32 & (1 << 4))
    {
        VAR20 = FUN11("", 0x40008000, VAR10[7]);
        if (VAR4->VAR39 & VAR41)
        {
            void *VAR42;
            VAR11 *VAR43;
            VAR11 *VAR44;
            VAR42 = FUN14(VAR20, "");
            VAR43 = FUN16(VAR42, "");
            VAR44 = FUN16(VAR42, "");
            VAR14[VAR45][0] = FUN17(FUN18(VAR43, VAR46, 0), FUN18(VAR44, VAR46, 0));
            VAR14[VAR47][7] = FUN10(VAR44, 0);
            FUN19(VAR14[VAR45][0]);
        }
    }
    if (VAR4->VAR37 & (1 << 28))
    {
        VAR11 *VAR48;
        FUN20(&VAR34[0], "");
        VAR48 = FUN21(NULL, "");
        FUN22(VAR48, &VAR34[0]);
        FUN23(VAR48);
        FUN24(FUN25(VAR48), 0, 0x40048000);
        FUN26(FUN25(VAR48), 0, VAR10[42]);
    }
    if (VAR4->VAR39 & VAR49)
    {
        qemu_irq VAR50[5];
        static const int VAR51[5] = {0xc8, 0xd0, 0xcb, 0xcd, 0x1d};
        VAR50[0] = FUN27(VAR13[VAR52][0]);
        VAR50[1] = FUN27(VAR13[VAR52][1]);
        VAR50[2] = FUN27(VAR13[VAR52][2]);
        VAR50[3] = FUN27(VAR13[VAR52][3]);
        VAR50[4] = FUN27(VAR13[VAR53][1]);
        FUN28(5, VAR50, VAR51);
    }
    for (VAR21 = 0; VAR21 < 7; VAR21++)
    {
        if (VAR4->VAR37 & (1 << VAR21))
        {
            for (VAR22 = 0; VAR22 < 8; VAR22++)
            {
                if (VAR14[VAR21][VAR22])
                {
                    FUN12(VAR12[VAR21], VAR22, VAR14[VAR21][VAR22]);
                }
            }
        }
    }
}