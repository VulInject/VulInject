static int FUN1(VAR1 *VAR2)
{
    int VAR3 = FUN2(VAR2, 0, 0);
    if (VAR3)
    {
        return VAR3;
    }
    return FUN3(VAR2->VAR4->VAR2);
}