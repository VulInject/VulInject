static void FUN1(VAR1 *VAR2)
{
    const char *VAR3 = VAR2->VAR3;
    VAR4 *VAR5;
    VAR6 *VAR7;
    int VAR8;
    VAR9 *VAR10 = FUN2();
    uint32_t VAR11 = 0x02000000;
    uint32_t VAR12 = 0x10000000;
    VAR5 = FUN3(VAR10, VAR12, VAR3 ?: "");
    VAR7 = FUN4(VAR13, 0, 0);
    if (!VAR7 && !FUN5())
    {
        fprintf(VAR14, ""
                        "");
        FUN6(1);
    }
    VAR8 = 1;
    VAR8 = 0;
    if (!FUN7(0x00000000, NULL, "", VAR11, VAR7 ? FUN8(VAR7) : NULL, VAR15, VAR11 / VAR15, 2, 0, 0, 0, 0, VAR8))
    {
        fprintf(VAR14, "");
        FUN6(1);
    }
    FUN9(&VAR16[0], 0x04000300, FUN10(VAR5->VAR17, 99));
}