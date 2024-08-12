static int FUN1(VAR1 *VAR2, uint8_t VAR3)
{
    VAR4 *VAR5 = FUN2(VAR2);
    VAR5->VAR6[VAR5->VAR7] = VAR3;
    if (VAR5->VAR7++ > 2)
    {
        fprintf(VAR8, "", VAR9, VAR5->VAR7);
        return 1;
    }
    if (VAR5->VAR7 == 2)
    {
        fprintf(VAR8, "", VAR5->VAR6[0], VAR5->VAR6[1]);
    }
    return 0;
}