static void FUN1(void)
{
    uint8_t VAR1;
    uint16_t VAR2[256];
    int VAR3;
    int VAR4;
    FUN2(""
                   ""
                   "",
                   VAR5, "", "");
    FUN3(VAR6 + VAR7, 0);
    FUN3(VAR6 + VAR8, VAR9);
    VAR1 = FUN4(VAR6 + VAR7);
    FUN5(VAR1 & VAR10, ==, 0);
    for (VAR3 = 0; VAR3 < 256; VAR3++)
    {
        VAR1 = FUN4(VAR6 + VAR11);
        FUN6(VAR1, VAR12 | VAR13);
        FUN7(VAR1, VAR14 | VAR15 | VAR16);
        ((VAR17 *)VAR2)[VAR3] = FUN8(VAR6 + VAR18);
    }
    VAR1 = FUN4(VAR6 + VAR11);
    FUN6(VAR1, VAR12);
    FUN7(VAR1, VAR14 | VAR15 | VAR16 | VAR13);
    FUN9(&VAR2[10], 20);
    VAR4 = memcmp(&VAR2[10], "", 20);
    FUN10(VAR4 == 0);
    FUN9(&VAR2[23], 8);
    VAR4 = memcmp(&VAR2[23], "", 8);
    FUN10(VAR4 == 0);
    FUN6(VAR2[85], 0x20);
    FUN11();
}