static void FUN1(void)
{
    VAR1 *VAR2;
    VAR1 *VAR3;
    VAR2 = FUN2(VAR4);
    VAR3 = FUN2(VAR5);
    FUN3(VAR2, VAR3);
    memset(VAR2, 0xff, sizeof(VAR1));
    FUN3(VAR3, NULL);
}