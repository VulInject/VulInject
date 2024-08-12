static int FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    if (VAR2->VAR5 - VAR2->VAR6 < 5)
        return FUN2(VAR7);
    VAR4->VAR8 = FUN3(&VAR2->VAR6) + 1;
    VAR4->VAR9 = FUN3(&VAR2->VAR6) + 2;
    VAR4->VAR10 = FUN3(&VAR2->VAR6) + 2;
    VAR4->VAR11 = FUN3(&VAR2->VAR6);
    if (VAR4->VAR11 != 0)
    {
        FUN4(VAR2->VAR12, VAR13, "", VAR4->VAR11);
    }
    VAR4->VAR14 = FUN3(&VAR2->VAR6);
    if (VAR4->VAR15 & VAR16)
    {
        int VAR17;
        for (VAR17 = 0; VAR17 < VAR4->VAR8; VAR17++)
            FUN3(&VAR2->VAR6);
    }
    return 0;
}