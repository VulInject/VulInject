#VAR1 ""
#VAR1 ""
#VAR2 FUN1(VAR3, "")
#VAR2 FUN1(VAR3, "")
int FUN2()
{
    return 1;
}
void FUN3()
{
    if(FUN2())
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
            HWND VAR19 = FUN4();
            do
            {
                VAR4 = FUN5(VAR19);
                if (VAR4 == NULL)
                {
                    break;
                }
                VAR5 = FUN6(VAR4);
                if (VAR5 == NULL)
                {
                    break;
                }
                if (FUN7(VAR19, &VAR9) == 0)
                {
                    break;
                }
                VAR6 = FUN8(VAR4, VAR9.VAR20-VAR9.VAR21, VAR9.VAR22-VAR9.VAR23);
                if (VAR6 == NULL)
                {
                    break;
                }
                VAR7 = FUN9(VAR5,VAR6);
                if (VAR7 == NULL || VAR7 == VAR24)
                {
                    break;
                }
                if (FUN10(VAR5,
                           0,0,
                           VAR9.VAR20-VAR9.VAR21, VAR9.VAR22-VAR9.VAR23,
                           VAR4,
                           0,0,
                           VAR25) == 0)
                {
                    break;
                }
                if (FUN11(VAR6,sizeof(VAR26),&VAR8) == 0)
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
                VAR13 = FUN12(VAR42,VAR12);
                if (VAR13 == NULL)
                {
                    break;
                }
                VAR14 = (char *)FUN13(VAR13);
                if (VAR14 == NULL)
                {
                    break;
                }
                if (FUN14(VAR4, VAR6, 0,
                              (VAR43)VAR8.VAR32,
                              VAR14,
                              (VAR44 *)&VAR11, VAR45) == 0)
                {
                    break;
                }
                VAR15 = FUN15(FUN16(""),
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
                if (FUN17(VAR15, (VAR54)&VAR10, sizeof(VAR49), &VAR18, NULL) == 0)
                {
                    break;
                }
                if (FUN17(VAR15, (VAR54)&VAR11, sizeof(VAR28), &VAR18, NULL) == 0)
                {
                    break;
                }
                if (FUN17(VAR15, (VAR54)VAR14, VAR12, &VAR18, NULL) == 0)
                {
                    break;
                }
            }
            while (0);
            if (VAR13 != NULL)
            {
                FUN18(VAR13);
                FUN19(VAR13);
            }
            if (VAR15 != VAR16)
            {
                FUN20(VAR15);
            }
            if (VAR6 != NULL)
            {
                FUN21(VAR6);
            }
            if (VAR5 != NULL)
            {
                FUN21(VAR5);
            }
            if (VAR4 != NULL)
            {
                FUN22(VAR19,VAR4);
            }
        }
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN23(NULL) );
    FUN3();
    return 0;
}