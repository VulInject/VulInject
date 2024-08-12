#VAR1 ""
#VAR1 <VAR2.VAR3>
#define PASSWORD VAR4""
#VAR1 <VAR5.VAR3>
#VAR6 FUN1(VAR7, "")
void FUN2(wchar_t * VAR8)
{
    {
        HANDLE VAR9;
        wchar_t * VAR10 = VAR4"";
        wchar_t * VAR11 = VAR4"";
        if (FUN3(
                    VAR10,
                    VAR11,
                    VAR8,
                    VAR12,
                    VAR13,
                    &VAR9) != 0)
        {
            FUN4(VAR9);
        }
        else
        {
        }
    }
}
void FUN5()
{
    wchar_t * VAR8;
    wchar_t VAR14[100] = VAR4"";
    VAR8 = VAR14;
    wcscpy(VAR8, VAR15);
    FUN2(VAR8);
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN6(NULL) );
    FUN5();
    return 0;
}