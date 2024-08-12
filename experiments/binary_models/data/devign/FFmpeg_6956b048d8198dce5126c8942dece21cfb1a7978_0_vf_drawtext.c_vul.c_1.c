static int FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = VAR2->VAR5;
    int VAR6;
    VAR7 *VAR8;
    size_t VAR9;
    if ((VAR6 = FUN2(VAR4->VAR10, &VAR8, &VAR9, 0, VAR2)) < 0)
    {
        FUN3(VAR2, VAR11, "", VAR4->VAR10);
        return VAR6;
    }
    if (!(VAR4->VAR12 = FUN4(VAR4->VAR12, VAR9 + 1)))
        return FUN5(VAR13);
    memcpy(VAR4->VAR12, VAR8, VAR9);
    VAR4->VAR12[VAR9] = 0;
    FUN6(VAR8, VAR9);
    return 0;
}