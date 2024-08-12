static inline void FUN1(VAR1 *VAR2)
{
    VAR3 *const VAR4 = &VAR2->VAR4;
    const int VAR5 = VAR4->VAR6 + VAR4->VAR7 * VAR4->VAR8;
    VAR2->VAR9[VAR5][0] = VAR2->VAR10[4 + 8 * 4];
    VAR2->VAR9[VAR5][1] = VAR2->VAR10[5 + 8 * 4];
    VAR2->VAR9[VAR5][2] = VAR2->VAR10[6 + 8 * 4];
    VAR2->VAR9[VAR5][3] = VAR2->VAR10[7 + 8 * 4];
    VAR2->VAR9[VAR5][4] = VAR2->VAR10[7 + 8 * 3];
    VAR2->VAR9[VAR5][5] = VAR2->VAR10[7 + 8 * 2];
    VAR2->VAR9[VAR5][6] = VAR2->VAR10[7 + 8 * 1];
    VAR2->VAR9[VAR5][7] = VAR2->VAR10[1 + 8 * 2];
    VAR2->VAR9[VAR5][8] = VAR2->VAR10[2 + 8 * 2];
    VAR2->VAR9[VAR5][9] = VAR2->VAR10[2 + 8 * 1];
    VAR2->VAR9[VAR5][10] = VAR2->VAR10[1 + 8 * 5];
    VAR2->VAR9[VAR5][11] = VAR2->VAR10[2 + 8 * 5];
    VAR2->VAR9[VAR5][12] = VAR2->VAR10[2 + 8 * 4];
}