static inline void FUN1(VAR1 *VAR2)
{
    int VAR3;
    float(*VAR4)[VAR5] = VAR2->VAR6.VAR4;
    for (VAR3 = 0; VAR3 < 256; VAR3++)
    {
        VAR4[1][VAR3] -= VAR4[3][VAR3];
        VAR4[2][VAR3] += VAR4[3][VAR3];
    }
    memset(VAR4[3], 0, sizeof(VAR4[3]));
}