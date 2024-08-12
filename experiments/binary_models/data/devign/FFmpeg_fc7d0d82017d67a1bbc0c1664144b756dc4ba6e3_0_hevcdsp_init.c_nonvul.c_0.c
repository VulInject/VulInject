void FUN1(VAR1 *VAR2, const int VAR3)
{
    int VAR4 = FUN2();
    if (VAR3 == 8)
    {
        if (FUN3(VAR4) && VAR5)
        {
            FUN4(VAR2->VAR6, 0, 0, VAR7, 8);
            FUN4(VAR2->VAR6, 0, 1, VAR8, 8);
            FUN4(VAR2->VAR6, 1, 0, VAR9, 8);
            FUN4(VAR2->VAR6, 1, 1, VAR10, 8);
            FUN5(VAR2->VAR11, 0, 0, VAR7, 8);
            FUN5(VAR2->VAR11, 0, 1, VAR12, 8);
            FUN5(VAR2->VAR11, 1, 0, VAR13, 8);
            FUN5(VAR2->VAR11, 1, 1, VAR14, 8);
        }
    }
    else if (VAR3 == 10)
    {
        if (FUN3(VAR4) && VAR5)
        {
            FUN4(VAR2->VAR6, 0, 0, VAR7, 10);
            FUN4(VAR2->VAR6, 0, 1, VAR8, 10);
            FUN4(VAR2->VAR6, 1, 0, VAR9, 10);
            FUN4(VAR2->VAR6, 1, 1, VAR10, 10);
            FUN5(VAR2->VAR11, 0, 0, VAR7, 10);
            FUN5(VAR2->VAR11, 0, 1, VAR12, 10);
            FUN5(VAR2->VAR11, 1, 0, VAR13, 10);
            FUN5(VAR2->VAR11, 1, 1, VAR14, 10);
        }
    }
}