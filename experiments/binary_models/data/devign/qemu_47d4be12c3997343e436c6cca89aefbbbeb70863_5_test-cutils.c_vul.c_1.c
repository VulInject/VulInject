static void FUN1(void)
{
    const char *VAR1 = "";
    long VAR2 = 999L;
    int VAR3;
    VAR3 = FUN2(VAR1, NULL, 0, &VAR2);
    FUN3(VAR3, ==, 0);
    FUN3(VAR2, ==, 0);
}