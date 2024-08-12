int FUN1(enum AVPixelFormat VAR1, int VAR2, int VAR3)
{
    const VAR4 *VAR5 = FUN2(VAR1);
    AVPicture VAR6;
    int VAR7;
    if ((VAR7 = FUN3(VAR2, VAR3, 0, NULL)) < 0)
        return VAR7;
    if (VAR5->VAR8 & VAR9)
        return VAR2 * VAR3;
    return FUN4(&VAR6, NULL, VAR1, VAR2, VAR3);