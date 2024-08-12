static void FUN1(VAR1 *VAR2)
{
    static int VAR3 = 0;
    if (VAR3 != 0)
        return;
    VAR3 = 1;
    FUN2();
    FUN3(VAR4);
    FUN4();
    FUN5();
    FUN6();
    FUN7(NULL, VAR5, "");
}