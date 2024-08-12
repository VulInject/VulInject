VAR1 *FUN1(VAR2 *VAR3, int64_t VAR4, VAR5 *VAR6, int VAR7, VAR8 *VAR9, void *VAR10)
{
    VAR11 *VAR12 = VAR3->VAR12;
    VAR1 *VAR13;
    if (!VAR12)
        return NULL;
    if (FUN2(VAR3, VAR4, VAR7))
        return NULL;
    if (VAR4 == 0 && VAR3->VAR14 && VAR7 > 0)
    {
        memcpy(VAR6, VAR3->VAR15, 512);
        VAR4++;
        VAR7--;
        VAR6 += 512;
    }
    VAR13 = VAR12->FUN1(VAR3, VAR4, VAR6, VAR7, VAR9, VAR10);
    if (VAR13)
    {
        VAR3->VAR16 += (unsigned)VAR7 * VAR17;
        VAR3->VAR18++;
    }
    return VAR13;
}