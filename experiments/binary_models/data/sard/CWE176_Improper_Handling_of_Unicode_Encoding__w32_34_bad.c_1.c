#VAR1 ""
#VAR1 <VAR2.VAR3>
#VAR1 <VAR4.VAR3>
#VAR1 <VAR5.VAR3>
#VAR1 <VAR6.VAR3>
#VAR7 FUN1( VAR8, "" )
typedef union
{
    wchar_t * VAR9;
    wchar_t * VAR10;
} VAR11;
void FUN2()
{
    wchar_t * VAR12;
    CWE176_Improper_Handling_of_Unicode_Encoding__w32_34_unionType VAR13;
    wchar_t VAR14[100];
    VAR12 = VAR14;
    wcscpy(VAR12, VAR15"");
    VAR13.VAR9 = VAR12;
    {
        wchar_t * VAR12 = VAR13.VAR10;
        {
            char VAR16[10] = "";
            int VAR17;
            VAR17 = FUN3(VAR18, VAR19, VAR12, -1, VAR16, 0, 0, 0);
            FUN3(VAR18, VAR19, VAR12, -1, VAR16, VAR17 , 0, 0);
        }
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN4(NULL) );
    FUN2();
    return 0;
}