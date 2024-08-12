static int FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = VAR2->VAR5->VAR6;
    int VAR7;
    if (VAR4->VAR8)
        return VAR9;
    if ((VAR7 = FUN2(VAR2)) < 0)
        return VAR7;
    FUN3(VAR2, FUN4(VAR4->VAR10, ~0));
    FUN5(VAR4->VAR10);
    VAR4->VAR10 = NULL;
    return 0;
}