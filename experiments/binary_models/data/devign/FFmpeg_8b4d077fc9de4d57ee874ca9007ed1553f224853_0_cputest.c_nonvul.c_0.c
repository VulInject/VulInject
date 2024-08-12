int FUN1(void)
{
    int VAR1;
    int VAR2, VAR3, VAR4, VAR5;
    long VAR6, VAR7;
    VAR8 FUN2(""
                         ""
                         ""
                         ""
                         ""
                         ""
                         ""
                         ""
                         : ""(VAR6), ""(VAR7)
                         :
                         : "");
    if (VAR6 == VAR7)
        return 0;
    FUN3(0, VAR2, VAR3, VAR4, VAR5);
    if (VAR3 == 0x756e6547 && VAR5 == 0x49656e69 && VAR4 == 0x6c65746e)
    {
    VAR9:
        FUN3(1, VAR2, VAR3, VAR4, VAR5);
        if ((VAR5 & 0x00800000) == 0)
            return 0;
        VAR1 = VAR10;
        if (VAR5 & 0x02000000)
            VAR1 |= VAR11 | VAR12;
        if (VAR5 & 0x04000000)
            VAR1 |= VAR13;
        return VAR1;
    }
    else if (VAR3 == 0x68747541 && VAR5 == 0x69746e65 && VAR4 == 0x444d4163)
    {
        FUN3(0x80000000, VAR2, VAR3, VAR4, VAR5);
        if ((unsigned)VAR2 < 0x80000001)
            goto VAR9;
        FUN3(0x80000001, VAR2, VAR3, VAR4, VAR5);
        if ((VAR5 & 0x00800000) == 0)
            return 0;
        VAR1 = VAR10;
        if (VAR5 & 0x80000000)
            VAR1 |= VAR14;
        if (VAR5 & 0x00400000)
            VAR1 |= VAR11;
        return VAR1;
    }
    else if (VAR3 == 0x746e6543 && VAR5 == 0x48727561 && VAR4 == 0x736c7561)
    {
        FUN3(0x80000000, VAR2, VAR3, VAR4, VAR5);
        if ((unsigned)VAR2 < 0x80000001)
            goto VAR9;
        FUN3(0x80000001, VAR2, VAR3, VAR4, VAR5);
        VAR1 = 0;
        if (VAR5 & (1 << 31))
            VAR1 |= VAR14;
        if (VAR5 & (1 << 23))
            VAR1 |= VAR10;
        if (VAR5 & (1 << 24))
            VAR1 |= VAR11;
        if (VAR1 == 0)
            goto VAR9;
        return VAR1;
    }
    else if (VAR3 == 0x69727943 && VAR5 == 0x736e4978 && VAR4 == 0x64616574)
    {
        if (VAR2 != 2)
            goto VAR9;
        FUN3(0x80000001, VAR2, VAR3, VAR4, VAR5);
        if ((VAR2 & 0x00800000) == 0)
            return 0;
        VAR1 = VAR10;
        if (VAR2 & 0x01000000)
            VAR1 |= VAR11;
        return VAR1;
    }
    else if (VAR3 == 0x756e6547 && VAR5 == 0x54656e69 && VAR4 == 0x3638784d)
    {
        FUN3(0x80000000, VAR2, VAR3, VAR4, VAR5);
        if ((unsigned)VAR2 < 0x80000001)
            return 0;
        FUN3(0x80000001, VAR2, VAR3, VAR4, VAR5);
        if ((VAR5 & 0x00800000) == 0)
            return 0;
        return VAR10;
    }
    else
    {
        return 0;
    }
}