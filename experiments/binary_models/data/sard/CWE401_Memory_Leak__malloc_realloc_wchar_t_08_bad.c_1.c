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
    if(FUN1())
    {
        {
            wchar_t * VAR4 = (wchar_t *)malloc(100*sizeof(wchar_t));
            if (VAR4 == NULL) {FUN4(-1);}
            wcscpy(VAR4, VAR5"");
            FUN5(VAR4);
            VAR4 = (wchar_t *)realloc(VAR4, (130000)*sizeof(wchar_t));
            if (VAR4 != NULL)
            {
                wcscpy(VAR4, VAR5"");
                FUN5(VAR4);
                free(VAR4);
            }
        }
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN6(NULL) );
    FUN3();
    return 0;
}