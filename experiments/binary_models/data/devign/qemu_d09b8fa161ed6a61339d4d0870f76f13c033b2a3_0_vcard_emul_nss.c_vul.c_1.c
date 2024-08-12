FUN1(const char *VAR1)
{
    int VAR2 = 0;
    VAR3 *VAR4;
    memcpy(&VAR5, &VAR6, sizeof(VAR5));
    VAR4 = &VAR5;
    do
    {
        VAR1 = FUN2(VAR1);
        if (*VAR1 == '')
        {
            continue;
        }
        if (FUN3(VAR1, "", 5) == 0)
        {
            const char *VAR7;
            size_t VAR8;
            const char *VAR9;
            size_t VAR10;
            const char *VAR11;
            size_t VAR12;
            char VAR13[100];
            VCardEmulType VAR14;
            int VAR15, VAR16;
            VAR17 *VAR18 = NULL;
            VAR1 = FUN2(VAR1 + 5);
            if (*VAR1 != '')
            {
                continue;
            }
            VAR1 = FUN2(VAR1 + 1);
            FUN4(VAR7)
            FUN4(VAR9) FUN4(VAR11) VAR12 = FUN5(VAR12, sizeof(VAR13) - 1);
            memcpy(VAR13, VAR11, VAR12);
            VAR13[VAR12] = '';
            VAR14 = FUN6(VAR13);
            FUN4(VAR11)
            if (*VAR1 == 0) { break; }
            if (VAR4->VAR19 >= VAR2)
            {
                VAR2 += VAR20;
                VAR18 = FUN7(VAR17, VAR4->VAR21, VAR2);
            }
            VAR4->VAR21 = VAR18;
            VAR18 = &VAR18[VAR4->VAR19];
            VAR18->VAR7 = FUN8(VAR7, VAR8);
            VAR18->VAR9 = FUN8(VAR9, VAR10);
            VAR18->VAR22 = VAR14;
            VAR18->VAR11 = FUN8(VAR11, VAR12);
            VAR15 = FUN9(VAR1, '', '') + 1;
            VAR18->VAR23 = VAR15;
            VAR18->VAR24 = FUN10(char *, VAR15);
            for (VAR16 = 0; VAR16 < VAR15; VAR16++)
            {
                const char *VAR25 = VAR1;
                VAR1 = strpbrk(VAR1, "");
                VAR18->VAR24[VAR16] = FUN8(VAR25, VAR1 - VAR25);
                VAR1 = FUN2(VAR1 + 1);
            }
            if (*VAR1 == '')
            {
                VAR1++;
            }
            VAR4->VAR19++;
        }
        else if (FUN3(VAR1, "", 7) == 0)
        {
            VAR1 = FUN2(VAR1 + 7);
            if (*VAR1 == '' || *VAR1 == '' || *VAR1 == '' || *VAR1 == '')
            {
                VAR4->VAR26 = VAR27;
            }
            else
            {
                VAR4->VAR26 = VAR28;
            }
            VAR1 = FUN11(VAR1);
        }
        else if (FUN3(VAR1, "", 8) == 0)
        {
            VAR1 = FUN2(VAR1 + 8);
            VAR4->VAR29 = FUN6(VAR1);
            VAR1 = FUN11(VAR1);
        }
        else if (FUN3(VAR1, "", 10) == 0)
        {
            const char *VAR30;
            VAR1 = FUN2(VAR1 + 10);
            VAR30 = VAR1;
            VAR1 = FUN11(VAR1);
            VAR4->VAR31 = FUN8(VAR30, VAR1 - VAR30);
        }
        else if (FUN3(VAR1, "", 3) == 0)
        {
            const char *VAR32;
            VAR1 = FUN2(VAR1 + 3);
            if (*VAR1 != '')
            {
                continue;
            }
            VAR1++;
            VAR32 = VAR1;
            VAR1 = strpbrk(VAR1, ""\VAR33");
            VAR4->VAR34 = FUN8(VAR32, VAR1 - VAR32);
            if (*VAR1 != 0)
            {
                VAR1++;
            }
        }
        else
        {
            VAR1 = FUN11(VAR1);
        }
    } while (*VAR1 != 0);
    return VAR4;
}