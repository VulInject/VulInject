static int FUN1(const VAR1 **VAR2, const VAR1 *VAR3)
{
    const VAR1 *VAR4;
    unsigned int VAR5, VAR6;
    int VAR7;
    int VAR8 = 0;
    VAR4 = *VAR2;
    while (VAR4 < VAR3)
    {
        VAR5 = *VAR4++;
        VAR6 = *VAR4;
        if ((VAR5 == 0xff) && (VAR6 >= 0xc0) && (VAR6 <= 0xfe) && VAR4 < VAR3)
        {
            VAR7 = *VAR4++;
            goto VAR9;
        }
        VAR8++;
    }
    VAR7 = -1;
VAR9:
    FUN2(NULL, "", VAR8);
    *VAR2 = VAR4;
    return VAR7;
}