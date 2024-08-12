static void FUN1(VAR1 *VAR2, size_t VAR3)
{
    VAR4 *VAR5 = FUN2(VAR2);
    if (VAR2 != FUN3(&VAR5->VAR6))
    {
        FUN4(&VAR5->VAR6, VAR2, VAR7);
    }
    if (VAR2 != FUN3(&VAR5->VAR6))
    {
        return;
    }
    VAR2->VAR8 = FUN5(VAR5, FUN6(VAR5, VAR2->VAR9) + VAR3);
    VAR2->VAR10 = FUN7(VAR5, VAR2->VAR8);
    FUN8(&VAR2->VAR11, VAR2->VAR12, VAR2->VAR13, VAR3);
    if (FUN9(VAR5))
    {
        VAR5->VAR14.VAR15 |= VAR16;
        FUN10(VAR5, VAR17, VAR2);
    }
    else
    {
        FUN11(VAR2, 0);
    }
}