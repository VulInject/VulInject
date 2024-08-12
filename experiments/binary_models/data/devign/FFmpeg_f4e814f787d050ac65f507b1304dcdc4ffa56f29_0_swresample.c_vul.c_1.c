struct VAR1 *FUN1(struct VAR1 *VAR2, int64_t VAR3, enum AVSampleFormat VAR4, int VAR5, int64_t VAR6, enum AVSampleFormat VAR7, int VAR8, int VAR9, void *VAR10)
{
    if (!VAR2)
        VAR2 = FUN2();
    if (!VAR2)
        return NULL;
    VAR2->VAR11 = VAR9;
    VAR2->VAR10 = VAR10;
    FUN3(VAR2, "", VAR3, 0);
    FUN3(VAR2, "", VAR4, 0);
    FUN3(VAR2, "", VAR5, 0);
    FUN3(VAR2, "", VAR6, 0);
    FUN3(VAR2, "", VAR7, 0);
    FUN3(VAR2, "", VAR8, 0);
    FUN3(VAR2, "", VAR12, 0);
    FUN3(VAR2, "", FUN4(VAR2->VAR6), 0);
    FUN3(VAR2, "", FUN4(VAR2->VAR3), 0);
    FUN3(VAR2, "", 0, 0);
    return VAR2;
}