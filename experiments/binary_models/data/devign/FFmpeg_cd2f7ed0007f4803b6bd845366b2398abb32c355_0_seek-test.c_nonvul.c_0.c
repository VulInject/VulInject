static void FUN1(char VAR1[60], int64_t VAR2, AVRational VAR3)
{
    if (VAR2 == VAR4)
    {
        strcpy(VAR1, "");
        return;
    }
    VAR2 = FUN2(VAR2, VAR3, (VAR5){1, 1000000});
    snprintf(VAR1, 60, "" VAR6 "" VAR6 "", VAR2 < 0 ? '' : '', FUN3(VAR2) / 1000000, FUN3(VAR2) % 1000000);
}