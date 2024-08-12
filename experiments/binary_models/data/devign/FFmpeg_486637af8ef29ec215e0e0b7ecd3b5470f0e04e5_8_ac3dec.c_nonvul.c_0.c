static inline void FUN1(VAR1 *VAR2)
{
    int VAR3;
    float VAR4;
    float(*VAR5)[VAR6] = VAR2->VAR7.VAR5;
    for (VAR3 = 0; VAR3 < 256; VAR3++)
    {
        VAR4 = VAR5[1][VAR3] + VAR5[2][VAR3];
        VAR5[1][VAR3] = VAR5[2][VAR3] = VAR4;
    }
}