#VAR1 ""
#VAR1 <VAR2.VAR3>
static const int VAR4 = 5;
void FUN1()
{
    wchar_t * VAR5;
    wchar_t VAR6[50];
    wchar_t VAR7[100];
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
        FUN2(VAR5);
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN3(NULL) );
    FUN1();
    return 0;
}