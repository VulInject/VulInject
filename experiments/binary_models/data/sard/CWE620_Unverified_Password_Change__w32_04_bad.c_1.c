#VAR1 ""
#VAR1 <VAR2.VAR3>
#VAR1 <VAR4.VAR3>
#VAR5 FUN1(VAR6, "")
#define USERNAME VAR7""
static const int VAR8 = 1; 
static const int VAR9 = 0; 
void FUN2()
{
    if(VAR8)
    {
        {
            wchar_t VAR10[256];
            USER_INFO_1003 VAR11;
            NET_API_STATUS VAR12;
            VAR11.VAR13 = VAR10;
            FUN3(VAR7"");
            if (FUN4(stdin, VAR7"", VAR11.VAR13) != 1)
            {
                VAR11.VAR13[0] = VAR7'';
            }
            VAR12 = FUN5(NULL, VAR14, 1003, (VAR15)&VAR11, NULL);
            if(VAR12 == VAR16)
            {
                FUN3(VAR7"");
            }
            else
            {
                FUN6(VAR7"", VAR12, VAR12);
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