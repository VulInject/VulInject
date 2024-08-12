int FUN1(VAR1 *VAR2, int VAR3)
{
    int VAR4;
    assert(FUN2(VAR2) || FUN3(VAR2));
    VAR4 = FUN4(VAR2, 1);
    if (VAR4 < 0)
    {
        return VAR4;
    }
    VAR4 = FUN5(VAR2);
    if (VAR4 < 0)
    {
        return VAR4;
    }
    VAR4 = FUN6(VAR2);
    if (VAR4 < 0)
    {
        return VAR4;
    }
    VAR4 = FUN7(VAR2);
    if (VAR4 < 0)
    {
        return VAR4;
    }
    VAR4 = FUN8(VAR2, VAR3);
    if (VAR4 < 0)
    {
        return VAR4;
    }
    if (VAR3 >= VAR5)
    {
        VAR4 = FUN9(VAR2);
        if (VAR4 < 0)
        {
            return VAR4;
        }
    }
    VAR4 = FUN10(VAR2, VAR3);
    if (VAR4 < 0)
    {
        return VAR4;
    }
    VAR4 = FUN11(VAR2);
    if (VAR4 < 0)
    {
        return VAR4;
    }
    VAR4 = FUN12(VAR2);
    if (VAR4 < 0)
    {
        return VAR4;
    }
    return 0;
}