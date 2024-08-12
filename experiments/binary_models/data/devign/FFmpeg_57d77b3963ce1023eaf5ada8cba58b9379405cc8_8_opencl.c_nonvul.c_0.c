int FUN1(cl_mem VAR1, size_t VAR2, int VAR3, VAR4 **VAR5, int *VAR6, int VAR7)
{
    int VAR8, VAR9 = 0;
    VAR4 *VAR10;
    cl_int VAR11;
    void *VAR12;
    if ((unsigned int)VAR7 > 8)
    {
        return FUN2(VAR13);
    }
    for (VAR8 = 0; VAR8 < VAR7; VAR8++)
    {
        VAR9 += VAR6[VAR8];
    }
    if (VAR9 > VAR2)
    {
        FUN3(&VAR14, VAR15, "");
        return FUN2(VAR13);
    }
    VAR12 = FUN4(VAR16.VAR17, VAR1, VAR18, VAR19, 0, VAR9 + VAR3, 0, NULL, NULL, &VAR11);
    if (VAR11 != VAR20)
    {
        FUN3(&VAR14, VAR15, "", FUN5(VAR11));
        return VAR21;
    }
    VAR10 = VAR12;
    VAR10 += VAR3;
    for (VAR8 = 0; VAR8 < VAR7; VAR8++)
    {
        memcpy(VAR10, VAR5[VAR8], VAR6[VAR8]);
        VAR10 += VAR6[VAR8];
    }
    VAR11 = FUN6(VAR16.VAR17, VAR1, VAR12, 0, NULL, NULL);
    if (VAR11 != VAR20)
    {
        FUN3(&VAR14, VAR15, "", FUN5(VAR11));
        return VAR21;
    }
    return 0;
}