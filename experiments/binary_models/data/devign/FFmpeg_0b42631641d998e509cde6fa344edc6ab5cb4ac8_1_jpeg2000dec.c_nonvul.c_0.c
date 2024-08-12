static int FUN1(VAR1 *VAR2, VAR3 *VAR4, VAR5 *VAR6)
{
    Jpeg2000CodingStyle VAR7;
    int VAR8;
    if (FUN2(&VAR2->VAR9) < 5)
        return FUN3(VAR10);
    VAR7.VAR11 = VAR7.VAR12 = 15;
    VAR7.VAR13 = FUN4(&VAR2->VAR9);
    VAR7.VAR14 = FUN4(&VAR2->VAR9);
    VAR7.VAR15 = FUN5(&VAR2->VAR9);
    VAR7.VAR16 = FUN4(&VAR2->VAR9);
    FUN6(VAR2, &VAR7);
    for (VAR8 = 0; VAR8 < VAR2->VAR17; VAR8++)
        if (!(VAR6[VAR8] & VAR18))
            memcpy(VAR4 + VAR8, &VAR7, sizeof(VAR7));
    return 0;
}