#VAR1 ""
#VAR1 <VAR2.VAR3>
#define SRC_STRING VAR4""
void FUN1()
{
    wchar_t * VAR5;
    wchar_t * *VAR6 = &VAR5;
    wchar_t * *VAR7 = &VAR5;
    wchar_t VAR8[10];
    wchar_t VAR9[10+1];
    {
        wchar_t * VAR5 = *VAR6;
        VAR5 = VAR8;
        VAR5[0] = VAR4''; 
        *VAR6 = VAR5;
    }
    {
        wchar_t * VAR5 = *VAR7;
        {
            wchar_t VAR10[10+1] = VAR11;
            memcpy(VAR5, VAR10, (wcslen(VAR10) + 1) * sizeof(wchar_t));
            FUN2(VAR5);
        }
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN3(NULL) );
    FUN1();
    return 0;
}