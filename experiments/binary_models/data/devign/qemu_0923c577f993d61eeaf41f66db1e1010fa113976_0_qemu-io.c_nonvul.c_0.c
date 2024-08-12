FUN1(int argc, char **argv)
{
    int64_t VAR1;
    int VAR2;
    VAR1 = FUN2(argv[1]);
    if (VAR1 < 0)
    {
        FUN3("", argv[1]);
        return 0;
    }
    VAR2 = FUN4(VAR3, VAR1);
    if (VAR2 < 0)
    {
        FUN3("", strerror(-VAR2));
        return 0;
    }
    return 0;
}