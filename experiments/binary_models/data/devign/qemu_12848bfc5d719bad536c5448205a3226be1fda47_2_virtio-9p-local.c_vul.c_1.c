static int FUN1(VAR1 *VAR2, const char *VAR3, VAR4 *VAR5)
{
    if (chmod(FUN2(VAR2, VAR3), VAR5->VAR6 & 07777) < 0)
    {
        return -1;
    }
    if (chown(FUN2(VAR2, VAR3), VAR5->VAR7, VAR5->VAR8) < 0)
    {
        return -1;
    }
    return 0;
}