static int FUN1(VAR1 *VAR2)
{
    int VAR3;
    FUN2(VAR2->VAR4, VAR2->VAR5, 64);
    for (VAR3 = 0; VAR3 < 8; VAR3++)
    {
        memcpy(VAR2->VAR6, VAR2->VAR4, 8);
        VAR2->VAR4 += 8;
        VAR2->VAR6 += VAR2->VAR7;
    }
    return 0;
}