#VAR1 ""
#VAR1 <VAR2.VAR3>
void FUN1(wchar_t * VAR4)
{
    {
        wchar_t VAR5[100];
        wmemset(VAR5, VAR6'', 100-1); 
        VAR5[100-1] = VAR6''; 
        memmove(VAR4, VAR5, 100*sizeof(wchar_t));
        VAR4[100-1] = VAR6'';
        FUN2(VAR4);
    }
}
void FUN3()
{
    wchar_t * VAR4;
    void (*VAR7) (wchar_t *) = VAR8;
    VAR4 = NULL;
    {
        wchar_t * VAR9 = (wchar_t *)malloc(100*sizeof(wchar_t));
        if (VAR9 == NULL) {FUN4(-1);}
        wmemset(VAR9, VAR6'', 100-1);
        VAR9[100-1] = VAR6'';
        VAR4 = VAR9 - 8;
    }
    FUN5(VAR4);
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN6(NULL) );
    FUN3();
    return 0;
}