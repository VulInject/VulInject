static unsigned int FUN1(const int *VAR1)
{
    int VAR2;
    unsigned int VAR3 = 0x10000;
    int VAR4 = 0;
    for (VAR2 = 0; VAR2 < 10; VAR2++)
    {
        VAR3 = (((0x1000000 - (*VAR1) * (*VAR1)) >> 12) * VAR3) >> 12;
        if (VAR3 == 0)
            return 0;
        while (VAR3 <= 0x3fff)
        {
            VAR4++;
            VAR3 <<= 2;
        }
        VAR1++;
    }
    VAR3 = FUN2(VAR3);
    VAR3 >>= (VAR4 + 10);
    return VAR3;
}