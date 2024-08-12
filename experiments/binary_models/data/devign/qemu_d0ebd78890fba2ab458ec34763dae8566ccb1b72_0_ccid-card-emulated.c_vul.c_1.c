static VAR1 FUN1(char *VAR2, VAR3 *VAR4, uint32_t VAR5)
{
    uint32_t VAR6 = VAR5;
    while (VAR4->VAR7 != NULL)
    {
        if (strcmp(VAR4->VAR7, VAR2) == 0)
        {
            VAR6 = VAR4->VAR8;
            break;
        }
        VAR4++;
    }
    return VAR6;