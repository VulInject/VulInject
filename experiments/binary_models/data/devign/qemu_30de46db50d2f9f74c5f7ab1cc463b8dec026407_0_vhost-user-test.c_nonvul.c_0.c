static void FUN1(void)
{
    VAR1 *VAR2;
    gint64 VAR3;
    int VAR4, VAR5;
    size_t VAR6;
    FUN2(VAR7);
    VAR3 = FUN3() + 5 * VAR8;
    while (!VAR9)
    {
        if (!FUN4(VAR10, VAR7, VAR3))
        {
            FUN5(VAR9);
            break;
        }
    }
    FUN6(VAR9, >, 0);
    FUN6(VAR9, ==, VAR11.VAR12);
    for (VAR4 = 0; VAR4 < VAR9; VAR4++)
    {
        if (VAR11.VAR13[VAR4].VAR14 != 0x0)
        {
            continue;
        }
        FUN6(VAR11.VAR13[VAR4].VAR15, >, 1024);
        VAR6 = VAR11.VAR13[VAR4].VAR15 + VAR11.VAR13[VAR4].VAR16;
        VAR2 = FUN7(0, VAR6, VAR17 | VAR18, VAR19, VAR20[VAR4], 0);
        FUN5(VAR2 != VAR21);
        VAR2 += (VAR11.VAR13[VAR4].VAR16 / sizeof(*VAR2));
        for (VAR5 = 0; VAR5 < 256; VAR5++)
        {
            uint32_t VAR22 = FUN8(VAR11.VAR13[VAR4].VAR14 + VAR5 * 4);
            uint32_t VAR23 = VAR2[VAR5];
            FUN6(VAR22, ==, VAR23);
        }
        FUN9(VAR2, VAR11.VAR13[VAR4].VAR15);
    }
    FUN6(1, ==, 1);
    FUN10(VAR7);
}