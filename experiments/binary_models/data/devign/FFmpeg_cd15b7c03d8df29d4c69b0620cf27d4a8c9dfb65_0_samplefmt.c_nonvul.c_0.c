int FUN1(VAR1 **VAR2, int *VAR3, int VAR4, int VAR5, enum AVSampleFormat VAR6, int VAR7)
{
    VAR1 *VAR8;
    int VAR9 = FUN2(NULL, VAR4, VAR5, VAR6, VAR7);
    if (VAR9 < 0)
        return VAR9;
    VAR8 = FUN3(VAR9);
    if (!VAR8)
        return FUN4(VAR10);
    VAR9 = FUN5(VAR2, VAR3, VAR8, VAR4, VAR5, VAR6, VAR7);
    if (VAR9 < 0)
    {
        FUN6(VAR8);
        return VAR9;
    }
    FUN7(VAR2, 0, VAR5, VAR4, VAR6);
    return 0;
}