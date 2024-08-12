static int FUN1(VAR1 *VAR2)
{
    int VAR3 = 8 * FUN2(&VAR2->VAR3, VAR2->VAR4);
    if (VAR3 > VAR2->VAR5->VAR6 * 2000)
    {
        return 1000;
    }
    return 0;
}