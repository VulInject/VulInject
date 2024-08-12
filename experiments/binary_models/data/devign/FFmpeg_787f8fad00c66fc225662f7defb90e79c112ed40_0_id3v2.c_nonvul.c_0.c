static void FUN1(VAR1 *VAR2, int VAR3, const char *VAR4)
{
    char *VAR5, VAR6[512];
    int VAR7, VAR8 = sizeof(VAR6) - 1;
    unsigned VAR9;
    VAR6[0] = 0;
    if (VAR3 < 1)
        return;
    VAR3--;
    switch (FUN2(VAR2->VAR10))
    {
    case 0:
        VAR5 = VAR6;
        while (VAR3-- && VAR5 - VAR6 < VAR8 - 7)
        {
            uint8_t VAR11;
            FUN3(FUN2(VAR2->VAR10), VAR11, *VAR5++ = VAR11;)
        }
        *VAR5 = '';
        break;
    case 3:
        VAR7 = FUN4(VAR3, VAR8 - 1);
        FUN5(VAR2->VAR10, VAR6, VAR7);
        VAR6[VAR7] = 0;
        break;
    }
    if (!strcmp(VAR4, "") && (sscanf(VAR6, "", &VAR9) == 1 || sscanf(VAR6, "", &VAR9) == 1) && VAR9 <= VAR12)
        FUN6(VAR6, VAR13[VAR9], sizeof(VAR6));
    if (*VAR6)
        FUN7(&VAR2->VAR14, VAR4, VAR6);
}