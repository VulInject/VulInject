static int FUN1(VAR1 *VAR2)
{
    unsigned int VAR3, VAR4;
    if (VAR2->VAR5 < 20)
        return 0;
    VAR3 = FUN2(&VAR2->VAR6[0]);
    if ((VAR3 == 0) || (VAR3 > 1024))
        return 0;
    VAR3 = FUN2(&VAR2->VAR6[4]);
    if ((VAR3 == 0) || (VAR3 > 1024))
        return 0;
    VAR4 = FUN2(&VAR2->VAR6[8]);
    if (VAR4 && (VAR4 < 8000 || VAR4 > 48000))
        return 0;
    VAR3 = FUN2(&VAR2->VAR6[12]);
    if (VAR3 > 2 || VAR4 && !VAR3)
        return 0;
    VAR3 = FUN2(&VAR2->VAR6[16]);
    if (VAR3 > 2 || VAR4 && !VAR3)
        return 0;
    return VAR7;
}