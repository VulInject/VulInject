static int FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    int VAR5;
    unsigned char VAR6[2];
    for (VAR5 = 0; VAR5 < 8; VAR5++)
    {
        if (!(VAR5 & 3))
        {
            VAR6[0] = FUN2(&VAR2->VAR7);
            VAR6[1] = FUN2(&VAR2->VAR7);
            memset(VAR2->VAR8, VAR6[0], 4);
            memset(VAR2->VAR8 + 4, VAR6[1], 4);
            VAR2->VAR8 += VAR2->VAR9;
            return 0