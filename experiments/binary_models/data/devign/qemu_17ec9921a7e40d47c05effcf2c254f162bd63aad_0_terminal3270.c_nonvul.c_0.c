static int FUN1(VAR1 *VAR2, uint8_t VAR3)
{
    VAR4 *VAR5 = FUN2(VAR2);
    int VAR6 = 0;
    int VAR7 = FUN3(FUN4(VAR5));
    int VAR8 = (VAR9 - 3) / 2;
    int VAR10 = FUN5(VAR7, VAR8);
    int VAR11 = 0;
    if (!VAR5->VAR12)
    {
        if (!(VAR5->VAR13[0] == VAR14 && VAR5->VAR13[1] != VAR14))
        {
            return 0;
        }
    }
    if (!FUN6(&VAR5->VAR15))
    {
        return VAR7;
    }
    VAR5->VAR13[VAR11++] = VAR3;
    do
    {
        FUN7(FUN4(VAR5), &VAR5->VAR13[VAR11], VAR10);
        VAR7 = FUN3(FUN4(VAR5));
        VAR11 += VAR10;
        VAR11 = FUN8(VAR5->VAR13, VAR11);
        if (!VAR7)
        {
            VAR5->VAR13[VAR11++] = VAR14;
            VAR5->VAR13[VAR11++] = VAR16;
        }
        VAR6 = FUN9(&VAR5->VAR15, VAR5->VAR13, VAR11);
        VAR10 = FUN5(VAR7, VAR8);
        VAR11 = 0;
    } while (VAR10 && VAR6 >= 0);
    return (VAR6 <= 0) ? 0 : FUN4(VAR5)->VAR7;
}