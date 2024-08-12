void FUN1(VAR1 *VAR2, int VAR3)
{
    VAR4 *VAR5 = FUN2(VAR2);
    if (VAR3)
    {
        FUN3(VAR5, VAR6);
    }
    else
    {
        uint32_t VAR7 = VAR5->VAR7[VAR6];
        switch ((VAR7 >> 8) & 7)
        {
        case VAR8:
            if (!(VAR7 & VAR9))
                break;
            FUN4(VAR5->VAR10, VAR7 & 0xff);
        case VAR11:
            FUN5(FUN6(VAR5->VAR12), VAR13);
            break;
        }
    }
}