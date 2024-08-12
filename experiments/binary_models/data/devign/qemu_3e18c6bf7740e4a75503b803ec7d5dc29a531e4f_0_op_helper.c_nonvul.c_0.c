void FUN1(uint32_t VAR1, uint32_t VAR2)
{
    uint32_t VAR3;
    VAR3 = VAR4->VAR5[VAR6];
    VAR3 &= 3;
    VAR4->VAR7[VAR3][VAR1] = VAR4->VAR8[VAR2];
    if (VAR3 == 1 || VAR3 == 2)
    {
        if (VAR1 == 6)
        {
            VAR4->VAR7[VAR9] = VAR4->VAR8[VAR2];
            VAR4->VAR7[VAR10] = VAR4->VAR8[VAR2];
        }
        else if (VAR1 == 5)
        {
            uint32_t VAR11;
            uint32_t VAR12;
            uint32_t VAR13, VAR14;
            uint32_t VAR15;
            int VAR16;
            VAR12 = VAR11 = VAR4->VAR7[VAR17];
            VAR11 >>= 4;
            VAR11 &= 3;
            VAR12 &= 15;
            VAR13 = VAR4->VAR7[VAR18];
            VAR14 = VAR4->VAR7[VAR10];
            VAR15 = FUN2(VAR4->VAR19[VAR3 - 1][VAR11][VAR12].VAR14, 13, 31);
            VAR15 <<= VAR20;
            VAR16 = FUN2(VAR4->VAR19[VAR3 - 1][VAR11][VAR12].VAR13, 3, 3);
            VAR4->VAR19[VAR3 - 1][VAR11][VAR12].VAR13 = VAR13;
            VAR4->VAR19[VAR3 - 1][VAR11][VAR12].VAR14 = VAR14;
            FUN3("", VAR15, VAR16, VAR4->VAR21);
            if (VAR16)
            {
                FUN4(VAR4, VAR15);
            }
        }
    }
}