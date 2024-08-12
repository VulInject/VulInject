static int FUN1(uint32_t VAR1, int64_t VAR2)
{
    if (VAR3 <= VAR4)
    {
        if (VAR3 == 0)
            VAR3 = 10;
        VAR3 *= 2;
        VAR5 = FUN2(VAR5, VAR3 * sizeof(VAR6));
        VAR7 = FUN2(VAR7, VAR3 * sizeof(VAR8));
        if ((VAR5 == NULL) || (VAR7 == NULL))
        {
            FUN3(NULL, VAR9, "");
            return FUN4(VAR10);
        }
    }
    VAR5[VAR4] = VAR1;
    VAR7[VAR4] = VAR2;
    VAR4++;
    return 0;
}