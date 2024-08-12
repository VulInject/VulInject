static int FUN1(const VAR1 *VAR2, VAR3 *VAR4)
{
    int VAR5, VAR6;
    VAR3 *VAR7;
    VAR7 = FUN2(VAR2->VAR8);
    VAR5 = 0;
    VAR6 = FUN3(VAR7, VAR4, &VAR5);
    if (VAR6)
    {
        goto VAR9;
    }
    VAR6 = FUN4(VAR4, VAR7, VAR5);
VAR9:
    FUN5(VAR7);
    return VAR6;
}