static int FUN1(VAR1 *VAR2, void *VAR3, size_t VAR4)
{
    VAR5 *VAR6 = FUN2(VAR3, VAR5, VAR7);
    uint8_t VAR7[VAR4];
    int VAR8;
    FUN3(VAR2, VAR7, VAR4);
    for (VAR8 = 0; VAR8 < VAR4; ++VAR8)
        if ((VAR7[VAR8] ^ VAR6->VAR7[VAR8]) & VAR6->VAR9[VAR8] & ~VAR6->VAR10[VAR8])
            return -VAR11;
    memcpy(VAR6->VAR7, VAR7, VAR4);
    FUN4(VAR6);
    return 0;
}