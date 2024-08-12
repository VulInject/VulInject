static int FUN1(VAR1 *VAR2)
{
    int VAR3;
    int VAR4;
    int VAR5, VAR6, VAR7;
    VAR4 = 0;
    FUN2(NULL, "", VAR2->VAR8);
    if (VAR2->VAR9[0] == '' && VAR2->VAR9[1] == '' && VAR2->VAR9[2] == '' && (VAR2->VAR9[3] == '' || VAR2->VAR9[3] == ''))
        return VAR10;
    for (VAR3 = 1; VAR3 < VAR2->VAR8 - 3; VAR3++)
    {
        if (VAR2->VAR9[VAR3 + 0] == '' && VAR2->VAR9[VAR3 + 1] == '' && VAR2->VAR9[VAR3 + 2] == '' && VAR2->VAR9[VAR3 + 3] == '')
        {
            VAR4 = VAR10 / 5;
            VAR7 = VAR2->VAR9[VAR3 + 19];
            VAR5 = VAR2->VAR9[VAR3 + 20] | VAR2->VAR9[VAR3 + 21] << 8;
            VAR6 = VAR2->VAR9[VAR3 + 22] | VAR2->VAR9[VAR3 + 23] << 8;
            VAR5 = (VAR5 << 4) | (VAR7 >> 4);
            if ((VAR6 + VAR5 + VAR3 + 23) < VAR2->VAR8 - 2)
            {
                if (VAR2->VAR9[VAR3 + 23 + VAR6 + VAR5 + 1] == 0xEF && VAR2->VAR9[VAR3 + 23 + VAR6 + VAR5 + 2] == 0xBE)
                    return VAR10 - 20;
            }
        }
    }
    if (FUN3(VAR2->VAR11, ""))
        return VAR10 / 2;
    return VAR4;
}