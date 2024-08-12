static int FUN1(VAR1 *VAR2, int argc, char **argv)
{
    int64_t VAR3;
    int64_t VAR4, VAR5;
    char VAR6[64], VAR7[64];
    int64_t VAR8;
    int VAR9;
    const char *VAR10;
    VAR3 = 0;
    VAR5 = FUN2(VAR2);
    if (VAR5 < 0)
    {
        FUN3("", strerror(-VAR5));
        return 0;
    }
    VAR4 = VAR5;
    do
    {
        VAR9 = FUN4(FUN5(VAR2), VAR3, VAR4, &VAR8);
        if (VAR9 < 0)
        {
            FUN3("", strerror(-VAR9));
            return 0;
        }
        else if (!VAR8)
        {
            FUN3("");
            return 0;
        }
        VAR10 = VAR9 ? "" : "";
        FUN6(VAR8 << VAR11, VAR6, sizeof(VAR6));
        FUN6(VAR3 << VAR11, VAR7, sizeof(VAR7));
        FUN7("" VAR12 "" VAR12 "", VAR6, VAR8 << VAR11, VAR10, VAR7, VAR3 << VAR11);
        VAR3 += VAR8;
        VAR4 -= VAR8;
    } while (VAR3 < VAR5);
    return 0;
}