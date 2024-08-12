static void FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    VAR5 *VAR6 = VAR2->VAR7;
    VAR3 *VAR8;
    const VAR9 *VAR10;
    bool VAR11 = false;
    for (VAR10 = FUN2(VAR4); VAR10; VAR10 = FUN3(VAR4, VAR10))
    {
        if (strcmp(FUN4(VAR10), "") && strcmp(FUN4(VAR10), ""))
        {
            VAR11 = true;
            break;
        }
    }
    if (VAR11 && !VAR2->VAR12->VAR2->VAR13)
    {
        return;
    }
    if (!VAR11 && VAR2->VAR12->VAR2->VAR14[0])
    {
        snprintf(VAR2->VAR14, sizeof(VAR2->VAR14), "", VAR6->VAR15 ?: "", VAR2->VAR12->VAR2->VAR14);
    }
    VAR8 = FUN5();
    FUN6(VAR8, "", "");
    FUN7(VAR2->VAR12->VAR2->VAR13);
    FUN8(VAR8, "", VAR2->VAR12->VAR2->VAR13);
    for (VAR10 = FUN2(VAR4); VAR10; VAR10 = FUN3(VAR4, VAR10))
    {
        if (strcmp(FUN4(VAR10), ""))
        {
            FUN9(FUN10(VAR10));
            FUN11(VAR8, FUN4(VAR10), FUN10(VAR10));
        }
    }
    VAR2->VAR13 = VAR8;
}