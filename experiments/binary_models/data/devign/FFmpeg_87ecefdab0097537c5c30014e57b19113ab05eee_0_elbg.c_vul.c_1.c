static int FUN1(VAR1 *VAR2)
{
    int VAR3 = 0;
    int VAR4 = FUN2(VAR2->VAR5) % VAR2->VAR6[VAR2->VAR7 - 1] + 1;
    while (VAR2->VAR6[VAR3] < VAR4)
        VAR3++;
    FUN3(VAR2->VAR8[VAR3]);
    return VAR3;
}