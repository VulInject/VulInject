static VAR1 FUN1(VAR2 *VAR3, const struct VAR4 *VAR5, int VAR6)
{
    uint8_t VAR7[4096];
    size_t VAR8 = 0;
    int VAR9;
    for (VAR9 = 0; VAR9 < VAR6; VAR9++)
    {
        size_t VAR10;
        VAR10 = FUN2(sizeof(VAR7) - VAR8, VAR5[VAR9].VAR11);
        memcpy(VAR7 + VAR8, VAR5[VAR9].VAR12, VAR10);
        VAR8 += VAR10;
    }
    VAR3->FUN3(VAR3, VAR7, VAR8);
    return VAR8;
}