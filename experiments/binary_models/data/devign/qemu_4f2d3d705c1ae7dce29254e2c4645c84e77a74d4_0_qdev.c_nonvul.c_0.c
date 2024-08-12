static void FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = FUN2(VAR2);
    VAR5 *VAR6;
    if (VAR7)
    {
        VAR4->VAR8 = 1;
        VAR9 = true;
    }
    VAR4->VAR10 = -1;
    VAR4->VAR11 = VAR12;
    for (VAR6 = FUN3(VAR4); VAR6 && VAR6->VAR13; VAR6++)
    {
        FUN4(VAR4, VAR6, NULL);
        FUN5(VAR4, VAR6, NULL);
    }
    FUN6(FUN7(VAR4), "", VAR14, NULL, NULL);
    FUN8(VAR4, FUN3(VAR4));
}