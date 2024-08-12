#VAR1 ""
#VAR1 <VAR2.VAR3>
void FUN1()
{
    wchar_t * VAR4;
    wchar_t * *VAR5 = &VAR4;
    wchar_t * *VAR6 = &VAR4;
    wchar_t * VAR7 = (wchar_t *)FUN2(50*sizeof(wchar_t));
    wchar_t * VAR8 = (wchar_t *)FUN2(100*sizeof(wchar_t));
    {
        wchar_t * VAR4 = *VAR5;
        VAR4 = VAR7;
        VAR4[0] = VAR9''; 
        *VAR5 = VAR4;
    }
    {
        wchar_t * VAR4 = *VAR6;
        {
            wchar_t VAR10[100];
            wmemset(VAR10, VAR9'', 100-1); 
            VAR10[100-1] = VAR9''; 
            wcsncat(VAR4, VAR10, 100);
            FUN3(VAR4);
        }
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN4(NULL) );
    FUN1();
    return 0;
}