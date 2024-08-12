static void FUN1(const void *VAR1)
{
    const VAR2 *VAR3 = VAR1;
    char VAR4[] = "";
    char VAR5[] = "";
    const char *VAR6 = "";
    const VAR7 *VAR8 = NULL;
    int VAR9;
    VAR9 = mkstemp(VAR4);
    FUN2(VAR9 != -1);
    if (VAR3->VAR10)
    {
        VAR8 = VAR3->VAR10;
        VAR6 = "";
    }
    else if (VAR3->VAR11)
    {
        VAR8 = VAR3->VAR11;
        VAR6 = "";
    }
    if (VAR8)
    {
        ssize_t VAR12;
        int VAR13;
        VAR13 = mkstemp(VAR5);
        FUN2(VAR13 != -1);
        VAR12 = write(VAR13, VAR8, VAR3->VAR14);
        FUN2(VAR12 == VAR3->VAR14);
        close(VAR13);
    }
    VAR15 = FUN3(""
                                ""
                                "",
                                VAR6, VAR8 ? VAR5 : "", VAR3->VAR16, VAR4, VAR3->VAR17);
    unlink(VAR4);
    if (VAR8)
    {
        unlink(VAR5);
    }
    FUN4(VAR3, VAR9);
    FUN5(VAR15);
    close(VAR9);
}