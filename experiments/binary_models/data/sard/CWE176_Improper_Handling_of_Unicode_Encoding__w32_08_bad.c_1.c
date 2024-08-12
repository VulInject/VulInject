#VAR1 ""
#VAR1 <VAR2.VAR3>
#VAR1 <VAR4.VAR3>
#VAR1 <VAR5.VAR3>
#VAR1 <VAR6.VAR3>
#VAR7 FUN1( VAR8, "" )
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
    wchar_t * VAR9;
    wchar_t VAR10[100];
    VAR9 = VAR10;
    if(FUN2())
    {
        wcscpy(VAR9, VAR11"");
    }
    if(FUN2())
    {
        {
            char VAR12[10] = "";
            int VAR13;
            VAR13 = FUN5(VAR14, VAR15, VAR9, -1, VAR12, 0, 0, 0);
            FUN5(VAR14, VAR15, VAR9, -1, VAR12, VAR13 , 0, 0);
        }
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN6(NULL) );
    FUN4();
    return 0;
}