#VAR1 ""
#VAR1 ""
#VAR2 FUN1(VAR3, "")
#VAR2 FUN1(VAR3, "")
static const int VAR4 = 1; 
void FUN2()
{
    if(VAR4)
    {
        {
                        HDC VAR5 = NULL;
            HDC VAR6 = NULL;
            HBITMAP VAR7 = NULL;
            HGDIOBJ VAR8 = NULL;
            BITMAP VAR9;
            RECT VAR10;
            BITMAPFILEHEADER   VAR11;
            BITMAPINFOHEADER   VAR12;
            DWORD VAR13;
            HANDLE VAR14 = NULL;
            char *VAR15 = NULL;
            HANDLE VAR16 = VAR17;
            DWORD VAR18;
            DWORD VAR19;
            HWND VAR20 = FUN3();
            do
            {
                VAR5 = FUN4(VAR20);
                if (VAR5 == NULL)
                {
                    break;
                }
                VAR6 = FUN5(VAR5);
                if (VAR6 == NULL)
                {
                    break;
                }
                if (FUN6(VAR20, &VAR10) == 0)
                {
                    break;
                }
                VAR7 = FUN7(VAR5, VAR10.VAR21-VAR10.VAR22, VAR10.VAR23-VAR10.VAR24);
                if (VAR7 == NULL)
                {
                    break;
                }
                VAR8 = FUN8(VAR6,VAR7);
                if (VAR8 == NULL || VAR8 == VAR25)
                {
                    break;
                }
                if (FUN9(VAR6,
                           0,0,
                           VAR10.VAR21-VAR10.VAR22, VAR10.VAR23-VAR10.VAR24,
                           VAR5,
                           0,0,
                           VAR26) == 0)
                {
                    break;
                }
                if (FUN10(VAR7,sizeof(VAR27),&VAR9) == 0)
                {
                    break;
                }
                VAR12.VAR28 = sizeof(VAR29);
                VAR12.VAR30 = VAR9.VAR31;
                VAR12.VAR32 = VAR9.VAR33;
                VAR12.VAR34 = 1;
                VAR12.VAR35 = 32;
                VAR12.VAR36 = VAR37;
                VAR12.VAR38 = 0;
                VAR12.VAR39 = 0;
                VAR12.VAR40 = 0;
                VAR12.VAR41 = 0;
                VAR12.VAR42 = 0;
                VAR13 = ((VAR9.VAR31 * VAR12.VAR35 + 31) / 32) * 4 * VAR9.VAR33;
                VAR14 = FUN11(VAR43,VAR13);
                if (VAR14 == NULL)
                {
                    break;
                }
                VAR15 = (char *)FUN12(VAR14);
                if (VAR15 == NULL)
                {
                    break;
                }
                if (FUN13(VAR5, VAR7, 0,
                              (VAR44)VAR9.VAR33,
                              VAR15,
                              (VAR45 *)&VAR12, VAR46) == 0)
                {
                    break;
                }
                VAR16 = FUN14(FUN15(""),
                                   VAR47,
                                   0,
                                   NULL,
                                   VAR48,
                                   VAR49, NULL);
                if (VAR16 == VAR17)
                {
                    break;
                }
                VAR18 = VAR13 + sizeof(VAR50) + sizeof(VAR29);
                VAR11.VAR51 = (VAR52)sizeof(VAR50) + (VAR52)sizeof(VAR29);
                VAR11.VAR53 = VAR18;
                VAR11.VAR54 = 0x4D42; 
                VAR19 = 0;
                if (FUN16(VAR16, (VAR55)&VAR11, sizeof(VAR50), &VAR19, NULL) == 0)
                {
                    break;
                }
                if (FUN16(VAR16, (VAR55)&VAR12, sizeof(VAR29), &VAR19, NULL) == 0)
                {
                    break;
                }
                if (FUN16(VAR16, (VAR55)VAR15, VAR13, &VAR19, NULL) == 0)
                {
                    break;
                }
            }
            while (0);
            if (VAR14 != NULL)
            {
                FUN17(VAR14);
                FUN18(VAR14);
            }
            if (VAR16 != VAR17)
            {
                FUN19(VAR16);
            }
            if (VAR7 != NULL)
            {
                FUN20(VAR7);
            }
            if (VAR6 != NULL)
            {
                FUN20(VAR6);
            }
            if (VAR5 != NULL)
            {
                FUN21(VAR20,VAR5);
            }
        }
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN22(NULL) );
    FUN2();
    return 0;
}