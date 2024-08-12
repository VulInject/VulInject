static int FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = VAR2->VAR5->VAR6;
    int VAR7;
    if (VAR4->VAR8 == VAR9)
        return VAR10;
    do
    {
        if ((VAR7 = FUN2(VAR2)) < 0)
            return VAR7;
    } while (!VAR4->VAR11);
    FUN3(VAR2, FUN4(VAR4->VAR11, ~0));
    FUN5(VAR4->VAR11);
    VAR4->VAR11 = NULL;
    return 0;
}