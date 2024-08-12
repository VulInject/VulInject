#VAR1 ""
#VAR1 <VAR2.VAR3>
void FUN1()
{
    wchar_t * VAR4;
    wchar_t * VAR5 = (wchar_t *)FUN2(50*sizeof(wchar_t));
    wchar_t * VAR6 = (wchar_t *)FUN2(100*sizeof(wchar_t));
    goto VAR7;
VAR7:
    VAR4 = VAR5;
    VAR4[0] = VAR8''; 
    {
        wchar_t VAR7[100];
        wmemset(VAR7, VAR8'', 100-1); 
        VAR7[100-1] = VAR8''; 
        memcpy(VAR4, VAR7, 100*sizeof(wchar_t));
        VAR4[100-1] = VAR8''; 
        FUN3(VAR4);
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN4(NULL) );
    FUN1();
    return 0;
}