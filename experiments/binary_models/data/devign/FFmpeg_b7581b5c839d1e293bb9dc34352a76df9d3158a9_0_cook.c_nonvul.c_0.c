static inline int FUN1(const VAR1 *VAR2, VAR1 *VAR3, int VAR4)
{
    static const uint32_t VAR5[4] = {
        FUN2(0x37c511f2),
        FUN2(0xf237c511),
        FUN2(0x11f237c5),
        FUN2(0xc511f237),
    };
    int VAR6, VAR7;
    uint32_t VAR8;
    const VAR9 *VAR10;
    VAR9 *VAR11 = (VAR9 *)VAR3;
    VAR7 = (VAR12)VAR2 & 3;
    VAR10 = (const VAR9 *)(VAR2 - VAR7);
    VAR8 = VAR5[VAR7];
    VAR4 += 3 + VAR7;
    for (VAR6 = 0; VAR6 < VAR4 / 4; VAR6++)
        VAR11[VAR6] = VAR8 ^ VAR10[VAR6];
    return VAR7;
}