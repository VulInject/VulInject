static int FUN1(VAR1 *VAR2, int VAR3)
{
    VAR4 *VAR5 = VAR2->VAR6;
    uint32_t VAR7, VAR8 = 1, VAR9;
    VAR2->VAR10 = 1;
    if (FUN2(VAR2->VAR11, 128, &VAR5->VAR12, 4) < 4)
    {
        goto VAR13;
    }
    VAR5->VAR12 = FUN3(VAR5->VAR12);
    if (FUN2(VAR2->VAR11, 128 + 4, &VAR5->VAR14, 4) < 4)
    {
        goto VAR13;
    }
    VAR5->VAR14 = FUN3(VAR5->VAR14);
    VAR7 = VAR5->VAR14 * sizeof(VAR15);
    VAR5->VAR16 = FUN4(VAR7);
    if (FUN2(VAR2->VAR11, 128 + 4 + 4, VAR5->VAR16, VAR7) < VAR7)
    {
        goto VAR13;
    }
    for (VAR9 = 0; VAR9 < VAR5->VAR14; VAR9++)
    {
        VAR5->VAR16[VAR9] = FUN5(VAR5->VAR16[VAR9]);
        if (VAR9 > 0)
        {
            uint32_t VAR17 = VAR5->VAR16[VAR9] - VAR5->VAR16[VAR9 - 1];
            if (VAR17 > VAR8)
            {
                VAR8 = VAR17;
            }
        }
    }
    VAR5->VAR18 = FUN4(VAR8 + 1);
    VAR5->VAR19 = FUN4(VAR5->VAR12);
    if (FUN6(&VAR5->VAR20) != VAR21)
    {
        goto VAR13;
    }
    VAR5->VAR22 = VAR5->VAR14;
    VAR5->VAR23 = VAR5->VAR12 / 512;
    VAR2->VAR24 = VAR5->VAR14 * VAR5->VAR23;
    FUN7(&VAR5->VAR25);
    return 0;
VAR13:
    return -1;
}