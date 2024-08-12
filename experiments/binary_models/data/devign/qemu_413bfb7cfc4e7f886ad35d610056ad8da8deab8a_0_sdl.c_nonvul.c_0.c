static void FUN1(VAR1 *VAR2)
{
    int VAR3;
    VAR3 = VAR4 | VAR5 | VAR6;
    if (VAR7)
        VAR3 |= VAR8;
    if (VAR9)
        VAR3 |= VAR10;
    VAR11 = FUN2(FUN3(VAR2), FUN4(VAR2), 0, VAR3);
    if (!VAR11)
    {
        fprintf(VAR12, "");
        FUN5(1);
    }
    FUN6(VAR2);
}