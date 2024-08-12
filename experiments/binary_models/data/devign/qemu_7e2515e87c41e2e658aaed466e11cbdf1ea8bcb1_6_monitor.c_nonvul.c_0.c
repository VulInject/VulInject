static void FUN1(void)
{
    int VAR1;
    const char *VAR2;
    VAR1 = 0;
    for (;;)
    {
        VAR2 = FUN2(VAR1);
        if (!VAR2)
            break;
        FUN3("", VAR1, VAR2);
    }
}