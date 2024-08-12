static int FUN1(VAR1 *VAR2)
{
    int VAR3;
    unsigned char VAR4[2];
    FUN2(VAR2->VAR5, VAR2->VAR6, 4);
    for (VAR3 = 0; VAR3 < 8; VAR3++)
    {
        if (!(VAR3 & 3))
        {
            VAR4[0] = *VAR2->VAR5++;
            VAR4[1] = *VAR2->VAR5++;
        }
        memset(VAR2->VAR7, VAR4[0], 4);
        memset(VAR2->VAR7 + 4, VAR4[1], 4);
        VAR2->VAR7 += VAR2->VAR8;
    }
    return 0;
}