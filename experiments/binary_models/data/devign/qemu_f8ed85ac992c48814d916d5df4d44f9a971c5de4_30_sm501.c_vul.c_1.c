void FUN1(VAR1 *VAR2, uint32_t VAR3, uint32_t VAR4, qemu_irq VAR5, VAR6 *VAR7)
{
    VAR8 *VAR9;
    VAR10 *VAR11;
    VAR1 *VAR12 = FUN2(VAR1, 1);
    VAR1 *VAR13 = FUN2(VAR1, 1);
    VAR1 *VAR14 = FUN2(VAR1, 1);
    VAR9 = (VAR8 *)FUN3(sizeof(VAR8));
    VAR9->VAR3 = VAR3;
    VAR9->VAR15 = FUN4(VAR4);
    FUN5("", FUN6(VAR9), VAR9->VAR15);
    VAR9->VAR16 = 0x00100000;
    VAR9->VAR17 = 0x00001000;
    VAR9->VAR18 = 0x00010000;
    VAR9->VAR19 = 0x00010000;
    FUN7(&VAR9->VAR20, NULL, "", VAR4, &VAR21);
    FUN8(&VAR9->VAR20);
    FUN9(&VAR9->VAR20, true, VAR22);
    VAR9->VAR23 = FUN10(&VAR9->VAR20);
    FUN11(VAR2, VAR3, &VAR9->VAR20);
    FUN12(VAR12, NULL, &VAR24, VAR9, "", 0x6c);
    FUN11(VAR2, VAR3 + VAR25, VAR12);
    FUN12(VAR13, NULL, &VAR26, VAR9, "", 0x1000);
    FUN11(VAR2, VAR3 + VAR25 + VAR27, VAR13);
    FUN12(VAR14, NULL, &VAR28, VAR9, "", 0x54);
    FUN11(VAR2, VAR3 + VAR25 + VAR29, VAR14);
    VAR11 = FUN13(NULL, "");
    FUN14(VAR11, "", 2);
    FUN15(VAR11, "", VAR3);
    FUN16(VAR11);
    FUN17(FUN18(VAR11), 0, VAR3 + VAR25 + VAR30);
    FUN19(FUN18(VAR11), 0, VAR5);
    if (VAR7)
    {
        FUN20(VAR2, VAR3 + VAR25 + VAR31, 2, NULL, 115200, VAR7, VAR32);
    }
    VAR9->VAR33 = FUN21(FUN22(VAR11), 0, &VAR34, VAR9);
}