static void FUN1(void)
{
    const char *VAR1 = "";
    unsigned long VAR2 = 999;
    int VAR3;
    VAR3 = FUN2(VAR1, NULL, 0, &VAR2);
    FUN3(VAR3, ==, 0);
    FUN4(VAR2, ==, -321ul);
}