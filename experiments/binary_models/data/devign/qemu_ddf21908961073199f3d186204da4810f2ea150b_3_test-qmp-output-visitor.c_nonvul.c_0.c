static void FUN1(VAR1 *VAR2, const void *VAR3)
{
    EnumOne VAR4[] = {VAR5, -1};
    UserDefOne VAR6 = {0};
    VAR7 *VAR8 = &VAR6;
    VAR9 *VAR10;
    int VAR11;
    for (VAR11 = 0; VAR11 < FUN2(VAR4); VAR11++)
    {
        VAR10 = NULL;
        VAR6.VAR12 = true;
        VAR6.VAR13 = VAR4[VAR11];
        FUN3(VAR2->VAR14, &VAR8, "", &VAR10);
        FUN4(VAR10);
        FUN5(VAR10);
    }
}