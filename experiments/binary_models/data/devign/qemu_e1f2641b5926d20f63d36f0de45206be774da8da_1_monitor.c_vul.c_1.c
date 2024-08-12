static void FUN1(VAR1 *VAR2, const char *VAR3)
{
    char VAR4;
    for (;;)
    {
        assert(VAR2->VAR5 < sizeof(VAR2->VAR6) - 1);
        VAR4 = *VAR3++;
        if (VAR4 == '')
            break;
        if (VAR4 == '')
            VAR2->VAR6[VAR2->VAR5++] = '';
        VAR2->VAR6[VAR2->VAR5++] = VAR4;
        if (VAR2->VAR5 >= (sizeof(VAR2->VAR6) - 1) || VAR4 == '')
            FUN2(VAR2);
    }
}