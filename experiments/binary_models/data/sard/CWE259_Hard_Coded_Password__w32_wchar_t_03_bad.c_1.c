#VAR1 ""
#VAR1 <VAR2.VAR3>
#define PASSWORD VAR4""
#VAR1 <VAR5.VAR3>
#VAR6 FUN1(VAR7, "")
void FUN2()
{
    wchar_t * VAR8;
    wchar_t VAR9[100] = VAR4"";
    VAR8 = VAR9;
    if(5==5)
    {
        wcscpy(VAR8, VAR10);
    }
    {
        HANDLE VAR11;
        wchar_t * VAR12 = VAR4"";
        wchar_t * VAR13 = VAR4"";
        if (FUN3(
                    VAR12,
                    VAR13,
                    VAR8,
                    VAR14,
                    VAR15,
                    &VAR11) != 0)
        {
            FUN4(VAR11);
        }
        else
        {
        }
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN5(NULL) );
    FUN2();
    return 0;
}