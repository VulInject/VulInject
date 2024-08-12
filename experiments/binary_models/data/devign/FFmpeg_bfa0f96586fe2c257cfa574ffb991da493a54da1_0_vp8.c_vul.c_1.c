static int FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    int VAR5;
    if ((VAR5 = FUN2(VAR2->VAR6, VAR4)) < 0)
        return VAR5;
    if (!VAR2->VAR7 && VAR2->VAR8)
    {
        VAR4->VAR9[0] = VAR2->VAR10[--VAR2->VAR8];
    }
    else if (!(VAR4->VAR9[0] = FUN3(VAR2->VAR11 * VAR2->VAR12)))
    {
        FUN4(VAR2->VAR6, VAR4);
        return FUN5(VAR13);
    }
    return 0;
}