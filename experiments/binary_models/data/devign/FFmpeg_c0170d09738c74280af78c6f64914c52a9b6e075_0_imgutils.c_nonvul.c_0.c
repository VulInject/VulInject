int FUN1(enum PixelFormat VAR1, int VAR2, int VAR3)
{
    const VAR4 *VAR5 = &VAR6[VAR1];
    int VAR7[4];
    int VAR8[4];
    if ((unsigned)VAR1 >= VAR9 || VAR5->VAR10 & VAR11)
        return FUN2(VAR12);
    FUN3(VAR7, VAR8, VAR5);
    return FUN4(VAR2, VAR3, VAR7[VAR3], VAR8[VAR3], VAR5);
}