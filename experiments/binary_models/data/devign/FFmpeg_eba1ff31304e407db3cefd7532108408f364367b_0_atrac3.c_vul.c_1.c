static int FUN1(const VAR1 *VAR2, VAR1 *VAR3, int VAR4)
{
    int VAR5, VAR6;
    uint32_t VAR7;
    const VAR8 *VAR9;
    VAR8 *VAR10 = (VAR8 *)VAR3;
    VAR6 = (VAR11)VAR2 & 3;
    VAR9 = (const VAR8 *)(VAR2 - VAR6);
    VAR7 = FUN2((0x537F6103 >> (VAR6 * 8)) | (0x537F6103 << (32 - (VAR6 * 8))));
    VAR4 += 3 + VAR6;
    for (VAR5 = 0; VAR5 < VAR4 / 4; VAR5++)
        VAR10[VAR5] = VAR7 ^ VAR9[VAR5];
    if (VAR6)
        FUN3(NULL, "", VAR6);
    return VAR6;
}