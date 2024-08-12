static int FUN1(VAR1 *VAR2, const char *VAR3)
{
    int VAR4;
    if (VAR2->VAR5 > 0)
    {
        return VAR2->VAR5;
    }
    for (VAR4 = 0; VAR4 < FUN2(VAR6); VAR4++)
    {
        if (VAR6[VAR4].VAR3 == NULL)
        {
            continue;
        }
        if (strcmp(VAR3, VAR6[VAR4].VAR3) == 0)
        {
            return VAR6[VAR4].VAR7;
        }
    }
    FUN3("", VAR3);
    return VAR8;
}