static int FUN1(VAR1 *VAR2, const char *VAR3)
{
    int VAR4, VAR5, signal = 0;
    char VAR6;
    char *VAR7;
    unsigned long VAR8;
    VAR9 *VAR10;
    int VAR11 = 1;
    FUN2(VAR10) { VAR11 = VAR11 <= VAR10->VAR12 ? VAR10->VAR12 + 1 : VAR11; }
    VAR7 = FUN3(char, VAR11);
    FUN2(VAR10) { VAR7[VAR10->VAR12] = 1; }
    VAR4 = 0;
    while (*VAR3)
    {
        if (*VAR3++ != '')
        {
            VAR4 = -VAR13;
            goto VAR14;
        }
        VAR6 = *VAR3++;
        if (VAR6 == '' || VAR6 == '')
        {
            VAR6 = FUN4(VAR6);
            VAR4 = FUN5(VAR3 + 1, &VAR3, 16, &VAR8);
            if (VAR4)
            {
                goto VAR14;
            }
            signal = FUN6(VAR8);
        }
        else if (VAR6 != '' && VAR6 != '')
        {
            VAR4 = -VAR13;
            goto VAR14;
        }
        if ((VAR3[0] == '' && VAR3[1] == '' && VAR3[2] == '') || (VAR3[0] != ''))
        {
            if (*VAR3 == '')
            {
                VAR3 += 3;
            }
            for (VAR5 = 0; VAR5 < VAR11; VAR5++)
            {
                if (VAR7[VAR5] == 1)
                {
                    VAR7[VAR5] = VAR6;
                }
            }
        }
        else if (*VAR3 == '')
        {
            VAR3++;
            VAR4 = FUN5(VAR3, &VAR3, 16, &VAR8);
            if (VAR4)
            {
                goto VAR14;
            }
            VAR10 = VAR8 ? FUN7(VAR8) : VAR15;
            if (!VAR10)
            {
                VAR4 = -VAR16;
                goto VAR14;
            }
            if (VAR7[VAR10->VAR12] == 1)
            {
                VAR7[VAR10->VAR12] = VAR6;
            }
        }
    }
    VAR2->signal = signal;
    FUN8(VAR2, VAR7);
VAR14:
    FUN9(VAR7);
    return VAR4;
}