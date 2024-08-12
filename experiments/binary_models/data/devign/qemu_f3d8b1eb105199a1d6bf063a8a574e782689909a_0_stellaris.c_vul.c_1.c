static void FUN1(const char *VAR1, const char *VAR2, VAR3 *VAR4, VAR5 *VAR6)
{
    static const int VAR7[] = {5, 6, 33, 34};
    static const int VAR8[] = {19, 21, 23, 35};
    static const uint32_t VAR9[7] = {0x40004000, 0x40005000, 0x40006000, 0x40007000, 0x40024000, 0x40025000, 0x40026000};
    static const int VAR10[7] = {0, 1, 2, 3, 4, 30, 31};
    VAR11 *VAR12;
    VAR11 *VAR13[5];
    VAR11 *VAR14[5];
    qemu_irq VAR15;
    int VAR16;
    int VAR17;
    VAR18 *VAR19;
    int VAR20;
    VAR17 = ((VAR6->VAR21 & 0xffff) + 1) << 1;
    VAR16 = (VAR6->VAR21 >> 18) + 1;
    VAR12 = FUN2(VAR17, VAR16, VAR1, VAR2);
    if (VAR6->VAR22 & (1 << 16))
    {
        VAR15 = FUN3(0x40038000, VAR12[14]);
    }
    else
    {
        VAR15 = NULL;
    }
    for (VAR20 = 0; VAR20 < 4; VAR20++)
    {
        if (VAR6->VAR23 & (0x10000 << VAR20))
        {
            FUN4(0x40030000 + VAR20 * 0x1000, VAR12[VAR8[VAR20]], VAR15);
        }
    }
    FUN5(0x400fe000, VAR12[28], VAR6, VAR24[0].VAR25);
    for (VAR20 = 0; VAR20 < 7; VAR20++)
    {
        if (VAR6->VAR26 & (1 << VAR20))
        {
            VAR13[VAR20] = FUN6(VAR9[VAR20], VAR12[VAR10[VAR20]], &VAR14[VAR20]);
        }
    }
    if (VAR6->VAR23 & (1 << 12))
    {
        VAR19 = FUN7();
        FUN8(0x40020000, VAR12[8], VAR19);
        if (VAR6->VAR27 & VAR28)
        {
            FUN9(VAR4, VAR19, 0x3d);
        }
    }
    for (VAR20 = 0; VAR20 < 4; VAR20++)
    {
        if (VAR6->VAR23 & (1 << VAR20))
        {
            FUN10(0x4000c000 + VAR20 * 0x1000, VAR12[VAR7[VAR20]], VAR29[VAR20], VAR30);
        }
    }
    if (VAR6->VAR23 & (1 << 4))
    {
        if (VAR6->VAR27 & VAR31)
        {
            void *VAR32;
            void *VAR33;
            void *VAR34;
            int VAR35;
            VAR32 = FUN11(VAR4, &VAR14[VAR36][7]);
            VAR35 = FUN12(VAR37, 0, 0);
            VAR33 = FUN13(VAR38[VAR35].VAR39);
            VAR34 = FUN14(&VAR14[VAR40][0], VAR41, VAR33, VAR42, VAR32);
            FUN15(0x40008000, VAR12[7], VAR43, VAR34);
            FUN16(VAR14[VAR40][0]);
        }
        else
        {
            FUN15(0x40008000, VAR12[7], NULL, NULL);
        }
    }
    if (VAR6->VAR26 & (1 << 28))
    {
        FUN17(&VAR24[0], 0x40048000, VAR12[42]);
    }
    if (VAR6->VAR27 & VAR44)
    {
        qemu_irq VAR45[5];
        static const int VAR46[5] = {0xc8, 0xd0, 0xcb, 0xcd, 0x1d};
        VAR45[0] = FUN18(VAR13[VAR47][0]);
        VAR45[1] = FUN18(VAR13[VAR47][1]);
        VAR45[2] = FUN18(VAR13[VAR47][2]);
        VAR45[3] = FUN18(VAR13[VAR47][3]);
        VAR45[4] = FUN18(VAR13[VAR48][1]);
        FUN19(5, VAR45, VAR46);
    }
}