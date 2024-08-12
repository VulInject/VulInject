static int FUN1(VAR1 *VAR2, const char *VAR3, VAR4 *VAR5)
{
    char VAR6[VAR7];
    if (chmod(FUN2(VAR2, VAR3, VAR6), VAR5->VAR8 & 07777) < 0)
    {
        return -1;
    }
    if (FUN3(FUN2(VAR2, VAR3, VAR6), VAR5->VAR9, VAR5->VAR10) < 0)
    {
        if ((VAR2->VAR11 & VAR12) != VAR13)
        {
            return -1;
        }
    }
    return 0;
}