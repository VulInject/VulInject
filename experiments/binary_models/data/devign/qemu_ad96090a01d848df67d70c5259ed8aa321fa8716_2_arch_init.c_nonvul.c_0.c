int FUN1(const char *VAR1, VAR2 *VAR3)
{
    int VAR4;
    if (strlen(VAR1) != 36)
    {
        return -1;
    }
    VAR4 = sscanf(VAR1, VAR5, &VAR3[0], &VAR3[1], &VAR3[2], &VAR3[3], &VAR3[4], &VAR3[5], &VAR3[6], &VAR3[7], &VAR3[8], &VAR3[9], &VAR3[10], &VAR3[11], &VAR3[12], &VAR3[13], &VAR3[14], &VAR3[15]);
    if (VAR4 != 16)
    {
        return -1;
    }
    FUN2(1, FUN3(struct VAR6, VAR3), 16, VAR3);
    return 0;
}