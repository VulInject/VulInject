static void FUN1(void *VAR1)
{
    VAR2 *VAR3 = NULL;
    VAR4 *VAR5 = VAR1;
    FUN2(&VAR3);
    FUN3(&VAR5->VAR6, VAR7, VAR8);
    FUN4(VAR3);
    FUN5();
    FUN6(VAR9);
    FUN7();
    if (!FUN8() || FUN9() == VAR10)
    {
        if (VAR11)
        {
            FUN10();
        }
        else
        {
            FUN11(VAR12);
        }
        else
        {
            FUN11(FUN9());
            FUN5();
            FUN3(&VAR5->VAR6, VAR7, VAR13);
            FUN12(VAR5->VAR14);
            FUN13()