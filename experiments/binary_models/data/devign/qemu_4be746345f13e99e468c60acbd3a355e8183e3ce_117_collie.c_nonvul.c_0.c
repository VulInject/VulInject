static void FUN1(VAR1 *VAR2)
{
    const char *VAR3 = VAR2->VAR3;
    const char *VAR4 = VAR2->VAR4;
    const char *VAR5 = VAR2->VAR5;
    const char *VAR6 = VAR2->VAR6;
    VAR7 *VAR8;
    VAR9 *VAR10;
    VAR11 *VAR12 = FUN2();
    if (!VAR3)
    {
        VAR3 = "";
    }
    VAR8 = FUN3(VAR12, VAR13.VAR14, VAR3);
    VAR10 = FUN4(VAR15, 0, 0);
    FUN5(VAR16, NULL, "", 0x02000000, VAR10 ? FUN6(VAR10) : NULL, (64 * 1024), 512, 4, 0x00, 0x00, 0x00, 0x00, 0);
    VAR10 = FUN4(VAR15, 0, 1);
    FUN5(VAR17, NULL, "", 0x02000000, VAR10 ? FUN6(VAR10) : NULL, (64 * 1024), 512, 4, 0x00, 0x00, 0x00, 0x00, 0);
    FUN7("", 0x40800000, NULL);
    VAR13.VAR4 = VAR4;
    VAR13.VAR5 = VAR5;
    VAR13.VAR6 = VAR6;
    VAR13.VAR18 = 0x208;
    FUN8(VAR8->VAR19, &VAR13);
}