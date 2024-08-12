static void FUN1(void *VAR1, void *VAR2, void *VAR3, int VAR4)
{
    VAR5 *VAR6 = VAR1, *VAR7 = VAR2, *VAR8 = VAR3;
    int32_t VAR9, VAR10, VAR11;
    int VAR12;
    for (VAR12 = 0; VAR12 < VAR4; VAR12++)
    {
        VAR9 = *VAR6 + (((VAR13[0] * *VAR8) + (1 << 15)) >> 16);
        VAR10 = *VAR6 - (((VAR13[1] * *VAR7) + (1 << 15)) >> 16) - (((VAR13[2] * *VAR8) + (1 << 15)) >> 16);
        VAR11 = *VAR6 + (((VAR13[3] * *VAR7) + (1 << 15)) >> 16);
        *VAR6++ = VAR9;
        *VAR7++ = VAR10;
        *VAR8++ = VAR11;
    }
}