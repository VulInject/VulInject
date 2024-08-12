#VAR1 ""
#VAR1 <VAR2.VAR3>
#VAR1 <VAR4.VAR3>
#VAR5 FUN1(VAR6, "")
#define USERNAME VAR7""
void FUN2()
{
    if(VAR8)
    {
        {
            wchar_t VAR9[256];
            USER_INFO_1003 VAR10;
            NET_API_STATUS VAR11;
            VAR10.VAR12 = VAR9;
            FUN3(VAR7"");
            if (FUN4(stdin, VAR7"", VAR10.VAR12) != 1)
            {
                VAR10.VAR12[0] = VAR7'';
            }
            VAR11 = FUN5(NULL, VAR13, 1003, (VAR14)&VAR10, NULL);
            if(VAR11 == VAR15)
            {
                FUN3(VAR7"");
            }
            else
            {
                FUN6(VAR7"", VAR11, VAR11);
            }
        }
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN7(NULL) );
    FUN2();
    return 0;
}