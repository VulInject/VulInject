VAR1 *FUN1(int VAR2, int VAR3, const char *VAR4, const char *VAR5)
{
    VAR6 *VAR7;
    VAR8 *VAR9;
    static qemu_irq VAR10[64];
    VAR1 *VAR11;
    uint32_t VAR12;
    int VAR13;
    uint64_t VAR14;
    uint64_t VAR15;
    int VAR16;
    VAR2 *= 1024;
    VAR3 *= 1024;
    if (!VAR5)
        VAR5 = "";
    VAR7 = FUN2(VAR5);
    if (!VAR7)
    {
        fprintf(VAR17, "");
        FUN3(1);
    }
    if (VAR18 > (512 + 32) * 1024 * 1024)
        VAR18 = (512 + 32) * 1024 * 1024;
    VAR3 = (VAR18 / 2) & VAR19;
    if (VAR3 > 32 * 1024 * 1024)
        VAR3 = 32 * 1024 * 1024;
    VAR20 = VAR18 - VAR3;
    FUN4(0, VAR2, FUN5(VAR2) | VAR21);
    FUN4(0x20000000, VAR3, FUN5(VAR3) | VAR22);
    FUN6();
    VAR9 = FUN7(NULL, "");
    VAR7->VAR23.VAR9 = VAR9;
    FUN8(VAR9);
    VAR11 = FUN9(VAR7);
    FUN10(FUN11(VAR9), 0, VAR11[VAR24]);
    for (VAR16 = 0; VAR16 < 64; VAR16++)
    {
        VAR10[VAR16] = FUN12(VAR9, VAR16);
    }
    VAR13 = FUN13(VAR4, 0, &VAR14, &VAR15, NULL);
    if (VAR13 < 0)
    {
        VAR13 = FUN14(VAR4, 0, VAR2);
        VAR15 = 0;
    }
    if (VAR13 < 0)
    {
        fprintf(VAR17, "", VAR4);
        FUN3(1);
    }
    if (VAR15 == 0)
    {
        VAR7->VAR25[13] = FUN15(0);
        VAR12 = FUN15(4);
    }
    else
    {
        VAR12 = VAR14;
    }
    VAR7->VAR26 = VAR12 & 1;
    VAR7->VAR25[15] = VAR12 & ~1;
    FUN4(0xfffff000, 0x1000, FUN5(0x1000) | VAR22);
    return VAR10;
}