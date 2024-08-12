static void FUN1(int VAR1)
{
    VAR2 *VAR3;
    void *VAR4, *VAR5;
    VAR6 *VAR7;
    int VAR8 = FUN2(16, VAR1);
    size_t VAR9 = VAR10 * VAR8;
    char *VAR11 = FUN3(VAR9);
    size_t VAR12 = VAR10 * VAR1;
    VAR13 *VAR14 = FUN4(VAR12);
    int VAR15, VAR16;
    uint8_t VAR17;
    uint16_t VAR18;
    FUN5(VAR11, VAR9, VAR10);
    VAR7 = fopen(VAR19, "");
    fwrite(VAR11, VAR10, VAR8, VAR7);
    fclose(VAR7);
    FUN6(""
                   "",
                   VAR19);
    VAR3 = FUN7(&VAR4, &VAR5);
    FUN8(VAR20, "");
    FUN9(VAR3, VAR5 + VAR21, 0);
    FUN9(VAR3, VAR5 + VAR22, VAR23 & 0xFF);
    FUN9(VAR3, VAR5 + VAR24, (VAR23 >> 8 & 0xFF));
    FUN9(VAR3, VAR5 + VAR25, VAR26);
    FUN10(400);
    VAR17 = FUN11(VAR27);
    FUN12(VAR17, VAR28 | VAR29);
    FUN13(VAR17, VAR30 | VAR31 | VAR27);
    FUN14(VAR3, VAR5, 0, VAR1);
    FUN15(!(VAR12 & 1));
    VAR18 = VAR23 & ~1;
    for (VAR15 = 0; VAR15 < FUN16(VAR12, VAR18); VAR15++)
    {
        size_t VAR32 = VAR15 * (VAR18 / 2);
        size_t VAR33 = (VAR12 / 2) - VAR32;
        FUN17(VAR34);
        VAR17 = FUN11(VAR27);
        FUN12(VAR17, VAR28 | VAR29);
        FUN13(VAR17, VAR30 | VAR31 | VAR27);
        for (VAR16 = 0; VAR16 < FUN18((VAR18 / 2), VAR33); VAR16++)
        {
            VAR14[VAR32 + VAR16] = FUN19(FUN20(VAR3, VAR5 + VAR35));
        }
    }
    FUN17(VAR34);
    VAR17 = FUN11(VAR28);
    FUN12(VAR17, VAR29);
    FUN13(VAR17, VAR28 | VAR30 | VAR31 | VAR27);
    FUN21(memcmp(VAR11, VAR14, VAR12), ==, 0);
    FUN22(VAR11);
    FUN22(VAR14);
    FUN23();
}