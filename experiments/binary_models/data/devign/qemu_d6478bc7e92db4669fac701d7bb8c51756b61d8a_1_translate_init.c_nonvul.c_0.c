static int FUN1(VAR1 *VAR2, VAR3 *VAR4, int VAR5)
{
    if (VAR5 < 32)
    {
        VAR2->VAR6[VAR5] = FUN2(VAR4);
        return 8;
    }
    if (VAR5 == 32)
    {
        FUN3(VAR2, FUN4(VAR4), 0xffffffff);
        return 4;
    }
    return 0;
}