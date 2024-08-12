static VAR1 *FUN1(enum AVPixelFormat VAR2, int VAR3, int VAR4)
{
    VAR1 *VAR5 = FUN2();
    if (!VAR5)
        return NULL;
    VAR5->VAR6 = VAR2;
    VAR5->VAR7 = VAR3;
    VAR5->VAR8 = VAR4;
    if (FUN3(VAR5, 32) < 0)
        return NULL;
    return VAR5;
}