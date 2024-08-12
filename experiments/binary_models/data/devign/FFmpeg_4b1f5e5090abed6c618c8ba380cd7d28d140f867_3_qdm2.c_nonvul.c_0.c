static int FUN1(VAR1 *VAR2, const VAR3 *VAR4, VAR5 *VAR6)
{
    int VAR7, VAR8;
    const int VAR9 = (VAR2->VAR9 * VAR2->VAR10);
    VAR2->VAR11 = VAR4;
    VAR2->VAR12 = VAR2->VAR13;
    memmove(VAR2->VAR14, &VAR2->VAR14[VAR9], VAR9 * sizeof(float));
    memset(&VAR2->VAR14[VAR9], 0, VAR9 * sizeof(float));
    if (VAR2->VAR15 == 0)
    {
        VAR2->VAR16 = 0;
        FUN2(NULL, VAR17, "");
        FUN3(VAR2);
    }
    if (!VAR2->VAR16)
    {
        if (VAR2->VAR15 == 2)
            FUN4(VAR2);
        FUN5(VAR2, VAR2->VAR15);
    }
    for (VAR7 = 0; VAR7 < VAR2->VAR10; VAR7++)
    {
        FUN6(VAR2, VAR7, VAR2->VAR15);
        if (!VAR2->VAR16 && VAR2->VAR18[0].VAR19)
        {
            FUN7("")
            return -1;
        }
    }
    if (!VAR2->VAR16 && VAR2->VAR20)
        FUN8(VAR2, VAR2->VAR15);
    VAR2->VAR15 = (VAR2->VAR15 + 1) % 16;
    for (VAR8 = 0; VAR8 < VAR9; VAR8++)
    {
        int VAR21 = (int)VAR2->VAR14[VAR8];
        if (VAR21 > VAR22)
            VAR21 = (VAR21 > VAR23) ? 32767 : VAR24[VAR21 - VAR22];
        else if (VAR21 < -VAR22)
            VAR21 = (VAR21 < -VAR23) ? -32767 : -VAR24[-VAR21 - VAR22];
        VAR6[VAR8] = VAR21;
    }
    return 0;
}