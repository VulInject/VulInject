static int FUN1(VAR1 *VAR2)
{
    if (VAR2->VAR3 >= 0)
    {
        return VAR2->VAR3;
    }
    VAR2->VAR3 = FUN2(false);
    if (VAR2->VAR3 < 0)
    {
        FUN3("", strerror(VAR4));
    }
    return VAR2->VAR3;
}