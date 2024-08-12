static int FUN1(VAR1 *VAR2, uint8_t VAR3)
{
    uint32_t VAR4 = VAR3 << 24 | VAR3 << 16 | VAR3 << 8 | VAR3;
    VAR5 *VAR6 = (VAR5 *)VAR2;
    int VAR7;
    for (VAR7 = 0; VAR7 < (VAR8 / 4); VAR7++)
    {
        if (VAR6[VAR7] != VAR4)
        {
            return 0;
        }
    }
    return 1;
}