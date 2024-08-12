#VAR1 ""
#VAR1 <VAR2.VAR3>
#VAR1 <VAR4.VAR3>
#VAR5 FUN1(VAR6, "")
#define VAR7 "" 
void FUN2()
{
    if(VAR8==5)
    {
        {
            BYTE VAR9[20] = {0xfb, 0x50, 0xe5, 0x8d, 0xc5, 0x4b, 0xdd, 0xe0, 0x26, 0x2b, 0x98, 0x49, 0x73, 0xfb, 0x4c, 0xf6};
            DWORD VAR10 = strlen((char *)VAR9);
            HCRYPTPROV VAR11 = 0;
            HCRYPTHASH VAR12 = 0;
            HCRYPTKEY VAR13 = 0;
            char VAR14[100] = VAR7;
            do
            {
                if(!FUN3(&VAR11, NULL, VAR15, VAR16, 0))
                {
                    break;
                }
                if(!FUN4(VAR11, VAR17, 0, 0, &VAR12))
                {
                    break;
                }
                if(!FUN5(VAR12, (VAR18*)VAR14, strlen(VAR14), 0))
                {
                    break;
                }
                if(!FUN6(VAR11, VAR19, VAR12, 0, &VAR13))
                {
                    break;
                }
                if(!FUN7(VAR13, 0, 1, 0, (VAR18 *)VAR9, &VAR10))
                {
                    break;
                }
                VAR9[VAR10] = '';
                if(system((char*)VAR9) <= 0)
                {
                    FUN8(1);
                }
            }
            while (0);
            if (VAR13)
            {
                FUN9(VAR13);
            }
            if (VAR12)
            {
                FUN10(VAR12);
            }
            if (VAR11)
            {
                FUN11(VAR11, 0);
            }
        }
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN12(NULL) );
    FUN2();
    return 0;
}