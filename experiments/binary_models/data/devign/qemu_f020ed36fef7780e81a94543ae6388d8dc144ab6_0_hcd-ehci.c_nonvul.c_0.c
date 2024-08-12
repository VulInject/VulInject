static void FUN1(void *VAR1)
{
    VAR2 *VAR3 = VAR1;
    int VAR4 = 0;
    int64_t VAR5, VAR6;
    uint64_t VAR7;
    int VAR8, VAR9;
    int VAR10;
    VAR6 = FUN2(VAR11);
    VAR7 = VAR6 - VAR3->VAR12;
    VAR8 = VAR7 / VAR13;
    if (FUN3(VAR3) || VAR3->VAR14 != VAR15)
    {
        VAR4++;
        VAR5 = VAR6 + (FUN4() / VAR16);
        if (VAR8 > VAR3->VAR17)
        {
            VAR9 = VAR8 - VAR3->VAR17;
            FUN5(VAR3, VAR9);
            VAR3->VAR12 += VAR13 * VAR9;
            VAR8 -= VAR9;
            FUN6("", VAR9);
        }
        for (VAR10 = 0; VAR10 < VAR8; VAR10++)
        {
            FUN5(VAR3, 1);
            FUN7(VAR3);
            VAR3->VAR12 += VAR13;
        }
    }
    else
    {
        if (VAR3->VAR18 < VAR3->VAR17 / 2)
        {
            VAR3->VAR18++;
        }
        VAR5 = VAR6 + (FUN4() * VAR3->VAR18 / VAR16);
        FUN5(VAR3, VAR8);
        VAR3->VAR12 += VAR13 * VAR8;
    }
    if (FUN8(VAR3) || VAR3->VAR19 != VAR15)
    {
        VAR4++;
        FUN9(VAR3->VAR20);
    }
    if (VAR4)
    {
        FUN10(VAR3->VAR21, VAR5);
    }
}