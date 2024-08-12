int FUN1(VAR1 *VAR2, VAR3 *VAR4, int *VAR5, VAR6 *VAR7, int VAR8)
{
    int VAR9;
    *VAR5 = 0;
    if ((VAR2->VAR10->VAR11 & VAR12) || VAR8)
    {
        VAR9 = VAR2->VAR10->FUN2(VAR2, VAR4, VAR5, VAR7, VAR8);
        VAR2->VAR13++;
    }
    else
        VAR9 = 0;
    return VAR9;
}