int FUN1(enum AVPixelFormat VAR1, int VAR2, int VAR3)
{
    const VAR4 *VAR5 = FUN2(VAR1);
    int VAR6[4];
    int VAR7[4];
    if (!VAR5 || VAR5->VAR8 & VAR9)
        return FUN3(VAR10);
    FUN4(VAR6, VAR7, VAR5);
    return FUN5(VAR2, VAR3, VAR6[VAR3], VAR7[VAR3], VAR5);
}