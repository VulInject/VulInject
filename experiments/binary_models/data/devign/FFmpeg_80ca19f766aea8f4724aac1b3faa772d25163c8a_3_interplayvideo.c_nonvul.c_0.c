static int FUN1(VAR1 *VAR2)
{
    int VAR3, VAR4;
    unsigned char VAR5[2];
    FUN2(VAR2->VAR6, VAR2->VAR7, 2);
    VAR5[0] = *VAR2->VAR6++;
    VAR5[1] = *VAR2->VAR6++;
    for (VAR4 = 0; VAR4 < 8; VAR4++)
    {
        for (VAR3 = 0; VAR3 < 8; VAR3 += 2)
        {
            *VAR2->VAR8++ = VAR5[VAR4 & 1];
            *VAR2->VAR8++ = VAR5[!(VAR4 & 1)];
        }
        VAR2->VAR8 += VAR2->VAR9;
    }
    return 0;
}