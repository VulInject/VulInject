static void FUN1(VAR1 *VAR2, VAR3 *VAR4, int64_t VAR5, int VAR6, bool VAR7)
{
    *VAR2 = (VAR1){
        .VAR4 = VAR4,
        .VAR5 = VAR5,
        .VAR6 = VAR6,
        .VAR7 = VAR7,
    };
    FUN2(&VAR2->VAR8);
    FUN3(&VAR4->VAR9, VAR2, VAR10);