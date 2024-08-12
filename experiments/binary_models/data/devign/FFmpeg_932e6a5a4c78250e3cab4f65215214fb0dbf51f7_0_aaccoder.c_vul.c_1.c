static void FUN1(int (*VAR1)[2], const float *VAR2, const float *VAR3, int VAR4, float VAR5, int VAR6, int VAR7)
{
    int VAR8;
    double VAR9;
    for (VAR8 = 0; VAR8 < VAR4; VAR8++)
    {
        VAR9 = VAR3[VAR8] * VAR5;
        VAR1[VAR8][0] = (int)FUN2((int)VAR9, VAR7);
        VAR1[VAR8][1] = (int)FUN2((int)(VAR9 + 0.4054), VAR7);
        if (VAR6 && VAR2[VAR8] < 0.0f)
        {
            VAR1[VAR8][0] = -VAR1[VAR8][0];
            VAR1[VAR8][1] = -VAR1[VAR8][1];
        }
    }
}