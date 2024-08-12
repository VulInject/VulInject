static int FUN1(VAR1 *VAR2)
{
    int VAR3;
    char VAR4[VAR5];
    int64_t VAR6 = FUN2(VAR2->VAR7);
    int VAR8 = 3 * 80;
    VAR9 *VAR10 = FUN3(sizeof(*VAR10) * VAR8);
    VAR11 *VAR12 = VAR2->VAR13;
    VAR3 = FUN4(VAR2->VAR7, VAR10, VAR8);
    if (VAR3 < 0)
        goto VAR14;
    if (VAR3 < VAR8)
    {
        VAR3 = -1;
        goto VAR14;
    }
    VAR3 = FUN5(VAR12->VAR15, VAR10, VAR4);
    if (VAR3)
        FUN6(&VAR2->VAR16, "", VAR4, 0);
    else
        FUN7(VAR2, VAR17, "");
VAR14:
    FUN8(VAR10);
    FUN9(VAR2->VAR7, VAR6, VAR18);
    return VAR3;
}