static void FUN1(VAR1 *VAR2, const void *VAR3)
{
    EnumOne VAR4, VAR5[] = {VAR6, -1};
    VAR7 *VAR8;
    for (VAR4 = 0; VAR4 < FUN2(VAR5); VAR4++)
    {
        VAR8 = NULL;
        FUN3(VAR2->VAR9, "", &VAR5[VAR4], &VAR8);
        FUN4(&VAR8);
    }
}