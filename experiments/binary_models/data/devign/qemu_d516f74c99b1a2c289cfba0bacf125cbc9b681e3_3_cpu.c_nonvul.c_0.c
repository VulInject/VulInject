static void FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = FUN2(VAR2);
    VAR5 *VAR6 = &VAR4->VAR6;
    int VAR7;
    FUN3(VAR2);
    memset(&VAR6->VAR8, 0, FUN4(VAR5, VAR9) - FUN4(VAR5, VAR8));
    VAR6->VAR10[0] = VAR11;
    VAR6->VAR10[14] = VAR12;
    VAR6->VAR13 = 1;
    VAR6->VAR14 = -1UL;
    for (VAR7 = 0; VAR7 < FUN5(VAR6->VAR15); VAR7++)
    {
        VAR6->VAR15[VAR7] = -1;
    }
    VAR6->VAR16 = -1;
    FUN6(VAR17, &VAR6->VAR18);
    if (FUN7())
    {
        FUN8(VAR4);
    }
}