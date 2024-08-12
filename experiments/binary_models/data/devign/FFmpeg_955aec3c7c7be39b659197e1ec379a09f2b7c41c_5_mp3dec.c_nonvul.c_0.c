static int FUN1(VAR1 *VAR2, int64_t VAR3, VAR4 *VAR5)
{
    MPADecodeHeader VAR6 = {0};
    int VAR7;
    uint32_t VAR8;
    int64_t VAR9 = 0;
    for (VAR7 = 0; VAR7 < VAR10; VAR7++)
    {
        VAR9 = FUN2(VAR2, VAR3 + VAR6.VAR11, VAR12);
        if (VAR9 < 0)
            break;
        VAR8 = FUN3(VAR2);
        if (FUN4(&VAR6, VAR8))
            break;
        VAR5[VAR7] = VAR9;
    }
    return VAR7;
}