static void FUN1(int VAR1)
{
    VAR2 *VAR3;
    QPCIBar VAR4, VAR5;
    VAR6 *VAR7;
    int VAR8 = FUN2(16, VAR1);
    size_t VAR9 = VAR10 * VAR8;
    char *VAR11 = FUN3(VAR9);
    size_t VAR12 = VAR10 * VAR1;
    VAR13 *VAR14 = FUN4(VAR12);
    int VAR15, VAR16;
    uint8_t VAR17;
    uint16_t VAR18;
    size_t VAR19;
    FUN5(VAR11, VAR9, VAR10);
    VAR7 = fopen(VAR20, "");
    VAR19 = fwrite(VAR11, VAR10, VAR8, VAR7);
    FUN6(VAR19, ==, VAR8);
    fclose(VAR7);
    FUN7(""
                   "",
                   VAR20);
    VAR3 = FUN8(&VAR4, &VAR5);
    FUN9(VAR21, "");
    FUN10(VAR3, VAR5, VAR22, 0);
    FUN10(VAR3, VAR5, VAR23, VAR24 & 0xFF);
    FUN10(VAR3, VAR5, VAR25, (VAR24 >> 8 & 0xFF));
    FUN10(VAR3, VAR5, VAR26, VAR27);
    FUN11(400);
    VAR17 = FUN12(VAR28);
    FUN13(VAR17, VAR29 | VAR30);
    FUN14(VAR17, VAR31 | VAR32 | VAR28);
    FUN15(VAR3, VAR5, 0, VAR1);
    FUN16(!(VAR12 & 1));
    VAR18 = VAR24 & ~1;
    for (VAR15 = 0; VAR15 < FUN17(VAR12, VAR18); VAR15++)
    {
        size_t VAR33 = VAR15 * (VAR18 / 2);
        size_t VAR34 = (VAR12 / 2) - VAR33;
        FUN18(VAR35);
        VAR17 = FUN12(VAR28);
        FUN13(VAR17, VAR29 | VAR30);
        FUN14(VAR17, VAR31 | VAR32 | VAR28);
        for (VAR16 = 0; VAR16 < FUN19((VAR18 / 2), VAR34); VAR16++)
        {
            VAR14[VAR33 + VAR16] = FUN20(FUN21(VAR3, VAR5, VAR36));
        }
    }
    FUN18(VAR35);
    VAR17 = FUN12(VAR29);
    FUN13(VAR17, VAR30);
    FUN14(VAR17, VAR29 | VAR31 | VAR32 | VAR28);
    FUN6(memcmp(VAR11, VAR14, VAR12), ==, 0);
    FUN22(VAR11);
    FUN22(VAR14);
    FUN23();
    FUN24(VAR3);
}