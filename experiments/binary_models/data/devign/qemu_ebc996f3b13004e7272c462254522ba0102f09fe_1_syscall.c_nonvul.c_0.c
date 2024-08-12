static int FUN1(int VAR1, const char *VAR2, const struct timespec VAR3[2], int VAR4)
{
    if (VAR2 == NULL)
        return FUN2(VAR1, VAR3);
    else
        return FUN3(VAR1, VAR2, VAR3, VAR4);
}