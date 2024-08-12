static int FUN1(VAR1 *VAR2, int64_t VAR3)
{
    char VAR4[VAR5];
    const int VAR6[] = {350, 501, 0};
    snprintf(VAR4, sizeof(VAR4), "" VAR7 "", VAR3);
    if (FUN2(VAR2, VAR4, VAR6, NULL) != 350)
        return FUN3(VAR8);
    return 0;
}