static void FUN1(void)
{
    size_t VAR1;
    FUN2(FUN3(NULL) == 0);
    for (VAR1 = 0; VAR1 < FUN4(VAR2); VAR1++)
    {
        int VAR3;
        char *VAR4;
        if (!FUN5(VAR1))
        {
            continue;
        }
        VAR3 = FUN6(VAR1, VAR5, strlen(VAR5), &VAR4, NULL);
        FUN2(VAR3 == 0);
        FUN7(VAR4, ==, VAR6[VAR1]);
        FUN8(VAR4);
    }
}