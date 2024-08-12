void FUN1(VAR1 *VAR2, int VAR3)
{
    int64_t VAR4;
    if (VAR3)
    {
        if (VAR2->VAR5 == 0)
        {
            int64_t VAR6;
            uint8_t VAR7;
            VAR4 = (FUN2(VAR2) >> VAR8);
            VAR4 /= VAR9;
            VAR4++;
            VAR2->VAR10 = FUN3(VAR4);
            VAR2->VAR5 = VAR3;
            for (VAR6 = 0; VAR6 < VAR4; VAR6++)
                VAR7 = VAR2->VAR10[VAR6];
        }
    }
    else
    {
        if (VAR2->VAR5 != 0)
        {
            FUN4(VAR2->VAR10);
            VAR2->VAR5 = VAR3;
        }
    }
}