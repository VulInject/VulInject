#VAR1 ""
#VAR1 <VAR2.VAR3>
#VAR1 <VAR4.VAR3>
#VAR1 <VAR5.VAR3>
#VAR1 <VAR6.VAR3>
#VAR7 FUN1( VAR8, "" )
void FUN2()
{
    wchar_t * VAR9;
    wchar_t VAR10[100];
    VAR9 = VAR10;
    goto VAR11;
VAR11:
    wcscpy(VAR9, VAR12"");
    goto VAR13;
VAR13:
    {
        char VAR14[10] = "";
        int VAR15;
        VAR15 = FUN3(VAR16, VAR17, VAR9, -1, VAR14, 0, 0, 0);
        FUN3(VAR16, VAR17, VAR9, -1, VAR14, VAR15 , 0, 0);
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN4(NULL) );
    FUN2();
    return 0;
}