static VAR1 FUN1(VAR2 *VAR3)
{
    int64_t VAR4;
    char *VAR5;
    int VAR6;
    switch (*VAR7)
    {
    case '':
        FUN2();
        VAR4 = FUN1(VAR3);
        break;
    case '':
        FUN2();
        VAR4 = -FUN1(VAR3);
        break;
    case '':
        FUN2();
        VAR4 = ~FUN1(VAR3);
        break;
    case '':
        FUN2();
        VAR4 = FUN3(VAR3);
        if (*VAR7 != '')
        {
            FUN4(VAR3, "");
        }
        FUN2();
        break;
    case ''':
        VAR7++;
        if (*VAR7 == '')
            FUN4(VAR3, "");
        VAR4 = *VAR7;
        VAR7++;
        if (*VAR7 != ''')
            FUN4(VAR3, "");
        FUN2();
        break;
    case '':
    {
        char VAR8[128], *VAR9;
        target_long VAR10 = 0;
        VAR7++;
        VAR9 = VAR8;
        while ((*VAR7 >= '' && *VAR7 <= '') || (*VAR7 >= '' && *VAR7 <= '') || (*VAR7 >= '' && *VAR7 <= '') || *VAR7 == '' || *VAR7 == '')
        {
            if ((VAR9 - VAR8) < sizeof(VAR8) - 1)
                *VAR9++ = *VAR7;
            VAR7++;
        }
        while (FUN5(*VAR7))
            VAR7++;
        *VAR9 = 0;
        VAR6 = FUN6(&VAR10, VAR8);
        if (VAR6 < 0)
            FUN4(VAR3, "");
        VAR4 = VAR10;
    }
    break;
    case '':
        FUN4(VAR3, "");
        VAR4 = 0;
        break;
    default:
        VAR11 = 0;
        VAR4 = FUN7(VAR7, &VAR5, 0);
        if (VAR11 == VAR12)
        {
            FUN4(VAR3, "");
        }
        if (VAR7 == VAR5)
        {
            FUN4(VAR3, "", *VAR5);
        }
        VAR7 = VAR5;
        while (FUN5(*VAR7))
            VAR7++;
        break;
    }
    return VAR4;
}