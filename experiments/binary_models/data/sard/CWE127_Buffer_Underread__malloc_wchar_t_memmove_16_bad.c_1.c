#VAR1 ""
#VAR1 <VAR2.VAR3>
void FUN1()
{
    wchar_t * VAR4;
    VAR4 = NULL;
    while(1)
    {
        {
            wchar_t * VAR5 = (wchar_t *)malloc(100*sizeof(wchar_t));
            if (VAR5 == NULL) {FUN2(-1);}
            wmemset(VAR5, VAR6'', 100-1);
            VAR5[100-1] = VAR6'';
            VAR4 = VAR5 - 8;
        }
        break;
    }
    {
        wchar_t VAR7[100];
        wmemset(VAR7, VAR6'', 100-1); 
        VAR7[100-1] = VAR6''; 
        memmove(VAR7, VAR4, 100*sizeof(wchar_t));
        VAR7[100-1] = VAR6'';
        FUN3(VAR7);
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN4(NULL) );
    FUN1();
    return 0;
}