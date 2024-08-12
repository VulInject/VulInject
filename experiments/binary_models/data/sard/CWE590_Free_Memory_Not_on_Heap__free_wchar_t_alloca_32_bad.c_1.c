#VAR1 ""
#VAR1 <VAR2.VAR3>
void FUN1()
{
    wchar_t * VAR4;
    wchar_t * *VAR5 = &VAR4;
    wchar_t * *VAR6 = &VAR4;
    VAR4 = NULL; 
    {
        wchar_t * VAR4 = *VAR5;
        {
            wchar_t * VAR7 = (wchar_t *)FUN2(100*sizeof(wchar_t));
            wmemset(VAR7, VAR8'', 100-1); 
            VAR7[100-1] = VAR8''; 
            VAR4 = VAR7;
        }
        *VAR5 = VAR4;
    }
    {
        wchar_t * VAR4 = *VAR6;
        FUN3(VAR4);
        free(VAR4);
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN4(NULL) );
    FUN1();
    return 0;
}