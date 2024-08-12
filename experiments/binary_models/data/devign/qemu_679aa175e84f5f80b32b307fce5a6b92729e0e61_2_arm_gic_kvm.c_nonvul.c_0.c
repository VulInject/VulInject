static void FUN1(VAR1 *VAR2)
{
    uint32_t VAR3;
    int VAR4;
    int VAR5;
    int VAR6;
    int VAR7;
    if (!FUN2(VAR2))
    {
        FUN3("");
        return;
    }
    VAR3 = VAR2->VAR8;
    FUN4(VAR2, 0x0, 0, &VAR3, true);
    FUN4(VAR2, 0x4, 0, &VAR3, false);
    VAR7 = ((VAR3 & 0x1f) + 1) * 32;
    VAR6 = ((VAR3 & 0xe0) >> 5) + 1;
    if (VAR7 < VAR2->VAR7)
    {
        fprintf(VAR9, "", VAR2->VAR7, VAR7);
        FUN5();
    }
    else if (VAR6 != VAR2->VAR6)
    {
        fprintf(VAR9, "", VAR2->VAR6, VAR6);
        FUN5();
    }
    FUN6(VAR2, 0x180, 1, VAR2->VAR7, VAR10);
    FUN6(VAR2, 0x100, 1, VAR2->VAR7, VAR11);
    FUN6(VAR2, 0x80, 1, VAR2->VAR7, VAR12);
    FUN6(VAR2, 0x800, 8, VAR2->VAR7, VAR13);
    FUN6(VAR2, 0xc00, 2, VAR2->VAR7, VAR14);
    FUN6(VAR2, 0x280, 1, VAR2->VAR7, VAR10);
    FUN6(VAR2, 0x200, 1, VAR2->VAR7, VAR15);
    FUN6(VAR2, 0x380, 1, VAR2->VAR7, VAR10);
    FUN6(VAR2, 0x300, 1, VAR2->VAR7, VAR16);
    FUN6(VAR2, 0x400, 8, VAR2->VAR7, VAR17);
    FUN6(VAR2, 0xf10, 8, VAR18, VAR10);
    FUN6(VAR2, 0xf20, 8, VAR18, VAR19);
    for (VAR5 = 0; VAR5 < VAR2->VAR6; VAR5++)
    {
        VAR3 = VAR2->VAR20[VAR5];
        FUN7(VAR2, 0x00, VAR5, &VAR3, true);
        VAR3 = (VAR2->VAR21[VAR5] & 0xff);
        FUN7(VAR2, 0x04, VAR5, &VAR3, true);
        VAR3 = (VAR2->VAR22[VAR5] & 0x7);
        FUN7(VAR2, 0x08, VAR5, &VAR3, true);
        VAR3 = (VAR2->VAR23[VAR5] & 0x7);
        FUN7(VAR2, 0x1c, VAR5, &VAR3, true);
        for (VAR4 = 0; VAR4 < 4; VAR4++)
        {
            VAR3 = VAR2->VAR24[VAR4][VAR5];
            FUN7(VAR2, 0xd0 + VAR4 * 4, VAR5, &VAR3, true);
        }
    }
}