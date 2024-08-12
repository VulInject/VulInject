int FUN1(uint32_t VAR1, VAR2 **VAR3)
{
    int VAR4, VAR5;
    VAR5 = -1;
    *VAR3 = NULL;
    for (VAR4 = 0; VAR6[VAR4].VAR7 != NULL; VAR4++)
    {
        if ((VAR1 & VAR6[VAR4].VAR8) == (VAR6[VAR4].VAR1 & VAR6[VAR4].VAR8))
        {
            *VAR3 = &VAR6[VAR4];
            VAR5 = 0;
            break;
        }
    }
    return VAR5;
}