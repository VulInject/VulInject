int FUN1(VAR1 *VAR2)
{
    int VAR3;
    int VAR4;
    VAR3 = VAR5;
    FUN2(0);
    VAR4 = FUN3(VAR2);
    if (VAR4 < 0)
        goto VAR6;
    do
    {
        VAR4 = FUN4(VAR2);
        if (VAR4 < 0)
            goto VAR6;
    } while (VAR4 == 0);
    VAR4 = FUN5(VAR2);
VAR6:
    if (FUN6(VAR2))
        VAR4 = -VAR7;
    if (!VAR4 && VAR3)
        FUN7();
    return VAR4;
}