#VAR1 ""
#VAR1 <VAR2.VAR3>
#define PASSWORD VAR4""
#VAR1 <VAR5.VAR3>
#VAR6 FUN1(VAR7, "")
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
    wchar_t * VAR8;
    wchar_t VAR9[100] = VAR4"";
    VAR8 = VAR9;
    if(FUN2())
    {
        wcscpy(VAR8, VAR10);
    }
    {
        HANDLE VAR11;
        wchar_t * VAR12 = VAR4"";
        wchar_t * VAR13 = VAR4"";
        if (FUN5(
                    VAR12,
                    VAR13,
                    VAR8,
                    VAR14,
                    VAR15,
                    &VAR11) != 0)
        {
            FUN6(VAR11);
        }
        else
        {
        }
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN7(NULL) );
    FUN4();
    return 0;
}