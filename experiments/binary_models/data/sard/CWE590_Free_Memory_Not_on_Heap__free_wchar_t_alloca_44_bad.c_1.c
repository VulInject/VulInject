#VAR1 ""
#VAR1 <VAR2.VAR3>
void FUN1(wchar_t * VAR4)
{
    FUN2(VAR4);
    free(VAR4);
}
void FUN3()
{
    wchar_t * VAR4;
    void (*VAR5) (wchar_t *) = VAR6;
    VAR4 = NULL; 
    {
        wchar_t * VAR7 = (wchar_t *)FUN4(100*sizeof(wchar_t));
        wmemset(VAR7, VAR8'', 100-1); 
        VAR7[100-1] = VAR8''; 
        VAR4 = VAR7;
    }
    FUN5(VAR4);
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN6(NULL) );
    FUN3();
    return 0;
}