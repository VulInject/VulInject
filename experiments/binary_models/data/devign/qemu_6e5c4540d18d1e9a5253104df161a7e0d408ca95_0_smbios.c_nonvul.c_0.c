static void FUN1(const char *VAR1)
{
    char VAR2[1024];
    unsigned char VAR3, VAR4;
    if (FUN2(VAR2, sizeof(VAR2), "", VAR1))
        FUN3(0, FUN4(struct VAR5, VAR6), VAR2, strlen(VAR2) + 1);
    if (FUN2(VAR2, sizeof(VAR2), "", VAR1))
        FUN3(0, FUN4(struct VAR5, VAR7), VAR2, strlen(VAR2) + 1);
    if (FUN2(VAR2, sizeof(VAR2), "", VAR1))
        FUN3(0, FUN4(struct VAR5, VAR8), VAR2, strlen(VAR2) + 1);
    if (FUN2(VAR2, sizeof(VAR2), "", VAR1))
    {
        if (sscanf(VAR2, "", &VAR3, &VAR4) != 2)
        {
            FUN5("");
            FUN6(1);
        }
        FUN3(0, FUN4(struct VAR5, VAR9), &VAR3, 1);
        FUN3(0, FUN4(struct VAR5, VAR10), &VAR4, 1);
    }
}