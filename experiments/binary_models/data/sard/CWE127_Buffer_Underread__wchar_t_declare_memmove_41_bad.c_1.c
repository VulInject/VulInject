#VAR1 ""
#VAR1 <VAR2.VAR3>
void FUN1(wchar_t * VAR4)
{
    {
        wchar_t VAR5[100];
        wmemset(VAR5, VAR6'', 100-1); 
        VAR5[100-1] = VAR6''; 
        memmove(VAR5, VAR4, 100*sizeof(wchar_t));
        VAR5[100-1] = VAR6'';
        FUN2(VAR5);
    }
}
void FUN3()
{
    wchar_t * VAR4;
    wchar_t VAR7[100];
    wmemset(VAR7, VAR6'', 100-1);
    VAR7[100-1] = VAR6'';
    VAR4 = VAR7 - 8;
    FUN1(VAR4);
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN4(NULL) );
    FUN3();
    return 0;
}