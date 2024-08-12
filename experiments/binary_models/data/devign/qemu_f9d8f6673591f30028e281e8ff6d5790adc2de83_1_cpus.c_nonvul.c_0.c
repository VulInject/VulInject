static void *FUN1(void *VAR1)
{
    VAR2 *VAR3 = VAR1;
    FUN2();
    FUN3(VAR3->VAR4);
    FUN4(&VAR5);
    FUN5(VAR3)
    {
        VAR3->VAR6 = FUN6();
        VAR3->VAR7 = true;
        VAR3->VAR8 = 1;
    }
    FUN7(&VAR9);
    while (FUN8(&VAR10)->VAR11)
    {
        FUN9(VAR12, &VAR5);
        FUN5(VAR3) { FUN10(VAR3); }
    }
    while (1)
    {
        FUN11();
        if (VAR13)
        {
            int64_t VAR14 = FUN12(VAR15);
            if (VAR14 == 0)
            {
                FUN13(VAR15);
            }
        }
        FUN14();
    }
    return NULL;
}