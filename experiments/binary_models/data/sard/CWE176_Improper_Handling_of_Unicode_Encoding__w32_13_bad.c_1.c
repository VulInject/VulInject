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
    if(VAR11==5)
    {
        wcscpy(VAR9, VAR12"");
    }
    if(VAR11==5)
    {
        {
            char VAR13[10] = "";
            int VAR14;
            VAR14 = FUN3(VAR15, VAR16, VAR9, -1, VAR13, 0, 0, 0);
            FUN3(VAR15, VAR16, VAR9, -1, VAR13, VAR14 , 0, 0);
        }
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN4(NULL) );
    FUN2();
    return 0;
}