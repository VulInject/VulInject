#VAR1 ""
#VAR1 <VAR2.VAR3>
void FUN1()
{
    wchar_t * VAR4;
    VAR4 = NULL;
    {
        wchar_t * VAR5 = (wchar_t *)malloc(100*sizeof(wchar_t));
        if (VAR5 == NULL) {FUN2(-1);}
        wmemset(VAR5, VAR6'', 100-1);
        VAR5[100-1] = VAR6'';
        VAR4 = VAR5 - 8;
    }
    {
        wchar_t * VAR7 = VAR4;
        wchar_t * VAR4 = VAR7;
        {
            size_t VAR8;
            wchar_t VAR9[100];
            wmemset(VAR9, VAR6'', 100-1); 
            VAR9[100-1] = VAR6''; 
            for (VAR8 = 0; VAR8 < 100; VAR8++)
            {
                VAR9[VAR8] = VAR4[VAR8];
            }
            VAR9[100-1] = VAR6'';
            FUN3(VAR9);
        }
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN4(NULL) );
    FUN1();
    return 0;
}