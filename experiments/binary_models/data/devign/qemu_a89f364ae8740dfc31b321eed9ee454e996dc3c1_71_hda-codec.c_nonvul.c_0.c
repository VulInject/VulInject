static void FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = FUN2(VAR2);
    VAR5 *VAR6;
    int VAR7;
    FUN3(VAR4, 1, "", VAR8);
    for (VAR7 = 0; VAR7 < FUN4(VAR4->VAR6); VAR7++)
    {
        VAR6 = VAR4->VAR6 + VAR7;
        if (VAR6->VAR9 == NULL)
        {
            continue;
        }
        if (VAR6->VAR10)
        {
            FUN5(&VAR4->VAR11, VAR6->VAR12.VAR13);
        }
        else
        {
            FUN6(&VAR4->VAR11, VAR6->VAR12.VAR14);
        }
    }
    FUN7(&VAR4->VAR11);
}