#VAR1 ""
#VAR1 <VAR2.VAR3>
void FUN1(wchar_t * VAR4)
{
    {
        size_t VAR5;
        wchar_t VAR6[100];
        wmemset(VAR6, VAR7'', 100-1); 
        VAR6[100-1] = VAR7''; 
        for (VAR5 = 0; VAR5 < 100; VAR5++)
        {
            VAR4[VAR5] = VAR6[VAR5];
        }
        VAR4[100-1] = VAR7''; 
        FUN2(VAR4);
    }
}
void FUN3()
{
    wchar_t * VAR4;
    wchar_t * VAR8 = (wchar_t *)FUN4(50*sizeof(wchar_t));
    wchar_t * VAR9 = (wchar_t *)FUN4(100*sizeof(wchar_t));
    VAR4 = VAR8;
    VAR4[0] = VAR7''; 
    FUN1(VAR4);
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN5(NULL) );
    FUN3();
    return 0;
}