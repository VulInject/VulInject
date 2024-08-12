static void FUN1(void)
{
    const VAR1 *VAR2;
    memset(&VAR3, 0, sizeof(VAR3));
    for (VAR2 = &VAR4[0]; VAR2->VAR5 != VAR6; VAR2++)
    {
        VAR3[VAR2->VAR5][VAR2->VAR7] = true;
    }
}