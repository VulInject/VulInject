static unsigned FUN1(VAR1 *VAR2)
{
    unsigned VAR3;
    if (FUN2(VAR2) < 1)
        return -1;
    VAR3 = FUN3(VAR2);
    if (!VAR3)
        return VAR3;
    VAR3 += FUN4(VAR2, 3);
    if (VAR3 != (1 + ((1 << 3) - 1)))
        return VAR3;
    VAR3 += FUN4(VAR2, 7);
    if (VAR3 != (1 + ((1 << 3) - 1)) + ((1 << 7) - 1))
        return VAR3;
    return VAR3 + FUN4(VAR2, 12);
}