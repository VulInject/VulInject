int FUN1(struct VAR1 *VAR2, VASurfaceID VAR3)
{
    VABufferID VAR4[3];
    unsigned int VAR5 = 0;
    FUN2(VAR2->VAR6, VAR2->VAR7);
    VAR4[VAR5++] = VAR2->VAR7;
    if (VAR2->VAR8)
    {
        FUN2(VAR2->VAR6, VAR2->VAR8);
        VAR4[VAR5++] = VAR2->VAR8;
    }
    if (VAR2->VAR9)
    {
        FUN2(VAR2->VAR6, VAR2->VAR9);
        VAR4[VAR5++] = VAR2->VAR9;
    }
    if (FUN3(VAR2->VAR6, VAR2->VAR10, VAR3) != VAR11)
        return -1;
    if (FUN4(VAR2->VAR6, VAR2->VAR10, VAR4, VAR5) != VAR11)
        return -1;
    if (FUN4(VAR2->VAR6, VAR2->VAR10, VAR2->VAR12, VAR2->VAR13) != VAR11)
        return -1;
    if (FUN5(VAR2->VAR6, VAR2->VAR10) != VAR11)
        return -1;