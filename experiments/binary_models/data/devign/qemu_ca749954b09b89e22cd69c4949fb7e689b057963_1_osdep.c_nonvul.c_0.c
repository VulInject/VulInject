static int FUN1(int VAR1, int64_t VAR2, int64_t VAR3, int VAR4)
{
    int VAR5;
    struct flock VAR6 = {
        .VAR7 = VAR8,
        .VAR9 = VAR2,
        .VAR10 = VAR3,
        .VAR11 = VAR4,
    };
    FUN2();
    VAR5 = FUN3(VAR1, VAR12, &VAR6);
    return VAR5 == -1 ? -VAR13 : 0;
}