#VAR1 ""
#VAR1 <VAR2.VAR3>
#VAR1 <VAR4.VAR3>
#VAR5 FUN1(VAR6, "")
int VAR7 = 5;
void FUN2()
{
    wchar_t * VAR8;
    VAR8 = VAR9"";
    if(VAR7==5)
    {
        VAR8 = (wchar_t *)malloc(100*sizeof(wchar_t));
        if (VAR8 == NULL)
        {
            FUN3(1);
        }
        wcscpy(VAR8, VAR9"");
    }
    {
        HANDLE VAR10;
        wchar_t * VAR11 = VAR9"";
        wchar_t * VAR12 = VAR9"";
        if (FUN4(
                    VAR11,
                    VAR12,
                    VAR8,
                    VAR13,
                    VAR14,
                    &VAR10) != 0)
        {
            FUN5(VAR10);
        }
        else
        {
        }
        free(VAR8);
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN6(NULL) );
    FUN2();
    return 0;
}