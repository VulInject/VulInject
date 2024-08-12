static int FUN1(VAR1 *VAR2, VAR3 *VAR4, int VAR5, char *VAR6, int VAR7)
{
    char *VAR8 = VAR6;
    char *VAR9 = VAR6 + VAR7 - 1;
    int VAR10;
    for (VAR10 = 0; VAR10 < VAR5; VAR10++)
    {
        uint8_t VAR11, VAR2 = FUN2(VAR4);
        if (VAR2 < 0x80 && VAR8 < VAR9)
            *VAR8++ = VAR2;
        else
            FUN3(VAR12[VAR2 - 0x80], VAR11, if (VAR8 < VAR9) *VAR8++ = VAR11;);
    }
    *VAR8 = 0;
    return VAR8 - VAR6;
}