static int FUN1(VAR1 *VAR2)
{
    GetByteContext VAR3;
    FUN2(&VAR3, VAR2->VAR4->VAR5, VAR2->VAR4->VAR6);
    FUN3(&VAR3, 12);
    VAR2->VAR7 = FUN4(&VAR3);
    if (!VAR2->VAR7 || VAR2->VAR7 > VAR8)
    {
        FUN5(VAR2->VAR4, VAR9, "", VAR2->VAR7);
        return VAR10;
    }
    FUN3(&VAR3, 1);
    VAR2->VAR11 = FUN6(&VAR3);
    VAR2->VAR12 = FUN6(&VAR3);
    VAR2->VAR13 = FUN6(&VAR3);
    VAR2->VAR14 = FUN6(&VAR3);
    VAR2->VAR15 = FUN6(&VAR3);
    FUN7(&VAR3);
    FUN4(&VAR3);
    FUN4(&VAR3);
    FUN4(&VAR3);
    return 0;
}