static void FUN1(void *VAR1)
{
    VAR2 *VAR3 = VAR1;
    VAR4 *VAR5 = VAR3->VAR5;
    V9fsString VAR6;
    size_t VAR7 = 7;
    FUN2(VAR3, VAR7, "", &VAR5->VAR8, &VAR6);
    FUN3(VAR3->VAR9, VAR3->VAR10, VAR5->VAR8, VAR6.VAR11);
    if (!strcmp(VAR6.VAR11, ""))
    {
        VAR5->VAR12 = VAR13;
    }
    else if (!strcmp(VAR6.VAR11, ""))
    {
        VAR5->VAR12 = VAR14;
    }
    else
    {
        FUN4(&VAR6, "");
    }
    VAR7 += FUN5(VAR3, VAR7, "", VAR5->VAR8, &VAR6);
    FUN6(VAR5, VAR3, VAR7);
    FUN7(&VAR6);
    return;