VAR1 FUN1(VAR2 *VAR3)
{
    offset_t VAR4, VAR5;
    VAR5 = FUN2(VAR3, 0, VAR6);
    if (VAR5 < 0)
    {
        VAR4 = FUN2(VAR3, 0, VAR7);
        if ((VAR5 = FUN2(VAR3, -1, VAR8)) < 0)
            return VAR5;
        VAR5++;
        FUN2(VAR3, VAR4, VAR9);
    }
    return VAR5;
}