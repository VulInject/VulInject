int FUN1(VAR1 *VAR2, enum AVPacketSideDataType VAR3, VAR4 *VAR5, size_t VAR6)
{
    int VAR7 = VAR2->VAR8;
    if ((unsigned)VAR7 + 1 > VAR9 / sizeof(*VAR2->VAR10))
        return FUN2(VAR11);
    VAR2->VAR10 = FUN3(VAR2->VAR10, (VAR7 + 1) * sizeof(*VAR2->VAR10));
    if (!VAR2->VAR10)
        return FUN2(VAR12);
    VAR2->VAR10[VAR7].VAR5 = VAR5;
    VAR2->VAR10[VAR7].VAR6 = VAR6;
    VAR2->VAR10[VAR7].VAR3 = VAR3;
    VAR2->VAR8++;
    return 0;
}