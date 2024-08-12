static int FUN1(VAR1 *VAR2, int *VAR3, int VAR4, int VAR5, int VAR6, unsigned char *VAR7)
{
    int VAR8, VAR9, VAR10, VAR11 = VAR2->VAR12 == VAR13 ? 6 : 4;
    VAR10 = FUN2(VAR7, VAR2->VAR12 == VAR13 ? VAR5 : VAR6, VAR11 * VAR4);
    for (VAR8 = 0; VAR8 < VAR4; VAR8++)
        for (VAR9 = 0; VAR9 < VAR11; VAR9++)
            VAR7[VAR10++] = VAR3[VAR9 + VAR8 * VAR11] ^ (VAR9 >= 4 ? 0x80 : 0);
    return VAR10;
}