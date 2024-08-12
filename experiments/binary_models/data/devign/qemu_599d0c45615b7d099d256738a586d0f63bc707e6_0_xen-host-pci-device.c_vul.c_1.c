static bool FUN1(VAR1 *VAR2)
{
    char VAR3[VAR4];
    struct stat VAR5;
    if (FUN2(VAR2, "", VAR3, sizeof(VAR3)))
    {
        return false;
    }
    return !FUN3(VAR3, &VAR5);
}