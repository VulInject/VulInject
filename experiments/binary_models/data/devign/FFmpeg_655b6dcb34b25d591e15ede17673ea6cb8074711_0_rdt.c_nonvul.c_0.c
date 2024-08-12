FUN1(VAR1 *VAR2, const char *VAR3, const char *VAR4)
{
    do
    {
        if (sscanf(VAR3, "" VAR5, &VAR2->VAR6->VAR7) == 1)
            break;
        if (!(VAR3 = strchr(VAR3, '')) || VAR3 > VAR4)
            VAR3 = VAR4;
        VAR3++;
    } while (VAR3 < VAR4);
}