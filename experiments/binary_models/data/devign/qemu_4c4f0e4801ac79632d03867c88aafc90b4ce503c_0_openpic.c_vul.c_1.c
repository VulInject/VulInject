static VAR1 FUN1(void *VAR2, uint64_t VAR3, unsigned VAR4)
{
    VAR5 *VAR6 = VAR2;
    uint32_t VAR7;
    int VAR8;
    FUN2("", VAR9, VAR3);
    VAR7 = 0xFFFFFFFF;
    if (VAR3 & 0xF)
    {
        return VAR7;
    }
    VAR3 = VAR3 & 0xFFF0;
    VAR8 = VAR3 >> 5;
    if (VAR3 & 0x10)
    {
        VAR7 = FUN3(VAR6, VAR8);
    }
    else
    {
        VAR7 = FUN4(VAR6, VAR8);
    }
    FUN2("", VAR9, VAR7);
    return VAR7;
}