static int FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    int VAR5;
    VAR6 *VAR7 = VAR2->VAR8;
    VAR9 *VAR10 = VAR2->VAR11->VAR12;
    FUN2(&VAR4->VAR13[0]);
    if (!VAR7->VAR14 || !VAR10->VAR15)
        return VAR16;
    VAR5 = FUN3(VAR2);
    if (VAR5)
    {
        FUN4(VAR2, VAR17, "", VAR5);
        return VAR18;
    }
    if (!VAR10->VAR4)
        return VAR18;
    return FUN5(VAR10, VAR4);
}