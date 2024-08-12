#VAR1 ""
#VAR1 <VAR2.VAR3>
#define SRC_STRING VAR4""
void FUN1()
{
    wchar_t * VAR5;
    wchar_t * *VAR6 = &VAR5;
    wchar_t * *VAR7 = &VAR5;
    wchar_t * VAR8 = (wchar_t *)FUN2((10)*sizeof(wchar_t));
    wchar_t * VAR9 = (wchar_t *)FUN2((10+1)*sizeof(wchar_t));
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
            size_t VAR12, VAR13;
            VAR13 = wcslen(VAR10);
            for (VAR12 = 0; VAR12 < VAR13 + 1; VAR12++)
            {
                VAR5[VAR12] = VAR10[VAR12];
            }
            FUN3(VAR5);
        }
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN4(NULL) );
    FUN1();
    return 0;
}