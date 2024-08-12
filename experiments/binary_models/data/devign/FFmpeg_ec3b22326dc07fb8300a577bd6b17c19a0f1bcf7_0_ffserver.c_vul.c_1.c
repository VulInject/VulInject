static void FUN1(void *VAR1, unsigned char *VAR2, int VAR3)
{
    VAR4 *VAR5 = VAR1;
    if (VAR5->VAR6 == VAR5->VAR7 || !VAR5->VAR6)
        VAR5->VAR6 = VAR5->VAR7 = VAR5->VAR8;
    if (VAR5->VAR7 - VAR5->VAR8 + VAR3 > VAR9)
        FUN2();
    memcpy(VAR5->VAR7, VAR2, VAR3);
    VAR5->VAR7 += VAR3;
}