static int FUN1(VAR1 *VAR2)
{
    if (memcmp(VAR2->VAR3, "", 3))
        return 0;
    if (FUN2(VAR2->VAR3 + 8) <= 0)
        return 0;
    if (FUN2(VAR2->VAR3 + 16) <= 0)
        return 0;
    return VAR4 / 3 * 2;