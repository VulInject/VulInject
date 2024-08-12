static int FUN1(void *VAR1)
{
    VAR2 *VAR3 = VAR1;
    int VAR4;
    VAR4 = FUN2(VAR3->VAR5);
    if (VAR4)
    {
        return VAR4;
    }
    if (VAR3->VAR6 > VAR3->VAR7)
    {
        return 1;
    }
    return 0;
}