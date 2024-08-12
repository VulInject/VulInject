static void FUN1(void *VAR1)
{
    VAR2 *VAR3 = VAR1;
    if (!VAR4)
    {
        VAR3->VAR5 = FUN2(sizeof(VAR6));
        VAR3->VAR7 = FUN2(sizeof(VAR8));
        FUN3(VAR3->VAR7);
        FUN4(VAR3->VAR5, VAR9, VAR3);
        while (VAR3->VAR10 == 0)
        {
            FUN5(&VAR11, &VAR12, 100);
        }
        VAR4 = VAR3->VAR5;
        VAR13 = VAR3->VAR7;
    }
    else
    {
        VAR3->VAR5 = VAR4;
        VAR3->VAR7 = VAR13;
    }
}