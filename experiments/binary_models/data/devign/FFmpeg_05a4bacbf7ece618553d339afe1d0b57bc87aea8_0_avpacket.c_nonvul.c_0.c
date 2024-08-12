VAR1 *FUN1(VAR2 *VAR3, enum AVPacketSideDataType VAR4, int VAR5)
{
    int VAR6;
    VAR1 *VAR7;
    if (!VAR5 || (unsigned)VAR5 > VAR8 - VAR9)
        return NULL;
    VAR7 = FUN2(VAR5 + VAR9);
    if (!VAR7)
        return NULL;
    VAR6 = FUN3(VAR3, VAR4, VAR7, VAR5);
    if (VAR6 < 0)
    {
        FUN4(&VAR7);
        return NULL;
    }
    return VAR7;
}