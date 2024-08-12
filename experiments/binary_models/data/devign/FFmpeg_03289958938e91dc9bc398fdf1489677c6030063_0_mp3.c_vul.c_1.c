static void FUN1(VAR1 *VAR2, int VAR3, char *VAR4, int VAR5)
{
    char *VAR6;
    int VAR7;
    if (VAR5 > 0)
        VAR4[0] = 0;
    if (VAR3 < 1)
        return;
    VAR3--;
    VAR5--;
    switch (FUN2(VAR2->VAR8))
    {
    case 0:
        VAR6 = VAR4;
        while (VAR3--)
        {
            uint8_t VAR9;
            FUN3(FUN2(VAR2->VAR8), VAR9, if (VAR6 - VAR4 < VAR5 - 1) *VAR6++ = VAR9;)
        }
        *VAR6 = '';
        break;
    case 3:
        VAR7 = FUN4(VAR3, VAR5);
        FUN5(VAR2->VAR8, VAR4, VAR7);
        VAR4[VAR7] = 0;
        break;
    }
}