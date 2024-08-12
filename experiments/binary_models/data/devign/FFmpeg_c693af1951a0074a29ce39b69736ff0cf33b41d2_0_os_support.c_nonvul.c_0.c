static int FUN1(const char *VAR1, struct VAR2 *VAR3)
{
    unsigned int VAR4 = 0, VAR5 = 0, VAR6 = 0, VAR7 = 0;
    if (sscanf(VAR1, "", &VAR4, &VAR5, &VAR6, &VAR7) != 4)
        return 0;
    if (!VAR4 || (VAR4 | VAR5 | VAR6 | VAR7) > 255)
        return 0;
    VAR3->VAR8 = FUN2((VAR4 << 24) + (VAR5 << 16) + (VAR6 << 8) + VAR7);
    return 1;
}