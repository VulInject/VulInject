static int FUN1(VAR1 *VAR2, void *VAR3, int VAR4)
{
    VAR5 *VAR6 = VAR3;
    VAR7 *VAR8 = FUN2(VAR6);
    int VAR9;
    if (VAR4 < 2 || VAR4 > VAR10)
        return -VAR11;
    VAR9 = FUN3(VAR8, VAR2, VAR4);
    if (VAR9)
    {
        return VAR9;
    }
    if (FUN4(VAR8, VAR12))
    {
        VAR6->VAR13 = FUN5(VAR2);
    }
    else
    {
        VAR6->VAR13 = FUN6(VAR6);
    }
    if (FUN7(VAR6))
    {
        FUN8(VAR6);
    }
    if (FUN4(VAR8, VAR14) && FUN4(VAR8, VAR15))
    {
        VAR6->VAR16 = VAR17;
        FUN9(VAR6->VAR18, FUN10(VAR19));
    }
    return 0;
}