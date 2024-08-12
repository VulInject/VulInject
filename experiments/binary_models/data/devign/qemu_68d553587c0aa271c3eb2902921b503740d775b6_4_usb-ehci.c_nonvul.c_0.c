static int FUN1(VAR1 *VAR2, int VAR3)
{
    int VAR4 = 0;
    FUN2(VAR2->VAR5, FUN3(VAR2->VAR6), (VAR7 *)&VAR2->VAR8, sizeof(VAR9) >> 2);
    FUN4(VAR2, FUN3(VAR2->VAR6), &VAR2->VAR8);
    if (VAR2->VAR8.VAR10 & VAR11)
    {
        FUN5(VAR2->VAR5, VAR3, VAR12);
        VAR4 = 1;
    }
    else
    {
        FUN5(VAR2->VAR5, VAR3, VAR13);
        VAR4 = 1;
    }
    return VAR4;
}