VAR1 *FUN1(VAR2 *VAR3, enum AVPacketSideDataType VAR4, int VAR5)
{
    int VAR6 = VAR3->VAR7;
    if ((unsigned)VAR6 + 1 > VAR8 / sizeof(*VAR3->VAR9))
        return NULL;
    if ((unsigned)VAR5 > VAR8 - VAR10)
        return NULL;
    VAR3->VAR9 = FUN2(VAR3->VAR9, (VAR6 + 1) * sizeof(*VAR3->VAR9));
    if (!VAR3->VAR9)
        return NULL;
    VAR3->VAR9[VAR6].VAR11 = FUN3(VAR5 + VAR10);
    if (!VAR3->VAR9[VAR6].VAR11)
        return NULL;
    VAR3->VAR9[VAR6].VAR5 = VAR5;
    VAR3->VAR9[VAR6].VAR4 = VAR4;
    VAR3->VAR7++;
    return VAR3->VAR9[VAR6].VAR11;
}