static void FUN1(void)
{
    char *argv[256];
    FUN2(argv, FUN3(argv));
    FUN4(FUN5("", argv));
    FUN6();
    FUN7();
}