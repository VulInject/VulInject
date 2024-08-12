static int FUN1(VAR1 *VAR2)
{
    int VAR3;
    int VAR4, VAR5;
    VAR4 = (VAR2->VAR6 >> 4) & 0x03;
    VAR5 = (VAR2->VAR7 >> 4) & 0x03;
    VAR3 = 0;
    if (VAR4 > 0)
        VAR3++;
    if (VAR5 > 0)
        VAR3 += 2;
    if (FUN2(&VAR2->VAR8, &VAR2->VAR9[77 + VAR3]) == 0)
        return 0;
    VAR3 = 4;
    if (VAR4 == 2)
        VAR3++;
    if (VAR5 == 2)
        VAR3 += 2;
    return 1 + FUN2(&VAR2->VAR8, &VAR2->VAR9[77 + VAR3]);
}