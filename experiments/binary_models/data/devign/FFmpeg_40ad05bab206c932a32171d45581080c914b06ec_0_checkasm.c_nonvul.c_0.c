int FUN1(float VAR1, float VAR2, unsigned VAR3)
{
    union av_intfloat32 VAR4, VAR5;
    VAR4.VAR6 = VAR1;
    VAR5.VAR6 = VAR2;
    if (FUN2(VAR4) != FUN2(VAR5))
    {
        return VAR1 == VAR2;
    }
    if (FUN3((VAR7)VAR4.VAR8 - VAR5.VAR8) <= VAR3)
        return 1;
    return 0;
}