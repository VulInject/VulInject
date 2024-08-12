int FUN1(VAR1 *VAR2, int64_t VAR3, VAR4 *VAR5, int VAR6)
{
    bool VAR7;
    int VAR8;
    VAR7 = VAR2->VAR9;
    VAR2->VAR9 = false;
    VAR8 = FUN2(VAR2, VAR3, VAR5, VAR6);
    VAR2->VAR9 = VAR7;
    return VAR8;
}