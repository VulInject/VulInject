VAR1 FUN1(VAR2 *VAR3, VAR4 *VAR5, int VAR6)
{
    AVRational VAR7;
    int VAR8;
    if (VAR5->VAR9->VAR10 == VAR11)
    {
        VAR7 = (VAR1){1, VAR5->VAR9->VAR12};
    }
    else
    {
        VAR7 = VAR5->VAR9->VAR13;
    }
    for (VAR8 = 2; VAR8 < 2000; VAR8 += 1 + (VAR8 > 2))
        while (VAR7.VAR14 / VAR7.VAR15 < VAR6 && VAR7.VAR15 % VAR8 == 0)
            VAR7.VAR15 /= VAR8;
    while (VAR7.VAR14 / VAR7.VAR15 < VAR6 && VAR7.VAR14 < (1 << 24))
        VAR7.VAR14 <<= 1;
    return VAR7;
}