int FUN1(const char *VAR1, VAR2 *VAR3)
{
    unsigned char *VAR4 = &VAR3->VAR5[0];
    int VAR6;
    if (strlen(VAR1) != 36)
    {
        return -1;
    }
    VAR6 = sscanf(VAR1, VAR7, &VAR4[0], &VAR4[1], &VAR4[2], &VAR4[3], &VAR4[4], &VAR4[5], &VAR4[6], &VAR4[7], &VAR4[8], &VAR4[9], &VAR4[10], &VAR4[11], &VAR4[12], &VAR4[13], &VAR4[14], &VAR4[15]);
    if (VAR6 != 16)
    {
        return -1;
    }
    return 0;
}