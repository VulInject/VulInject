FUN1(int argc, char **argv)
{
    int64_t VAR1;
    char VAR2[64];
    VAR1 = FUN2(VAR3);
    if (VAR1 < 0)
    {
        FUN3("", strerror(-VAR1));
        return 0;
    }
    FUN4(VAR1, VAR2, sizeof(VAR2));
    FUN3("", VAR2);
    return 0;
}