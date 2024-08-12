static void FUN1(void)
{
    size_t VAR1;
    FUN2(FUN3(NULL) == 0);
    for (VAR1 = 0; VAR1 < FUN4(VAR2); VAR1++)
    {
        int VAR3;
        char *VAR4;
        size_t VAR5;
        if (!FUN5(VAR1))
        {
            continue;
        }
        VAR5 = FUN6(VAR1);
        FUN7(VAR5 * 2, ==, strlen(VAR2[VAR1]));
        VAR3 = FUN8(VAR1, VAR6, strlen(VAR6), &VAR4, NULL);
        FUN2(VAR3 == 0);
        FUN9(VAR4, ==, VAR2[VAR1]);
        FUN10(VAR4);
    }
}