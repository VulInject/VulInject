#VAR1 ""
#VAR1 <VAR2.VAR3>
void FUN1()
{
    wchar_t * VAR4;
    VAR4 = NULL; 
    if(FUN2())
    {
        {
            wchar_t * VAR5 = (wchar_t *)FUN3(100*sizeof(wchar_t));
            wmemset(VAR5, VAR6'', 100-1); 
            VAR5[100-1] = VAR6''; 
            VAR4 = VAR5;
        }
    }
    else
    {
        {
            wchar_t * VAR5 = (wchar_t *)malloc(100*sizeof(wchar_t));
            if (VAR5 == NULL)
            {
                FUN4(1);
            }
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
    FUN1();
    return 0;
}