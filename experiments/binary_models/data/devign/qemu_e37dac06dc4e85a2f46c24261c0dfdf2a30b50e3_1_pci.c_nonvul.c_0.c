static int FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = &VAR2->VAR4;
    int VAR5;
    if (!(VAR4->VAR6[VAR7] & VAR8) || !VAR4->VAR6[VAR9])
    {
        return 0;
    }
    VAR5 = FUN2(VAR2, VAR4->VAR6[VAR9]);
    if (VAR5)
    {
        return VAR5;
    }
    return FUN3(VAR2);
}