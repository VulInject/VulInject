#VAR1 ""
#VAR1 <VAR2.VAR3>
void FUN1()
{
    goto VAR4;
VAR4:
    {
        wchar_t * VAR5 = (wchar_t *)malloc(100*sizeof(wchar_t));
        if (VAR5 == NULL) {FUN2(-1);}
        wcscpy(VAR5, VAR6"");
        FUN3(VAR5);
        VAR5 = (wchar_t *)realloc(VAR5, (130000)*sizeof(wchar_t));
        if (VAR5 != NULL)
        {
            wcscpy(VAR5, VAR6"");
            FUN3(VAR5);
            free(VAR5);
        }
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN4(NULL) );
    FUN1();
    return 0;
}