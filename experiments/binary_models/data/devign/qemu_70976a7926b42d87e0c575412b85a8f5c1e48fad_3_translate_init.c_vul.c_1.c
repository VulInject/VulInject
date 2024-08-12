static int FUN1(VAR1 *VAR2, VAR3 *VAR4, int VAR5)
{
    if (VAR5 < 32)
    {
        FUN2(VAR4, VAR2->VAR6[VAR5] >> 32);
        FUN2(VAR4, VAR2->VAR7[VAR5]);
        return 4;
    }
    if (VAR5 == 33)
    {
        FUN3(VAR4, VAR2->VAR8);
        return 8;
    }
    if (VAR5 == 34)
    {
        memset(VAR4, 0, 4);
        return 4;
    }
    return 0;
}