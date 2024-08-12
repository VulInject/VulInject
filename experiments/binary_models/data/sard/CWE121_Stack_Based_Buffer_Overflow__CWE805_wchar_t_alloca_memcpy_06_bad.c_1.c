#VAR1 ""
#VAR1 <VAR2.VAR3>
static const int VAR4 = 5;
void FUN1()
{
    wchar_t * VAR5;
    wchar_t * VAR6 = (wchar_t *)FUN2(50*sizeof(wchar_t));
    wchar_t * VAR7 = (wchar_t *)FUN2(100*sizeof(wchar_t));
    if(VAR4==5)
    {
        VAR5 = VAR6;
        VAR5[0] = VAR8''; 
    }
    {
        wchar_t VAR9[100];
        wmemset(VAR9, VAR8'', 100-1); 
        VAR9[100-1] = VAR8''; 
        memcpy(VAR5, VAR9, 100*sizeof(wchar_t));
        VAR5[100-1] = VAR8''; 
        FUN3(VAR5);
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN4(NULL) );
    FUN1();
    return 0;
}