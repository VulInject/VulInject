static void FUN1(void)
{
    const char *VAR1 = FUN2("", VAR2);
    uint64_t VAR3 = 999;
    int VAR4;
    VAR4 = FUN3(VAR1, NULL, 0, &VAR3);
    FUN4(VAR4, ==, 0);
    FUN4(VAR3, ==, VAR2);
}