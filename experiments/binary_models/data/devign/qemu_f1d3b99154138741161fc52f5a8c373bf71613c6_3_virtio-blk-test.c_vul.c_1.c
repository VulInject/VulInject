static void FUN1(void)
{
    VAR1 *VAR2;
    VAR3 *VAR4;
    VAR5 *VAR6;
    VAR7 *VAR8;
    QVirtioBlkReq VAR9;
    void *VAR10;
    uint64_t VAR11;
    uint64_t VAR12;
    uint32_t VAR13;
    uint32_t VAR14;
    uint8_t VAR15;
    char *VAR16;
    VAR4 = FUN2();
    VAR8 = FUN3();
    VAR2 = FUN4(VAR4, VAR17);
    FUN5(VAR2->VAR18);
    FUN6(VAR2, VAR8, 0);
    VAR10 = VAR2->VAR10 + FUN7(true);
    VAR12 = FUN8(&VAR19, &VAR2->VAR20, (VAR21)(VAR22)VAR10);
    FUN9(VAR12, ==, VAR23 / 512);
    VAR13 = FUN10(&VAR19, &VAR2->VAR20);
    VAR13 = VAR13 & ~(VAR24 | (1u << VAR25) | (1u << VAR26) | (1u << VAR27));
    FUN11(&VAR19, &VAR2->VAR20, VAR13);
    VAR6 = (VAR5 *)FUN12(&VAR19, &VAR2->VAR20, VAR8, 0);
    FUN13(VAR2, VAR6, VAR8, 1);
    FUN14(&VAR19, &VAR2->VAR20);
    VAR9.VAR28 = VAR29;
    VAR9.VAR30 = 1;
    VAR9.VAR31 = 0;
    VAR9.VAR16 = FUN15(512);
    strcpy(VAR9.VAR16, "");
    VAR11 = FUN16(VAR8, &VAR9, 512);
    FUN17(VAR9.VAR16);
    VAR14 = FUN18(&VAR6->VAR32, VAR11, 16, false, true);
    FUN18(&VAR6->VAR32, VAR11 + 16, 512, false, true);
    FUN18(&VAR6->VAR32, VAR11 + 528, 1, true, false);
    FUN19(&VAR19, &VAR2->VAR20, &VAR6->VAR32, VAR14);
    FUN20(&VAR19, &VAR2->VAR20, &VAR6->VAR32, VAR33);
    VAR9.VAR28 = VAR29;
    VAR9.VAR30 = 1;
    VAR9.VAR31 = 1;
    VAR9.VAR16 = FUN15(512);
    strcpy(VAR9.VAR16, "");
    VAR11 = FUN16(VAR8, &VAR9, 512);
    FUN17(VAR9.VAR16);
    FUN21(&VAR6->VAR32, 2);
    VAR14 = FUN18(&VAR6->VAR32, VAR11, 16, false, true);
    FUN18(&VAR6->VAR32, VAR11 + 16, 512, false, true);
    FUN18(&VAR6->VAR32, VAR11 + 528, 1, true, false);
    FUN19(&VAR19, &VAR2->VAR20, &VAR6->VAR32, VAR14);
    VAR15 = FUN22(&VAR19, &VAR2->VAR20, &VAR6->VAR32, VAR11 + 528, VAR33);
    FUN9(VAR15, ==, 0);
    FUN23(VAR8, VAR11);
    VAR9.VAR28 = VAR34;
    VAR9.VAR30 = 1;
    VAR9.VAR31 = 1;
    VAR9.VAR16 = FUN15(512);
    VAR11 = FUN16(VAR8, &VAR9, 512);
    FUN17(VAR9.VAR16);
    VAR14 = FUN18(&VAR6->VAR32, VAR11, 16, false, true);
    FUN18(&VAR6->VAR32, VAR11 + 16, 512, true, true);
    FUN18(&VAR6->VAR32, VAR11 + 528, 1, true, false);
    FUN19(&VAR19, &VAR2->VAR20, &VAR6->VAR32, VAR14);
    FUN20(&VAR19, &VAR2->VAR20, &VAR6->VAR32, VAR33);
    VAR15 = FUN24(VAR11 + 528);
    FUN9(VAR15, ==, 0);
    VAR16 = FUN15(512);
    FUN25(VAR11 + 16, VAR16, 512);
    FUN26(VAR16, ==, "");
    FUN17(VAR16);
    FUN23(VAR8, VAR11);
    FUN23(VAR8, VAR6->VAR32.VAR35);
    FUN27(VAR8);
    FUN28(VAR2->VAR18);
    FUN29(VAR2);
    FUN17(VAR2);
    FUN30(VAR4);
    FUN31();
}