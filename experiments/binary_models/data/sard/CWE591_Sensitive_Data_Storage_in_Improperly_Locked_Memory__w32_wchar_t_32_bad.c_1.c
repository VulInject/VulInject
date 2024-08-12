#VAR1 ""
#VAR1 <VAR2.VAR3>
#VAR1 <VAR4.VAR3>
#VAR5 FUN1(VAR6, "")
void FUN2()
{
    wchar_t * VAR7;
    wchar_t * *VAR8 = &VAR7;
    wchar_t * *VAR9 = &VAR7;
    VAR7 = VAR10"";
    {
        wchar_t * VAR7 = *VAR8;
        VAR7 = (wchar_t *)malloc(100*sizeof(wchar_t));
        if (VAR7 == NULL)
        {
            FUN3(1);
        }
        wcscpy(VAR7, VAR10"");
        *VAR8 = VAR7;
    }
    {
        wchar_t * VAR7 = *VAR9;
        {
            HANDLE VAR11;
            wchar_t * VAR12 = VAR10"";
            wchar_t * VAR13 = VAR10"";
            if (FUN4(
                        VAR12,
                        VAR13,
                        VAR7,
                        VAR14,
                        VAR15,
                        &VAR11) != 0)
            {
                FUN5(VAR11);
            }
            else
            {
            }
            free(VAR7);
        }
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN6(NULL) );
    FUN2();
    return 0;
}