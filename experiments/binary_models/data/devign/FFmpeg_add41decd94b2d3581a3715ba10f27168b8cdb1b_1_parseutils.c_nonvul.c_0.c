const char *FUN1(const char *VAR1, const char *VAR2, struct VAR3 *VAR4)
{
    int VAR5, VAR6;
    for (;;)
    {
        VAR5 = *VAR2++;
        if (VAR5 == '')
        {
            return VAR1;
        }
        else if (VAR5 == '')
        {
            VAR5 = *VAR2++;
            switch (VAR5)
            {
            case '':
                VAR6 = FUN2(&VAR1, 0, 23, 2);
                if (VAR6 == -1)
                    return NULL;
                VAR4->VAR7 = VAR6;
                break;
            case '':
                VAR6 = FUN2(&VAR1, 0, 59, 2);
                if (VAR6 == -1)
                    return NULL;
                VAR4->VAR8 = VAR6;
                break;
            case '':
                VAR6 = FUN2(&VAR1, 0, 59, 2);
                if (VAR6 == -1)
                    return NULL;
                VAR4->VAR9 = VAR6;
                break;
            case '':
                VAR6 = FUN2(&VAR1, 0, 9999, 4);
                if (VAR6 == -1)
                    return NULL;
                VAR4->VAR10 = VAR6 - 1900;
                break;
            case '':
                VAR6 = FUN2(&VAR1, 1, 12, 2);
                if (VAR6 == -1)
                    return NULL;
                VAR4->VAR11 = VAR6 - 1;
                break;
            case '':
                VAR6 = FUN2(&VAR1, 1, 31, 2);
                if (VAR6 == -1)
                    return NULL;
                VAR4->VAR12 = VAR6;
                break;
            case '':
                goto VAR13;
            default:
                return NULL;
            }
        }
        else
        {
        VAR13:
            if (VAR5 != *VAR1)
                return NULL;
            VAR1++;
        }
    }
}