static int FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    if (VAR4->VAR5 & VAR6)
    {
        FUN2(VAR2, VAR7, "");
        return VAR8;
    }
    VAR2->VAR9.VAR10 = FUN3(&VAR4->VAR11);
    VAR2->VAR9.VAR12 = FUN3(&VAR4->VAR11);
    if (VAR2->VAR9.VAR10 < 0 || VAR2->VAR9.VAR12 < 0)
        VAR2->VAR9 = (VAR13){0, 1};
    FUN4(&VAR4->VAR11, 1);
    FUN4(&VAR4->VAR11, 4);
    return 0;
}