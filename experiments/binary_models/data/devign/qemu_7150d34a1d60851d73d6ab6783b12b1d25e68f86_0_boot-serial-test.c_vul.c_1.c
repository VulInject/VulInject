static void FUN1(const void *VAR1)
{
    const VAR2 *VAR3 = VAR1;
    char *VAR4;
    char VAR5[] = "";
    int VAR6;
    VAR6 = mkstemp(VAR5);
    FUN2(VAR6 != -1);
    VAR4 = FUN3(""
                           "",
                           VAR3->VAR7, VAR5, VAR3->VAR8);
    FUN4(VAR4);
    unlink(VAR5);
    FUN5(VAR3, VAR6);
    FUN6(VAR9);
    FUN7(VAR4);
    close(VAR6);
}