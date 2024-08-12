#VAR1 ""
#VAR1 ""
#VAR2 FUN1(VAR3, "")
#VAR2 FUN1(VAR3, "")
void FUN2()
{
    {
                HDC VAR4 = NULL;
        HDC VAR5 = NULL;
        HBITMAP VAR6 = NULL;
        HGDIOBJ VAR7 = NULL;
        BITMAP VAR8;
        RECT VAR9;
        BITMAPFILEHEADER   VAR10;
        BITMAPINFOHEADER   VAR11;
        DWORD VAR12;
        HANDLE VAR13 = NULL;
        char *VAR14 = NULL;
        HANDLE VAR15 = VAR16;
        DWORD VAR17;
        DWORD VAR18;
        HWND VAR19 = FUN3();
        do
        {
            VAR4 = FUN4(VAR19);
            if (VAR4 == NULL)
            {
                break;
            }
            VAR5 = FUN5(VAR4);
            if (VAR5 == NULL)
            {
                break;
            }
            if (FUN6(VAR19, &VAR9) == 0)
            {
                break;
            }
            VAR6 = FUN7(VAR4, VAR9.VAR20-VAR9.VAR21, VAR9.VAR22-VAR9.VAR23);
            if (VAR6 == NULL)
            {
                break;
            }
            VAR7 = FUN8(VAR5,VAR6);
            if (VAR7 == NULL || VAR7 == VAR24)
            {
                break;
            }
            if (FUN9(VAR5,
                       0,0,
                       VAR9.VAR20-VAR9.VAR21, VAR9.VAR22-VAR9.VAR23,
                       VAR4,
                       0,0,
                       VAR25) == 0)
            {
                break;
            }
            if (FUN10(VAR6,sizeof(VAR26),&VAR8) == 0)
            {
                break;
            }
            VAR11.VAR27 = sizeof(VAR28);
            VAR11.VAR29 = VAR8.VAR30;
            VAR11.VAR31 = VAR8.VAR32;
            VAR11.VAR33 = 1;
            VAR11.VAR34 = 32;
            VAR11.VAR35 = VAR36;
            VAR11.VAR37 = 0;
            VAR11.VAR38 = 0;
            VAR11.VAR39 = 0;
            VAR11.VAR40 = 0;
            VAR11.VAR41 = 0;
            VAR12 = ((VAR8.VAR30 * VAR11.VAR34 + 31) / 32) * 4 * VAR8.VAR32;
            VAR13 = FUN11(VAR42,VAR12);
            if (VAR13 == NULL)
            {
                break;
            }
            VAR14 = (char *)FUN12(VAR13);
            if (VAR14 == NULL)
            {
                break;
            }
            if (FUN13(VAR4, VAR6, 0,
                          (VAR43)VAR8.VAR32,
                          VAR14,
                          (VAR44 *)&VAR11, VAR45) == 0)
            {
                break;
            }
            VAR15 = FUN14(FUN15(""),
                               VAR46,
                               0,
                               NULL,
                               VAR47,
                               VAR48, NULL);
            if (VAR15 == VAR16)
            {
                break;
            }
            VAR17 = VAR12 + sizeof(VAR49) + sizeof(VAR28);
            VAR10.VAR50 = (VAR51)sizeof(VAR49) + (VAR51)sizeof(VAR28);
            VAR10.VAR52 = VAR17;
            VAR10.VAR53 = 0x4D42; 
            VAR18 = 0;
            if (FUN16(VAR15, (VAR54)&VAR10, sizeof(VAR49), &VAR18, NULL) == 0)
            {
                break;
            }
            if (FUN16(VAR15, (VAR54)&VAR11, sizeof(VAR28), &VAR18, NULL) == 0)
            {
                break;
            }
            if (FUN16(VAR15, (VAR54)VAR14, VAR12, &VAR18, NULL) == 0)
            {
                break;
            }
        }
        while (0);
        if (VAR13 != NULL)
        {
            FUN17(VAR13);
            FUN18(VAR13);
        }
        if (VAR15 != VAR16)
        {
            FUN19(VAR15);
        }
        if (VAR6 != NULL)
        {
            FUN20(VAR6);
        }
        if (VAR5 != NULL)
        {
            FUN20(VAR5);
        }
        if (VAR4 != NULL)
        {
            FUN21(VAR19,VAR4);
        }
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN22(NULL) );
    FUN2();
    return 0;
}