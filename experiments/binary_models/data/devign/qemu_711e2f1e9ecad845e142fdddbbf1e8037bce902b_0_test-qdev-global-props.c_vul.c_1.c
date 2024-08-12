static void FUN1(void)
{
    VAR1 *VAR2;
    static GlobalProperty VAR3[] = {{VAR4, "", ""}, {VAR4, "", ""}, {VAR4 "", "", "", true}, {}};
    int VAR5;
    FUN2(VAR3);
    VAR2 = FUN3(FUN4(VAR4));
    FUN5(FUN6(VAR2));
    FUN7(VAR2->VAR6, ==, 101);
    FUN7(VAR2->VAR7, ==, 102);