static int FUN1(VAR1 *VAR2)
{
    int VAR3;
    unsigned char VAR4;
    FUN2(VAR2->VAR5, VAR2->VAR6, 1);
    VAR4 = *VAR2->VAR5++;
    for (VAR3 = 0; VAR3 < 8; VAR3++)
    {
        memset(VAR2->VAR7, VAR4, 8);
        VAR2->VAR7 += VAR2->VAR8;
    }
    return 0;
}