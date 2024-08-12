static int FUN1(VAR1 *VAR2, VAR3 *VAR4, BdrvCheckMode VAR5)
{
    int VAR6 = FUN2(VAR2, VAR4, VAR5);
    if (VAR6 < 0)
    {
        return VAR6;
    }
    if (VAR5 && VAR4->VAR7 == 0 && VAR4->VAR8 == 0)
    {
        return FUN3(VAR2);
    }
    return VAR6;
}