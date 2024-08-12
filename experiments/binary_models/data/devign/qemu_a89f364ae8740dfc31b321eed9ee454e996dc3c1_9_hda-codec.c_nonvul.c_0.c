static int FUN1(void *VAR1, int VAR2)
{
    VAR3 *VAR4 = VAR1;
    VAR5 *VAR6;
    int VAR7;
    FUN2(VAR4, 1, "", VAR8);
    if (VAR2 == 1)
    {
        for (VAR7 = 0; VAR7 < FUN3(VAR4->VAR9); VAR7++)
            VAR4->VAR10[16 + VAR7] = VAR4->VAR9[VAR7];
    }
    for (VAR7 = 0; VAR7 < FUN3(VAR4->VAR6); VAR7++)
    {
        VAR6 = VAR4->VAR6 + VAR7;
        if (VAR6->VAR11 == NULL)
            continue;
        FUN4(VAR6->VAR12, &VAR6->VAR13);
        FUN5(VAR6);
        FUN6(VAR6);
        FUN7(VAR6, VAR4->VAR10[VAR6->VAR14 * 16 + VAR6->VAR15]);
    }
    return 0;
}