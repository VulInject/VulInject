static int FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = FUN2(VAR5, VAR2, VAR2)->VAR6;
    int VAR7;
    if (!VAR4->VAR8)
        return 1;
    if (!FUN3(VAR4))
        return 1;
    if (FUN4(VAR4))
    {
        return 1;
    }
    else
    {
        VAR7 = FUN5(VAR4->VAR9 + VAR4->VAR10 - VAR4->VAR11, VAR4->VAR9);
        return (VAR7 == 0 || VAR7 >= 1514);
    }