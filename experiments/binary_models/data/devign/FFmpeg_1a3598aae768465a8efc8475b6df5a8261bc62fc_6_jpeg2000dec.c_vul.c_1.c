static int FUN1(VAR1 *VAR2, VAR3 *VAR4, VAR5 *VAR6)
{
    Jpeg2000CodingStyle VAR7;
    int VAR8;
    if (VAR2->VAR9 - VAR2->VAR10 < 5)
        return VAR11;
    VAR7.VAR12 = VAR7.VAR13 = 15;
    VAR7.VAR14 = FUN2(&VAR2->VAR10);
    VAR7.VAR15 = FUN2(&VAR2->VAR10);
    VAR7.VAR16 = FUN3(&VAR2->VAR10);
    VAR7.VAR17 = FUN2(&VAR2->VAR10);
    FUN4(VAR2, &VAR7);
    for (VAR8 = 0; VAR8 < VAR2->VAR18; VAR8++)
        if (!(VAR6[VAR8] & VAR19))
            memcpy(VAR4 + VAR8, &VAR7, sizeof(VAR7));
    return 0;
}