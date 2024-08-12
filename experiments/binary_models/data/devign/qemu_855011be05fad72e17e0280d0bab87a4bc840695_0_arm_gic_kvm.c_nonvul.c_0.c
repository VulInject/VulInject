static void FUN1(VAR1 *VAR2)
{
    uint32_t VAR3;
    int VAR4;
    int VAR5;
    if (!FUN2(VAR2))
    {
        FUN3("");
        return;
    }
    FUN4(VAR2, 0x0, 0, &VAR3, false);
    VAR2->VAR6 = VAR3 & 1;
    FUN4(VAR2, 0x4, 0, &VAR3, false);
    VAR2->VAR7 = ((VAR3 & 0x1f) + 1) * 32;
    VAR2->VAR8 = ((VAR3 & 0xe0) >> 5) + 1;
    if (VAR2->VAR7 > VAR9)
    {
        fprintf(VAR10, "", VAR2->VAR7);
        FUN5();
    }
    FUN4(VAR2, 0x8, 0, &VAR3, false);
    FUN6(VAR4, VAR2->VAR7, 1)
    {
        FUN4(VAR2, 0x80 + (VAR4 * 4), 0, &VAR3, false);
        if (VAR3 != 0)
        {
            fprintf(VAR10, "", VAR3);
            FUN5();
        }
    }
    for (VAR4 = 0; VAR4 < VAR2->VAR7; VAR4++)
    {
        memset(&VAR2->VAR11[VAR4], 0, sizeof(VAR2->VAR11[0]));
    }
    FUN7(VAR2, 0x100, 1, VAR2->VAR7, VAR12);
    FUN7(VAR2, 0x200, 1, VAR2->VAR7, VAR13);
    FUN7(VAR2, 0x300, 1, VAR2->VAR7, VAR14);
    FUN7(VAR2, 0xc00, 2, VAR2->VAR7, VAR15);
    FUN7(VAR2, 0x400, 8, VAR2->VAR7, VAR16);
    FUN7(VAR2, 0x800, 8, VAR2->VAR7, VAR17);
    FUN7(VAR2, 0xf10, 8, VAR18, VAR19);
    for (VAR5 = 0; VAR5 < VAR2->VAR8; VAR5++)
    {
        FUN8(VAR2, 0x00, VAR5, &VAR3, false);
        VAR2->VAR20[VAR5] = (VAR3 & 1);
        FUN8(VAR2, 0x04, VAR5, &VAR3, false);
        VAR2->VAR21[VAR5] = (VAR3 & 0xff);
        FUN8(VAR2, 0x08, VAR5, &VAR3, false);
        VAR2->VAR22[VAR5] = (VAR3 & 0x7);
        FUN8(VAR2, 0x1c, VAR5, &VAR3, false);
        VAR2->VAR23[VAR5] = (VAR3 & 0x7);
        for (VAR4 = 0; VAR4 < 4; VAR4++)
        {
            FUN8(VAR2, 0xd0 + VAR4 * 4, VAR5, &VAR3, false);
            VAR2->VAR24[VAR4][VAR5] = VAR3;
        }
    }
}