static int FUN1(VAR1 *VAR2)
{
    unsigned int VAR3;
    VAR3 = FUN2(&VAR2->VAR4[0]);
    if ((VAR3 == 0) || (VAR3 > 1024))
        return 0;
    VAR3 = FUN2(&VAR2->VAR4[4]);
    if ((VAR3 == 0) || (VAR3 > 1024))
        return 0;
    VAR3 = FUN2(&VAR2->VAR4[8]);
    if ((VAR3 != 0) && ((VAR3 < 8000) | (VAR3 > 48000)))
        return 0;
    VAR3 = FUN2(&VAR2->VAR4[12]);
    if (VAR3 > 2)
        return 0;
    VAR3 = FUN2(&VAR2->VAR4[16]);
    if (VAR3 > 2)
        return 0;
    return VAR5 / 2;
}