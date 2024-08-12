static void FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = FUN2(VAR2);
    VAR5 *VAR6 = FUN3(VAR2);
    VAR7 *VAR8 = FUN4();
    VAR9 *VAR10, *VAR11;
    if (!VAR2->VAR12)
    {
        VAR2->VAR12 = VAR6->VAR12;
    }
    if (strcmp(VAR2->VAR12, VAR6->VAR12) != 0)
    {
        FUN5("", VAR6->VAR12);
        FUN6(1);
    }
    FUN7(&VAR4->VAR13, NULL, "", 0x1000000);
    FUN8(VAR8, 0x21000000, &VAR4->VAR13);
    switch (VAR6->VAR14)
    {
    case VAR15:
        FUN9(&VAR4->VAR16, "", 0x0, 0x400000);
        FUN10(&VAR4->VAR17, "", &VAR4->VAR16, 0x400000);
        FUN9(&VAR4->VAR18, "", 0x20000000, 0x400000);
        FUN10(&VAR4->VAR19, "", &VAR4->VAR18, 0x20400000);
        FUN9(&VAR4->VAR20, "", 0x01000000, 0x4000);
        FUN10(&VAR4->VAR21, "", &VAR4->VAR20, 0x01004000);
        FUN10(&VAR4->VAR22, "", &VAR4->VAR20, 0x01008000);
        FUN10(&VAR4->VAR23, "", &VAR4->VAR20, 0x0100c000);
        break;
    case VAR24:
        FUN9(&VAR4->VAR20, "", 0x0, 0x40000);
        FUN9(&VAR4->VAR16, "", 0x00400000, 0x00800000);
        FUN9(&VAR4->VAR25, "", 0x20000000, 0x20000);
        FUN9(&VAR4->VAR18, "", 0x20400000, 0x400000);
        break;
    default:
        FUN11();
    }
    FUN12(&VAR4->VAR10, sizeof(VAR4->VAR10), VAR26);
    VAR10 = FUN13(&VAR4->VAR10);
    FUN14(VAR10, FUN15());
    switch (VAR6->VAR14)
    {
    case VAR15:
        FUN16(VAR10, "", 32);
        break;
    case VAR24:
        FUN16(VAR10, "", 64);
        break;
    default:
        FUN11();
    }
    FUN17(VAR10, "", VAR2->VAR12);
    FUN18(FUN19(&VAR4->VAR10), FUN19(VAR8), "", &VAR27);
    FUN20(FUN19(&VAR4->VAR10), true, "", &VAR28);
    FUN21("", 0x00400000, 0x00400000);
    FUN21("", 0x00800000, 0x00800000);
    FUN21("", 0x01000000, 0x00010000);
    FUN21("", 0x01010000, 0x1EFF0000);
    FUN21("", 0x20800000, 0x00800000);
    FUN21("", 0x21000000, 0x01000000);
    FUN21("", 0x40000000, 0x00010000);
    FUN21("", 0x40010000, 0x00010000);
    FUN21("", 0x40020000, 0x00010000);
    FUN21("", 0x40030000, 0x001D0000);
    FUN21("", 0x41000000, 0x0200000);
    switch (VAR6->VAR14)
    {
    case VAR15:
    {
        VAR29 *VAR30;
        VAR9 *VAR31;
        int VAR32;
        VAR30 = FUN22(VAR33);
        FUN23(VAR30, 6, "", &VAR28);
        FUN20(VAR30, true, "", &VAR28);
        VAR31 = FUN13(VAR30);
        FUN24(VAR31, 0, FUN25(VAR10, 12));
        for (VAR32 = 0; VAR32 < 5; VAR32++)
        {
            static const hwaddr VAR34[] = {0x40004000, 0x40005000, 0x40006000, 0x40007000, 0x40009000};
            VAR35 *VAR36 = VAR32 < VAR37 ? VAR38[VAR32] : NULL;
            static const int VAR39[] = {0, 2, 4, 18, 20};
            qemu_irq VAR40 = NULL, VAR41 = NULL;
            if (VAR32 < 3)
            {
                VAR40 = FUN25(VAR31, VAR32 * 2);
                VAR41 = FUN25(VAR31, VAR32 * 2 + 1);
            }
            FUN26(VAR34[VAR32], FUN25(VAR10, VAR39[VAR32] + 1), FUN25(VAR10, VAR39[VAR32]), VAR40, VAR41, NULL, VAR36, VAR42);
        }
        break;
    }
    case VAR24:
    {
        VAR29 *VAR30;
        VAR9 *VAR31;
        int VAR32;
        VAR30 = FUN22(VAR33);
        FUN23(VAR30, 10, "", &VAR28);
        FUN20(VAR30, true, "", &VAR28);
        VAR31 = FUN13(VAR30);
        FUN24(VAR31, 0, FUN25(VAR10, 12));
        for (VAR32 = 0; VAR32 < 5; VAR32++)
        {
            static const int VAR43[] = {0, 2, 45, 46, 56};
            static const hwaddr VAR34[] = {0x40004000, 0x40005000, 0x4002c000, 0x4002d000, 0x4002e000};
            VAR35 *VAR36 = VAR32 < VAR37 ? VAR38[VAR32] : NULL;
            VAR29 *VAR44;
            VAR9 *VAR45;
            VAR44 = FUN22(VAR33);
            FUN23(VAR44, 2, "", &VAR28);
            FUN20(VAR44, true, "", &VAR28);
            VAR45 = FUN13(VAR44);
            FUN24(VAR45, 0, FUN25(VAR10, VAR43[VAR32]));
            FUN26(VAR34[VAR32], FUN25(VAR45, 0), FUN25(VAR45, 1), FUN25(VAR31, 0), FUN25(VAR31, 1), NULL, VAR36, VAR42);
        }
        break;
    }
    default:
        FUN11();
    }
    FUN27(0x40000000, FUN25(VAR10, 8), VAR42);
    FUN27(0x40001000, FUN25(VAR10, 9), VAR42);
    FUN12(&VAR4->VAR46, sizeof(VAR4->VAR46), VAR47);
    VAR11 = FUN13(&VAR4->VAR46);
    FUN14(VAR11, FUN15());
    FUN16(VAR11, "", 0x2);
    FUN16(VAR11, "", 0x02000008);
    FUN16(VAR11, "", VAR6->VAR48);
    FUN20(FUN19(&VAR4->VAR46), true, "", &VAR28);
    FUN28(FUN29(VAR11), 0, 0x4002f000);
    FUN30(&VAR49[0], 0x40200000, FUN25(VAR10, VAR6->VAR14 == VAR15 ? 13 : 47));
    VAR50 = VAR51 / VAR42;
    FUN31(FUN32(VAR52), VAR2->VAR53, 0x400000);
}