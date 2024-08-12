static void FUN1(const char *VAR1)
{
    char VAR2[1024];
    if (FUN2(VAR2, sizeof(VAR2), "", VAR1))
        FUN3(1, FUN4(struct VAR3, VAR4), strlen(VAR2) + 1, VAR2);
    if (FUN2(VAR2, sizeof(VAR2), "", VAR1))
        FUN3(1, FUN4(struct VAR3, VAR5), strlen(VAR2) + 1, VAR2);
    if (FUN2(VAR2, sizeof(VAR2), "", VAR1))
        FUN3(1, FUN4(struct VAR3, VAR6), strlen(VAR2) + 1, VAR2);
    if (FUN2(VAR2, sizeof(VAR2), "", VAR1))
        FUN3(1, FUN4(struct VAR3, VAR7), strlen(VAR2) + 1, VAR2);
    if (FUN2(VAR2, sizeof(VAR2), "", VAR1))
    {
        if (FUN5(VAR2, VAR8) != 0)
        {
            FUN6("");
            FUN7(1);
        }
    }
    if (FUN2(VAR2, sizeof(VAR2), "", VAR1))
        FUN3(1, FUN4(struct VAR3, VAR9), strlen(VAR2) + 1, VAR2);
    if (FUN2(VAR2, sizeof(VAR2), "", VAR1))
        FUN3(1, FUN4(struct VAR3, VAR10), strlen(VAR2) + 1, VAR2);
}