#VAR1 ""
#VAR1 <VAR2.VAR3>
void FUN1()
{
    wchar_t * VAR4;
    VAR4 = NULL;
    if(VAR5)
    {
        {
            wchar_t * VAR6 = (wchar_t *)malloc(100*sizeof(wchar_t));
            if (VAR6 == NULL) {FUN2(-1);}
            wmemset(VAR6, VAR7'', 100-1);
            VAR6[100-1] = VAR7'';
            VAR4 = VAR6 - 8;
        }
    }
    {
        size_t VAR8;
        wchar_t VAR9[100];
        wmemset(VAR9, VAR7'', 100-1); 
        VAR9[100-1] = VAR7''; 
        for (VAR8 = 0; VAR8 < 100; VAR8++)
        {
            VAR9[VAR8] = VAR4[VAR8];
        }
        VAR9[100-1] = VAR7'';
        FUN3(VAR9);
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN4(NULL) );
    FUN1();
    return 0;
}