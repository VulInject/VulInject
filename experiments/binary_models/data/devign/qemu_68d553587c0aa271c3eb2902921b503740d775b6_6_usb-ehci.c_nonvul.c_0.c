static int FUN1(VAR1 *VAR2, int VAR3)
{
    int VAR4 = 0;
    FUN2(VAR2, FUN3(VAR2->VAR5), (VAR6 *)&VAR2->VAR7.VAR8);
    FUN4(VAR2->VAR9, FUN3(VAR2->VAR5), (VAR10 *)&VAR2->VAR7.VAR8, sizeof(VAR6) >> 2);
    if (VAR2->VAR7.VAR11 & VAR12)
    {
        FUN5(VAR2->VAR9, VAR3, VAR13);
        VAR4 = 1;
    }
    else
    {
        FUN5(VAR2->VAR9, VAR3, VAR14);
        VAR4 = 1;
    }
    return VAR4;
}