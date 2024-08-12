static int FUN1(float *VAR1, float *VAR2, int VAR3)
{
    int VAR4, VAR5;
    double VAR6, VAR7, VAR8;
    if (VAR1[VAR3] == 0)
        return 0;
    if ((VAR6 = *VAR1) <= 0)
        return 0;
    for (VAR4 = 1;; VAR4++)
    {
        float *VAR9 = VAR1 + VAR4;
        float *VAR10 = VAR2;
        if (VAR3 < VAR4)
            return 1;
        VAR7 = *(VAR9--);
        for (VAR5 = VAR4; --VAR5; VAR7 += (*(VAR9--)) * (*(VAR10++)))
            ;
        VAR9 = VAR2 + VAR4 - 1;
        VAR10 = VAR2;
        *(VAR9--) = VAR8 = -VAR7 / VAR6;
        for (VAR5 = VAR4 >> 1; VAR5--;)
        {
            float VAR11 = *VAR10 + *VAR9 * VAR8;
            *(VAR9--) += *VAR10 * VAR8;
            *(VAR10++) = VAR11;
        }
        if ((VAR6 += VAR7 * VAR8) < 0)
            return 0;
    }
}