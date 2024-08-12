VAR1 *FUN1(VAR2 *VAR3, int VAR4, enum AVSampleFormat VAR5, int VAR6, uint64_t VAR7, int VAR8)
{
    VAR1 *VAR9 = NULL;
    if (VAR3->VAR10->VAR11)
        VAR9 = VAR3->VAR10->FUN2(VAR3, VAR4, VAR5, VAR6, VAR7, VAR8);
    if (!VAR9)
        VAR9 = FUN3(VAR3, VAR4, VAR5, VAR6, VAR7, VAR8);
    if (VAR9)
        VAR9->VAR12 = VAR13;
    return VAR9;
}