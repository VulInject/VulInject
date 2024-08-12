static VAR1 FUN1(const struct VAR2 *VAR3, int VAR4)
{
    VAR5 *VAR6 = FUN2();
    unsigned int VAR7;
    int VAR8;
    VAR7 = 0;
    for (VAR8 = 0; VAR8 < 8; VAR8++)
        VAR7 |= VAR6->VAR9[VAR8] << (32 - (4 * VAR8));
    return VAR7;
}