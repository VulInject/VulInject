VAR1 FUN1(VAR2 *VAR3, int64_t VAR4)
{
    int64_t VAR5;
    int VAR6;
    FUN2(VAR3->VAR7, VAR8);
    VAR5 = FUN3(VAR3, VAR4);
    if (VAR5 < 0)
    {
        return VAR5;
    }
    VAR6 = FUN4(VAR3, VAR5, VAR4, 1, VAR9);
    if (VAR6 < 0)
    {
        return VAR6;
    }
    return VAR5;
}