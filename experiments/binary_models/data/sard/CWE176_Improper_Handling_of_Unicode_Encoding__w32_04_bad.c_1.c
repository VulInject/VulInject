#VAR1 ""
#VAR1 <VAR2.VAR3>
#VAR1 <VAR4.VAR3>
#VAR1 <VAR5.VAR3>
#VAR1 <VAR6.VAR3>
#VAR7 FUN1( VAR8, "" )
static const int VAR9 = 1; 
static const int VAR10 = 0; 
void FUN2()
{
    wchar_t * VAR11;
    wchar_t VAR12[100];
    VAR11 = VAR12;
    if(VAR9)
    {
        wcscpy(VAR11, VAR13"");
    }
    if(VAR9)
    {
        {
            char VAR14[10] = "";
            int VAR15;
            VAR15 = FUN3(VAR16, VAR17, VAR11, -1, VAR14, 0, 0, 0);
            FUN3(VAR16, VAR17, VAR11, -1, VAR14, VAR15 , 0, 0);
        }
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN4(NULL) );
    FUN2();
    return 0;
}