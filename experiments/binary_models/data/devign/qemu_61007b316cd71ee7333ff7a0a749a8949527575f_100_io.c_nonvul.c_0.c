static void FUN1(VAR1 *VAR2, VAR3 *VAR4, int64_t VAR5, unsigned int VAR6, bool VAR7)
{
    *VAR2 = (VAR1){
        .VAR4 = VAR4,
        .VAR5 = VAR5,
        .VAR6 = VAR6,
        .VAR7 = VAR7,
        .VAR8 = FUN2(),
        .VAR9 = false,
        .VAR10 = VAR5,
        .VAR11 = VAR6,
    };
    FUN3(&VAR2->VAR12);
    FUN4(&VAR4->VAR13, VAR2, VAR14);
}