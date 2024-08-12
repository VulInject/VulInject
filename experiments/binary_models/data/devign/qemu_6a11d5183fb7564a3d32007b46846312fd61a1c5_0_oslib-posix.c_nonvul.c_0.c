int FUN1(char *VAR1, int VAR2)
{
    uint8_t VAR3;
    int VAR4, VAR5;
    FUN2("");
    FUN3(VAR6);
    FUN4();
    VAR4 = 0;
    for (;;)
    {
        VAR5 = read(0, &VAR3, 1);
        if (VAR5 == -1)
        {
            if (VAR7 == VAR8 || VAR7 == VAR9)
            {
                continue;
            }
            else
            {
                break;
            }
        }
        else if (VAR5 == 0)
        {
            VAR5 = -1;
            break;
        }
        else
        {
            if (VAR3 == '' || VAR3 == '')
            {
                VAR5 = 0;
                break;
            }
            if (VAR4 < (VAR2 - 1))
            {
                VAR1[VAR4++] = VAR3;
            }
        }
    }
    FUN5();
    VAR1[VAR4] = '';
    FUN2("");
    return VAR5;
}