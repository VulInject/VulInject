static int FUN1(VAR1 *VAR2, VAR3 *VAR4, char *VAR5, size_t VAR6)
{
    static const char VAR7[] = {'', '', '', '', ''};
    uint64_t VAR8, VAR9 = *(VAR10 *)FUN2(VAR2, VAR4);
    int VAR11;
    VAR11 = 64 - FUN3(VAR9);
    VAR11 /= 10;
    if (VAR11 >= FUN4(VAR7))
    {
        VAR11 = FUN4(VAR7) - 1;
    }
    VAR8 = 1ULL << (VAR11 * 10);
    return snprintf(VAR5, VAR6, "", (double)VAR9 / VAR8, VAR7[VAR11]);
}