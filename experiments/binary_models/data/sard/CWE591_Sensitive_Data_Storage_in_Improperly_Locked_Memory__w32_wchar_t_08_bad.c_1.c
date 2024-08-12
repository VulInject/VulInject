#VAR1 ""
#VAR1 <VAR2.VAR3>
#VAR1 <VAR4.VAR3>
#VAR5 FUN1(VAR6, "")
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
    wchar_t * VAR7;
    VAR7 = VAR8"";
    if(FUN2())
    {
        VAR7 = (wchar_t *)malloc(100*sizeof(wchar_t));
        if (VAR7 == NULL)
        {
            FUN5(1);
        }
        wcscpy(VAR7, VAR8"");
    }
    {
        HANDLE VAR9;
        wchar_t * VAR10 = VAR8"";
        wchar_t * VAR11 = VAR8"";
        if (FUN6(
                    VAR10,
                    VAR11,
                    VAR7,
                    VAR12,
                    VAR13,
                    &VAR9) != 0)
        {
            FUN7(VAR9);
        }
        else
        {
        }
        free(VAR7);
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN8(NULL) );
    FUN4();
    return 0;
}