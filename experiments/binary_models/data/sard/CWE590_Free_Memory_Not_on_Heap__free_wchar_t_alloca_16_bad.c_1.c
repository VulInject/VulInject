#VAR1 ""
#VAR1 <VAR2.VAR3>
void FUN1()
{
    wchar_t * VAR4;
    VAR4 = NULL; 
    while(1)
    {
        {
            wchar_t * VAR5 = (wchar_t *)FUN2(100*sizeof(wchar_t));
            wmemset(VAR5, VAR6'', 100-1); 
            VAR5[100-1] = VAR6''; 
            VAR4 = VAR5;
        }
        break;
    }
    FUN3(VAR4);
    free(VAR4);
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN4(NULL) );
    FUN1();
    return 0;
}