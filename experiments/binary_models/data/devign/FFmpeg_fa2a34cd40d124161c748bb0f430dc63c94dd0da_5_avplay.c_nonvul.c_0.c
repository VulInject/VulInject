static void FUN1(void)
{
    if (VAR1)
    {
        FUN2(VAR1);
        VAR1 = NULL;
    }
    FUN3();
    FUN4();
    if (VAR2)
        FUN5("");
    FUN6();
    FUN7(NULL, VAR3, "");
    FUN8(0);
}