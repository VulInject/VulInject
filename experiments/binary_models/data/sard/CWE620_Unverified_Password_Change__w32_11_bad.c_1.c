#VAR1 ""
#VAR1 <VAR2.VAR3>
#VAR1 <VAR4.VAR3>
#VAR5 FUN1(VAR6, "")
#define USERNAME VAR7""
void FUN2()
{
    if(FUN3())
    {
        {
            wchar_t VAR8[256];
            USER_INFO_1003 VAR9;
            NET_API_STATUS VAR10;
            VAR9.VAR11 = VAR8;
            FUN4(VAR7"");
            if (FUN5(stdin, VAR7"", VAR9.VAR11) != 1)
            {
                VAR9.VAR11[0] = VAR7'';
            }
            VAR10 = FUN6(NULL, VAR12, 1003, (VAR13)&VAR9, NULL);
            if(VAR10 == VAR14)
            {
                FUN4(VAR7"");
            }
            else
            {
                FUN7(VAR7"", VAR10, VAR10);
            }
        }
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN8(NULL) );
    FUN2();
    return 0;
}