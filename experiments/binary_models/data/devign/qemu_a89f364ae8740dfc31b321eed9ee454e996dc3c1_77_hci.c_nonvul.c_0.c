static void FUN1(struct VAR1 *VAR2, const VAR3 *VAR4, int VAR5)
{
    struct VAR6 *VAR7 = FUN2(VAR2);
    uint16_t VAR8;
    int VAR9;
    if (VAR5 < 3)
        return;
    VAR8 = FUN3((VAR4[1] << 8) | VAR4[0]);
    VAR9 = VAR4[2];
    VAR5 -= 3;
    if (FUN4(VAR7, VAR8))
    {
        fprintf(VAR10, "", VAR11, VAR8);
        return;
    }
    if (VAR9 > VAR5)
    {
        fprintf(VAR10, "", VAR11, VAR5, VAR9);
        return;
    }
}