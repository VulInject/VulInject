static int FUN1(VAR1 *VAR2, VAR3 *VAR4, void *VAR5, int VAR6)
{
    int VAR7, VAR8;
    VAR9 *VAR10;
    VAR10 = FUN2(VAR4);
    VAR7 = FUN3(VAR5, VAR6, VAR10);
    FUN4(VAR10);
    VAR8 = FUN5(VAR4, VAR5, VAR7, VAR2);
    FUN6(!VAR8);
    if (VAR8)
    {
        return 0;
    }
    return VAR7;
}