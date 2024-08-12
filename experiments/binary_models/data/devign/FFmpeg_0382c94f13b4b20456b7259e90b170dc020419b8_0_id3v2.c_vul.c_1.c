static int FUN1(VAR1 *VAR2, int VAR3, unsigned int VAR4)
{
    char VAR5[4];
    if (VAR4 > 4 || FUN2(VAR2, VAR3, VAR6) < 0 || FUN3(VAR2, VAR5, VAR4) < VAR4)
        return -1;
    else if (!FUN4(VAR5) || FUN5(VAR5, VAR4))
        return 1;
    return 0;
}