int FUN1(const char *VAR1, int VAR2)
{
    int VAR3, VAR4 = 0;
    for (VAR3 = 0; !VAR2 && VAR3 < FUN2(VAR5); VAR3++)
    {
        if (VAR5[VAR3] && !strcmp(VAR1, VAR5[VAR3]))
            return VAR3;
    }
    if (!VAR2)
        return -1;
    if (VAR1[0] == '')
        VAR1 = "";
    for (VAR3 = 0; VAR3 < 3; VAR3++)
    {
        unsigned char VAR6 = (unsigned char)VAR1[VAR3];
        if (VAR6 < 0x60)
            return -1;
        if (VAR6 > 0x60 + 0x1f)
            return -1;
        VAR4 <<= 5;
        VAR4 |= (VAR6 - 0x60);
    }
    return VAR4;
}