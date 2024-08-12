static int FUN1(VAR1 *VAR2, VAR3 *VAR4, VAR5 *VAR6)
{
    Jpeg2000CodingStyle VAR7;
    int VAR8, VAR9;
    if (FUN2(&VAR2->VAR10) < 5)
        VAR7.VAR11 = FUN3(&VAR2->VAR10);
    VAR7.VAR12 = FUN3(&VAR2->VAR10);
    VAR7.VAR13 = FUN4(&VAR2->VAR10);
    VAR7.VAR14 = FUN3(&VAR2->VAR10);
    if ((VAR9 = FUN5(VAR2, &VAR7)) < 0)
        return VAR9;
    for (VAR8 = 0; VAR8 < VAR2->VAR15; VAR8++)
        if (!(VAR6[VAR8] & VAR16))
            memcpy(VAR4 + VAR8, &VAR7, sizeof(VAR7));
    return 0