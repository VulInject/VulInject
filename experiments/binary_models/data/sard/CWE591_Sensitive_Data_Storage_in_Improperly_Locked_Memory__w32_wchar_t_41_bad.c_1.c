#VAR1 ""
#VAR1 <VAR2.VAR3>
#VAR1 <VAR4.VAR3>
#VAR5 FUN1(VAR6, "")
void FUN2(wchar_t * VAR7)
{
    {
        HANDLE VAR8;
        wchar_t * VAR9 = VAR10"";
        wchar_t * VAR11 = VAR10"";
        if (FUN3(
                    VAR9,
                    VAR11,
                    VAR7,
                    VAR12,
                    VAR13,
                    &VAR8) != 0)
        {
            FUN4(VAR8);
        }
        else
        {
        }
        free(VAR7);
    }
}
void FUN5()
{
    wchar_t * VAR7;
    VAR7 = VAR10"";
    VAR7 = (wchar_t *)malloc(100*sizeof(wchar_t));
    if (VAR7 == NULL)
    {
        FUN6(1);
    }
    wcscpy(VAR7, VAR10"");
    FUN2(VAR7);
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN7(NULL) );
    FUN5();
    return 0;
}