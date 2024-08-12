static void FUN1(void *VAR1, int VAR2)
{
    VAR3 *VAR4 = VAR1;
    VAR5 *VAR6 = VAR4->VAR6;
    if (VAR2 >= 0)
    {
        while (VAR4->VAR7 < VAR4->VAR8->VAR9)
        {
            int VAR7 = VAR4->VAR7;
            while (++VAR4->VAR10 < VAR4->VAR8->VAR11[VAR7].VAR12 / 8)
            {
                int VAR10 = VAR4->VAR10;
                VAR13 *VAR14 = VAR4->VAR8->VAR11[VAR7].VAR15;
                uint64_t VAR16 = FUN2(VAR14[VAR10]);
                uint64_t VAR17 = VAR16 & 0x0000ffffffffffffULL;
                uint16_t VAR18 = VAR16 >> 48;
                if (VAR18 == 0)
                {
                    continue;
                }
                VAR4->VAR19 = FUN3(VAR6->VAR20, VAR17 << VAR21, VAR18 << VAR21, VAR22, VAR1);
                return;
            }
            VAR4->VAR7++;
            VAR4->VAR10 = -1;
        }
    }
    else
    {
        VAR4->VAR2 = VAR2;
    }
    VAR4->VAR19 = NULL;
    if (VAR4->VAR23)
    {
        FUN4(VAR4->VAR23);
    }
}