static void FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = &VAR2->VAR5->VAR4;
    int VAR6, VAR7, VAR8, VAR9;
    FUN2(VAR4);
    VAR6 = FUN3(VAR4);
    if (VAR6 == 0)
    {
        VAR7 = FUN4(VAR4, 7);
        VAR8 = FUN3(VAR4);
        VAR9 = FUN4(VAR4, 6);
        FUN5(VAR4, 6);
        if (VAR8 == 0 && VAR7 != 5)
            FUN5(VAR4, 16);
        FUN5(VAR4, 8);
        FUN6(VAR4);
    }
    FUN6(VAR4);
    VAR2->VAR10 = (VAR6 == 0);
    VAR2->VAR11 = VAR7;
    VAR2->VAR12 = VAR9;
    VAR2->VAR13 = VAR8;
}