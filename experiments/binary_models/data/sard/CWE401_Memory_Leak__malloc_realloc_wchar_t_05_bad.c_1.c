#VAR1 ""
#VAR1 <VAR2.VAR3>
int VAR4 = 1; 
int VAR5 = 0; 
void FUN1()
{
    if(VAR4)
    {
        {
            wchar_t * VAR6 = (wchar_t *)malloc(100*sizeof(wchar_t));
            if (VAR6 == NULL) {FUN2(-1);}
            wcscpy(VAR6, VAR7"");
            FUN3(VAR6);
            VAR6 = (wchar_t *)realloc(VAR6, (130000)*sizeof(wchar_t));
            if (VAR6 != NULL)
            {
                wcscpy(VAR6, VAR7"");
                FUN3(VAR6);
                free(VAR6);
            }
        }
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN4(NULL) );
    FUN1();
    return 0;
}