static void FUN1(gconstpointer VAR1)
{
    const VAR2 *VAR3 = VAR1;
    char *VAR4;
    VAR4 = FUN2("", VAR3->VAR5, VAR3->VAR6 ? "" : "", VAR3->VAR6 ?: "");
    FUN3(VAR4);
    FUN4(VAR3, 0xe0, 0x87654321);
    FUN5(FUN6(VAR3, 0xe8), ==, 0x87654321);
    FUN5(FUN7(VAR3, 0xea), ==, 0x8765);
    FUN5(FUN7(VAR3, 0xe8), ==, 0x4321);
    FUN8(VAR3, 0xe2, 0x8866);
    FUN5(FUN6(VAR3, 0xe8), ==, 0x88664321);
    FUN5(FUN7(VAR3, 0xea), ==, 0x8866);
    FUN5(FUN7(VAR3, 0xe8), ==, 0x4321);
    FUN8(VAR3, 0xe0, 0x4422);
    FUN5(FUN6(VAR3, 0xe8), ==, 0x88664422);
    FUN5(FUN7(VAR3, 0xea), ==, 0x8866);
    FUN5(FUN7(VAR3, 0xe8), ==, 0x4422);
    FUN9(VAR3, 0xe3, 0x87);
    FUN5(FUN6(VAR3, 0xe8), ==, 0x87664422);
    FUN5(FUN7(VAR3, 0xea), ==, 0x8766);
    FUN9(VAR3, 0xe2, 0x65);
    FUN5(FUN6(VAR3, 0xe8), ==, 0x87654422);
    FUN5(FUN7(VAR3, 0xea), ==, 0x8765);
    FUN5(FUN7(VAR3, 0xe8), ==, 0x4422);
    FUN9(VAR3, 0xe1, 0x43);
    FUN5(FUN6(VAR3, 0xe8), ==, 0x87654322);
    FUN5(FUN7(VAR3, 0xea), ==, 0x8765);
    FUN5(FUN7(VAR3, 0xe8), ==, 0x4322);
    FUN9(VAR3, 0xe0, 0x21);
    FUN5(FUN6(VAR3, 0xe8), ==, 0x87654321);
    FUN5(FUN7(VAR3, 0xea), ==, 0x8765);
    FUN5(FUN7(VAR3, 0xe8), ==, 0x4321);
    FUN10(VAR7);
    FUN11(VAR4);
}