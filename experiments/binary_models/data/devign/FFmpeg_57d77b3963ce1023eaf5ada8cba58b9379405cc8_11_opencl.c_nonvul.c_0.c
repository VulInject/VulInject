int FUN1(VAR1 **VAR2, int *VAR3, int VAR4, cl_mem VAR5, size_t VAR6)
{
    int VAR7, VAR8 = 0, VAR9 = 0;
    VAR1 *VAR10;
    void *VAR11;
    cl_int VAR12;
    if ((unsigned int)VAR4 > 8)
    {
        return FUN2(VAR13);
    }
    for (VAR7 = 0; VAR7 < VAR4; VAR7++)
    {
        VAR8 += VAR3[VAR7];
    }
    if (VAR8 > VAR6)
    {
        FUN3(&VAR14, VAR15, "");
        return FUN2(VAR13);
    }
    VAR11 = FUN4(VAR16.VAR17, VAR5, VAR18, VAR19, 0, VAR8, 0, NULL, NULL, &VAR12);
    if (VAR12 != VAR20)
    {
        FUN3(&VAR14, VAR15, "", FUN5(VAR12));
        return VAR21;
    }
    VAR10 = VAR11;
    if (VAR9 >= 0)
    {
        for (VAR7 = 0; VAR7 < VAR4; VAR7++)
        {
            memcpy(VAR2[VAR7], VAR10, VAR3[VAR7]);
            VAR10 += VAR3[VAR7];
        }
    }
    VAR12 = FUN6(VAR16.VAR17, VAR5, VAR11, 0, NULL, NULL);
    if (VAR12 != VAR20)
    {
        FUN3(&VAR14, VAR15, "", FUN5(VAR12));
        return VAR21;
    }
    return 0;
}