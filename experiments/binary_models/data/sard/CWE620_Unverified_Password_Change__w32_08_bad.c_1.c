#VAR1 ""
#VAR1 <VAR2.VAR3>
#VAR1 <VAR4.VAR3>
#VAR5 FUN1(VAR6, "")
#define USERNAME VAR7""
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
            wchar_t VAR8[256];
            USER_INFO_1003 VAR9;
            NET_API_STATUS VAR10;
            VAR9.VAR11 = VAR8;
            FUN5(VAR7"");
            if (FUN6(stdin, VAR7"", VAR9.VAR11) != 1)
            {
                VAR9.VAR11[0] = VAR7'';
            }
            VAR10 = FUN7(NULL, VAR12, 1003, (VAR13)&VAR9, NULL);
            if(VAR10 == VAR14)
            {
                FUN5(VAR7"");
            }
            else
            {
                FUN8(VAR7"", VAR10, VAR10);
            }
        }
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN9(NULL) );
    FUN4();
    return 0;
}