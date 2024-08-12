static void FUN1(VAR1 *VAR2, const VAR3 *VAR4, const VAR3 *VAR5)
{
    unsigned char *VAR6 = VAR2->VAR7.VAR8[0];
    int VAR9;
    for (VAR9 = 0; VAR9 < VAR2->VAR10->VAR11 && VAR4 + VAR2->VAR10->VAR12 <= VAR5; VAR9++)
    {
        memcpy(VAR6, VAR4, VAR2->VAR10->VAR12);
        VAR6 += VAR2->VAR7.VAR13[0];
        VAR4 += VAR2->VAR10->VAR12;
    }
}