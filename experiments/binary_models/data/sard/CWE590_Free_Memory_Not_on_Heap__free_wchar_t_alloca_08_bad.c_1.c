#VAR1 ""
#VAR1 <VAR2.VAR3>
int FUN1()
{
    return 1;
}
int FUN2()
{
    return 0;
}
void FUN3()
{
    wchar_t * VAR4;
    VAR4 = NULL; 
    if(FUN1())
    {
        {
            wchar_t * VAR5 = (wchar_t *)FUN4(100*sizeof(wchar_t));
            wmemset(VAR5, VAR6'', 100-1); 
            VAR5[100-1] = VAR6''; 
            VAR4 = VAR5;
        }
    }
    FUN5(VAR4);
    free(VAR4);
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN6(NULL) );
    FUN3();
    return 0;
}