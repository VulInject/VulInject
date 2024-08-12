VAR1 FUN1(int32_t VAR2, uint16_t VAR3, FUN2 (*VAR4)[VAR5], void *VAR6, VAR7 *VAR8, VAR9 *VAR10, uint8_t VAR11, int VAR12)
{
    unsigned int VAR13, VAR14 = 0;
    VAR1 *VAR15 = VAR6;
    VAR16 *VAR17 = VAR6;
    for (VAR13 = 0; VAR13 < VAR3; VAR13++)
    {
        for (VAR14 = 0; VAR14 <= VAR11; VAR14++)
        {
            int VAR18 = VAR8[VAR14];
            int32_t VAR19 = VAR4[VAR13][VAR18] << VAR10[VAR18];
            VAR2 ^= (VAR19 & 0xffffff) << VAR18;
            if (VAR12)
                *VAR15++ = VAR19 << 8;
            else
                *VAR17++ = VAR19 >> 8;
        }
    }
    return VAR2;
}