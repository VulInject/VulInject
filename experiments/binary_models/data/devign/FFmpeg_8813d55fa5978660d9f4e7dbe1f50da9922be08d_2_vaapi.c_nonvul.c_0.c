int FUN1(VAR1 *VAR2, VASurfaceID VAR3)
{
    VABufferID VAR4[3];
    unsigned int VAR5 = 0;
    if (VAR2->VAR6 == VAR7)
        return 0;
    FUN2(VAR2->VAR8, VAR2->VAR6);
    VAR4[VAR5++] = VAR2->VAR6;
    if (VAR2->VAR9 != VAR7)
    {
        FUN2(VAR2->VAR8, VAR2->VAR9);
        VAR4[VAR5++] = VAR2->VAR9;
    }
    if (VAR2->VAR10 != VAR7)
    {
        FUN2(VAR2->VAR8, VAR2->VAR10);
        VAR4[VAR5++] = VAR2->VAR10;
    }
    if (FUN3(VAR2->VAR8, VAR2->VAR11, VAR3) != VAR12)
        return -1;
    if (FUN4(VAR2->VAR8, VAR2->VAR11, VAR4, VAR5) != VAR12)
        return -1;
    if (FUN4(VAR2->VAR8, VAR2->VAR11, VAR2->VAR13, VAR2->VAR14) != VAR12)
        return -1;
    if (FUN5(VAR2->VAR8, VAR2->VAR11) != VAR12)
        return -1;
    return 0;
}