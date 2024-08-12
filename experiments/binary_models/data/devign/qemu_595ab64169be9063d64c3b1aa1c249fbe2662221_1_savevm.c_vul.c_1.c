static int FUN1(void *VAR1, VAR2 *VAR3, int64_t VAR4, int VAR5)
{
    VAR6 *VAR7 = VAR1;
    VAR8 *VAR9 = VAR7->VAR10;
    int VAR11;
    do
    {
        FUN2(VAR9);
        VAR11 = fread(VAR3, 1, VAR5, VAR9);
    } while ((VAR11 == 0) && FUN3(VAR9) && (VAR12 == VAR13));
    return VAR11;
}