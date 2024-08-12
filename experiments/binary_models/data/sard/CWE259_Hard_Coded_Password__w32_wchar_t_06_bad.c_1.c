#VAR1 ""
#VAR1 <VAR2.VAR3>
#define PASSWORD VAR4""
#VAR1 <VAR5.VAR3>
#VAR6 FUN1(VAR7, "")
static const int VAR8 = 5;
void FUN2()
{
    wchar_t * VAR9;
    wchar_t VAR10[100] = VAR4"";
    VAR9 = VAR10;
    if(VAR8==5)
    {
        wcscpy(VAR9, VAR11);
    }
    {
        HANDLE VAR12;
        wchar_t * VAR13 = VAR4"";
        wchar_t * VAR14 = VAR4"";
        if (FUN3(
                    VAR13,
                    VAR14,
                    VAR9,
                    VAR15,
                    VAR16,
                    &VAR12) != 0)
        {
            FUN4(VAR12);
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