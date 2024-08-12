static void FUN1(void)
{
    FUN2(VAR1, FUN3(VAR1) & ~VAR2);
    FUN2(VAR3, 0x76);
    FUN2(VAR4, 0x11);
    FUN2(VAR5, 0x20);
    FUN2(VAR6, 0x02);
    FUN2(VAR7, 0x02);
    FUN2(VAR8, 0x02);
    FUN2(VAR9, 0x04);
    FUN2(VAR10, 0x58);
    FUN2(VAR3, 0x26);
    FUN4(FUN3(VAR8), ==, 0x02);
    FUN4(FUN3(VAR9), ==, 0x04);
    FUN4(FUN3(VAR10), >=, 0x58);
    FUN4(FUN3(VAR7), ==, 0x02);
    FUN4(FUN3(VAR6), ==, 0x02);
    FUN4(FUN3(VAR4), ==, 0x11);
    FUN4(FUN3(VAR5), ==, 0x20);
    FUN2(VAR3, 0x76);
    FUN2(VAR4, 0x80);
    FUN2(VAR3, 0x26);
    FUN4(FUN3(VAR8), ==, 0x02);
    FUN4(FUN3(VAR9), ==, 0x04);
    FUN4(FUN3(VAR10), >=, 0x58);
    FUN4(FUN3(VAR7), ==, 0x02);
    FUN4(FUN3(VAR6), ==, 0x02);
    FUN4(FUN3(VAR4), ==, 0x80);
    FUN4(FUN3(VAR5), ==, 0x20);
    FUN2(VAR3, 0x76);
    FUN2(VAR4, 0x11);
    FUN2(VAR3, 0x26);
    FUN4(FUN3(VAR8), ==, 0x02);
    FUN4(FUN3(VAR9), ==, 0x04);
    FUN4(FUN3(VAR10), >=, 0x58);
    FUN4(FUN3(VAR7), ==, 0x02);
    FUN4(FUN3(VAR6), ==, 0x02);
    FUN4(FUN3(VAR4), ==, 0x11);
    FUN4(FUN3(VAR5), ==, 0x20)