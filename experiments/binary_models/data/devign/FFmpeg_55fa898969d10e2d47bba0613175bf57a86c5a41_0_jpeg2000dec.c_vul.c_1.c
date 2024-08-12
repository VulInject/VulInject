static int FUN1(VAR1 *VAR2, int VAR3, VAR4 *VAR5, VAR6 *VAR7)
{
    Jpeg2000QuantStyle VAR8;
    int VAR9, VAR10;
    if ((VAR10 = FUN2(VAR2, VAR3, &VAR8)) < 0)
        return VAR10;
    for (VAR9 = 0; VAR9 < VAR2->VAR11; VAR9++)
        if (!(VAR7[VAR9] & VAR12))
            memcpy(VAR5 + VAR9, &VAR8, sizeof(VAR8));
    return 0;