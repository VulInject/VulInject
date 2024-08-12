int FUN1(enum PixelFormat VAR1, int VAR2, int VAR3)
{
    AVPicture VAR4;
    if (FUN2(VAR2, VAR3, 0, NULL))
        return -1;
    switch (VAR1)
    {
    case VAR5:
    case VAR6:
    case VAR7:
    case VAR8:
    case VAR9:
        return VAR2 * VAR3;
    }
    return FUN3(&VAR4, NULL, VAR1, VAR2, VAR3);
}