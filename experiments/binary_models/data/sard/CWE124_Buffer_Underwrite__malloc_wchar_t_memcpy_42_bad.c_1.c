#VAR1 ""
#VAR1 <VAR2.VAR3>
wchar_t * FUN1(wchar_t * VAR4)
{
    {
        wchar_t * VAR5 = (wchar_t *)malloc(100*sizeof(wchar_t));
        if (VAR5 == NULL) {FUN2(-1);}
        wmemset(VAR5, VAR6'', 100-1);
        VAR5[100-1] = VAR6'';
        VAR4 = VAR5 - 8;
    }
    return VAR4;
}
void FUN3()
{
    wchar_t * VAR4;
    VAR4 = NULL;
    VAR4 = FUN1(VAR4);
    {
        wchar_t VAR7[100];
        wmemset(VAR7, VAR6'', 100-1); 
        VAR7[100-1] = VAR6''; 
        memcpy(VAR4, VAR7, 100*sizeof(wchar_t));
        VAR4[100-1] = VAR6'';
        FUN4(VAR4);
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN5(NULL) );
    FUN3();
    return 0;
}