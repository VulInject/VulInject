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
            size_t VAR10;
            wchar_t VAR11[100];
            wmemset(VAR11, VAR9'', 100-1); 
            VAR11[100-1] = VAR9''; 
            for (VAR10 = 0; VAR10 < 100; VAR10++)
            {
                VAR4[VAR10] = VAR11[VAR10];
            }
            VAR4[100-1] = VAR9''; 
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