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
    switch(6)
    {
    case 6:
        wcscpy(VAR9, VAR11"");
        break;
    default:
        break;
    }
    switch(7)
    {
    case 7:
    {
        char VAR12[10] = "";
        int VAR13;
        VAR13 = FUN3(VAR14, VAR15, VAR9, -1, VAR12, 0, 0, 0);
        FUN3(VAR14, VAR15, VAR9, -1, VAR12, VAR13 , 0, 0);
    }
    break;
    default:
        break;
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN4(NULL) );
    FUN2();
    return 0;
}