static int FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = &VAR2->VAR5->VAR4;
    FUN2(VAR4);
    VAR2->VAR6 = !FUN3(VAR4);
    if (VAR2->VAR6)
    {
        VAR2->VAR7 = FUN4(VAR4, 7);
        VAR2->VAR8 = FUN3(VAR4);
        VAR2->VAR9 = FUN4(VAR4, 6);
        FUN5(VAR4, 6);
        if (!VAR2->VAR8 && VAR2->VAR7 != 5)
            FUN5(VAR4, 16);
        FUN5(VAR4, 8);
        FUN6(VAR4);
    }
    FUN6(VAR4);
    return 0;
}