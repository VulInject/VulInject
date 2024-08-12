static int FUN1(VAR1 *VAR2, VAR3 *VAR4, VAR5 *VAR6)
{
    J2kCodingStyle VAR7;
    int VAR8;
    if (VAR2->VAR9 - VAR2->VAR10 < 5)
        return FUN2(VAR11);
    VAR7.VAR12 = VAR7.VAR13 = 15;
    VAR7.VAR14 = FUN3(&VAR2->VAR10);
    if (FUN3(&VAR2->VAR10))
    {
        FUN4(VAR2->VAR15, VAR16, "");
        return -1;
    }
    VAR7.VAR17 = FUN5(&VAR2->VAR10);
    VAR7.VAR18 = FUN3(&VAR2->VAR10);
    FUN6(VAR2, &VAR7);
    for (VAR8 = 0; VAR8 < VAR2->VAR19; VAR8++)
    {
        if (!(VAR6[VAR8] & VAR20))
            memcpy(VAR4 + VAR8, &VAR7, sizeof(VAR3));
    }
    return 0;
}