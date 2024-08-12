void FUN1(VAR1 *VAR2, const VAR1 *VAR3[5], int VAR4, int VAR5)
{
    if (VAR5 & 3)
        FUN2(VAR2, VAR3, VAR4, VAR5);
    else
        FUN3(VAR2, VAR3[0], VAR4, VAR5);
}