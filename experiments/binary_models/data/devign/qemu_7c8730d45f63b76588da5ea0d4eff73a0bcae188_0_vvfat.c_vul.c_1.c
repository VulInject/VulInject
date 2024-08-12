static VAR1 *FUN1(VAR2 *VAR3, const char *VAR4, unsigned int VAR5)
{
    int VAR6, VAR7 = 0;
    VAR1 *VAR8 = FUN2(&(VAR3->VAR9));
    const VAR10 *VAR11, *VAR12 = NULL;
    gunichar VAR13;
    bool VAR14 = false;
    char VAR15[11];
    if (!VAR8)
    {
        return NULL;
    }
    memset(VAR8->VAR16, 0x20, sizeof(VAR8->VAR16));
    for (VAR11 = VAR4;; VAR11 = FUN3(VAR11))
    {
        VAR13 = FUN4(VAR11);
        if (VAR13 == '')
        {
            break;
        }
        else if (VAR13 == '')
        {
            if (VAR7 == 0)
            {
                VAR14 = true;
            }
            else
            {
                if (VAR12)
                {
                    VAR14 = true;
                }
                VAR12 = VAR11;
            }
        }
        else if (!VAR12)
        {
            uint8_t VAR17 = FUN5(VAR13);
            if (VAR7 < 8 && VAR17)
            {
                VAR8->VAR16[VAR7++] = VAR17;
            }
            else
            {
                VAR14 = true;
            }
        }
    }
    if (VAR12)
    {
        VAR7 = 0;
        for (VAR11 = FUN3(VAR12);; VAR11 = FUN3(VAR11))
        {
            VAR13 = FUN4(VAR11);
            if (VAR13 == '')
            {
                break;
            }
            else
            {
                uint8_t VAR17 = FUN5(VAR13);
                if (VAR7 < 3 && VAR17)
                {
                    VAR8->VAR16[8 + (VAR7++)] = VAR17;
                }
                else
                {
                    VAR14 = true;
                }
            }
        }
    }
    if (VAR8->VAR16[0] == VAR18)
    {
        VAR8->VAR16[0] = VAR19;
    }
    for (VAR7 = 0; VAR7 < 8; VAR7++)
    {
        if (VAR8->VAR16[VAR7] == '')
        {
            break;
        }
    }
    for (VAR6 = VAR14 ? 1 : 0; VAR6 < 999999; VAR6++)
    {
        VAR1 *VAR20;
        if (VAR6 > 0)
        {
            int VAR21 = sprintf(VAR15, "", VAR6);
            memcpy(VAR8->VAR16 + FUN6(VAR7, 8 - VAR21), VAR15, VAR21);
        }
        for (VAR20 = FUN7(&(VAR3->VAR9), VAR5); VAR20 < VAR8; VAR20++)
        {
            if (!FUN8(VAR20) && !memcmp(VAR20->VAR16, VAR8->VAR16, 11))
            {
                break;
            }
        }
        if (VAR20 == VAR8)
        {
            return VAR8;
        }
    }
    return NULL;
}