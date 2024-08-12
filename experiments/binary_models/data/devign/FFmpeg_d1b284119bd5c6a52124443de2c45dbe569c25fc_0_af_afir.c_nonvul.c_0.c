static int FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    VAR5 *VAR6 = VAR2->VAR7;
    VAR8 *VAR9 = VAR6->VAR10;
    int VAR11, VAR12, VAR13;
    VAR13 = FUN2(VAR9->VAR14[1], (void **)VAR4->VAR15, VAR4->VAR16);
    FUN3(&VAR4);
    if (VAR13 < 0)
        return VAR13;
    VAR11 = FUN4(VAR9->VAR14[1]);
    VAR12 = VAR17 * VAR6->VAR18[0]->VAR19;
    if (VAR11 > VAR12)
    {
        FUN5(VAR6, VAR20, "", VAR11, VAR12);
        return FUN6(VAR21);
    }
    return 0;
}