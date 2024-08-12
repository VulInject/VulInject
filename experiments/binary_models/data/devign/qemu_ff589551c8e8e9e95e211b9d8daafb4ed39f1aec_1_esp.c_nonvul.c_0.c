VAR1 FUN1(VAR2 *VAR3, uint32_t VAR4)
{
    uint32_t VAR5;
    FUN2(VAR4, VAR3->VAR6[VAR4]);
    switch (VAR4)
    {
    case VAR7:
        if ((VAR3->VAR6[VAR8] & VAR9) == 0)
        {
            FUN3(VAR10, "");
            VAR3->VAR6[VAR7] = 0;
            FUN4(VAR3);
        }
        else if (VAR3->VAR11 < VAR3->VAR12)
        {
            VAR3->VAR13--;
            VAR3->VAR6[VAR7] = VAR3->VAR14[VAR3->VAR11++];
            FUN4(VAR3);
        }
        if (VAR3->VAR11 == VAR3->VAR12)
        {
            VAR3->VAR11 = 0;
            VAR3->VAR12 = 0;
        }
        break;
    case VAR15:
        VAR5 = VAR3->VAR6[VAR15];
        VAR3->VAR6[VAR15] = 0;
        VAR3->VAR6[VAR8] &= ~VAR16;
        VAR3->VAR6[VAR17] = VAR18;
        FUN5(VAR3);
        return VAR5;
    case VAR19:
        if (!VAR3->VAR20)
        {
            return VAR3->VAR21;
        }
    default:
        break;
    }
    return VAR3->VAR6[VAR4];
}