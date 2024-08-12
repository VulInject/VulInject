#VAR1 ""
#VAR1 <VAR2.VAR3>
#VAR1 <VAR4.VAR3>
#VAR5 FUN1(VAR6, "")
#define VAR7 "" 
#define VAR8 ""
void FUN2()
{
    goto VAR9;
VAR9:
    {
        BYTE VAR10[100];
        DWORD VAR11 = strlen(VAR8);
        HCRYPTPROV VAR12 = (VAR13)NULL;
        HCRYPTHASH VAR14 = (VAR15)NULL;
        HCRYPTKEY VAR16 = (VAR17)NULL;
        char VAR18[100] = VAR7;
        do
        {
            memcpy(VAR10, VAR8, VAR11);
            if(!FUN3(&VAR12, NULL, VAR19, VAR20, 0))
            {
                break;
            }
            if(!FUN4(VAR14, (VAR21*)VAR18, strlen(VAR18), 0))
            {
                break;
            }
            if(!FUN5(VAR12, VAR22, VAR14, 0, &VAR16))
            {
                break;
            }
            if(!FUN6(VAR16, 0, 1, 0, VAR10, &VAR11, sizeof(VAR10)))
            {
                break;
            }
        }
        while (0);
        if (VAR16)
        {
            FUN7(VAR16);
        }
        if (VAR14)
        {
            FUN8(VAR14);
        }
        if (VAR12)
        {
            FUN9(VAR12, 0);
        }
        FUN10(VAR10, VAR11);
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN11(NULL) );
    FUN2();
    return 0;
}