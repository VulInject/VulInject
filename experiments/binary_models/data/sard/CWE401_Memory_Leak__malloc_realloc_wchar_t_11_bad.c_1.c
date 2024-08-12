#VAR1 ""
#VAR1 <VAR2.VAR3>
void FUN1()
{
    if(FUN2())
    {
        {
            wchar_t * VAR4 = (wchar_t *)malloc(100*sizeof(wchar_t));
            if (VAR4 == NULL) {FUN3(-1);}
            wcscpy(VAR4, VAR5"");
            FUN4(VAR4);
            VAR4 = (wchar_t *)realloc(VAR4, (130000)*sizeof(wchar_t));
            if (VAR4 != NULL)
            {
                wcscpy(VAR4, VAR5"");
                FUN4(VAR4);
                free(VAR4);
            }
        }
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN5(NULL) );
    FUN1();
    return 0;
}