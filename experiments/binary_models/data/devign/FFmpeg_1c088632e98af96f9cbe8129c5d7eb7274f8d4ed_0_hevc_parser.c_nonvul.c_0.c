static void FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = VAR2->VAR5;
    int VAR6;
    for (VAR6 = 0; VAR6 < FUN2(VAR4->VAR7.VAR8); VAR6++)
        FUN3(&VAR4->VAR7.VAR8[VAR6]);
    for (VAR6 = 0; VAR6 < FUN2(VAR4->VAR7.VAR9); VAR6++)
        FUN3(&VAR4->VAR7.VAR9[VAR6]);
    for (VAR6 = 0; VAR6 < FUN2(VAR4->VAR7.VAR10); VAR6++)
        FUN3(&VAR4->VAR7.VAR10[VAR6]);
    VAR4->VAR7.VAR11 = NULL;
    FUN4(&VAR4->VAR12);
    FUN5(&VAR4->VAR13.VAR14);
}