int FUN1(VAR1 *VAR2, VAR3 *VAR4, int *VAR5, VAR6 *VAR7, int VAR8)
{
    int VAR9;
    if ((VAR2->VAR10->VAR11 & VAR12) || VAR8)
    {
        if (*VAR5 < VAR13)
        {
            FUN2(VAR2, VAR14, "");
            return -1;
        }
        if (*VAR5 < VAR15 || *VAR5 < VAR2->VAR16 * VAR2->VAR17 * sizeof(VAR3) || *VAR5 < VAR8)
        {
            FUN2(VAR2, VAR14, "", *VAR5);
            return -1;
        }
        VAR9 = VAR2->VAR10->FUN3(VAR2, VAR4, VAR5, VAR7, VAR8);
        VAR2->VAR18++;
    }
    else
    {
        VAR9 = 0;
        *VAR5 = 0;
    }
    return VAR9;
}