#VAR1 ""
#VAR1 <VAR2.VAR3>
void FUN1()
{
    wchar_t * VAR4;
    wchar_t VAR5[50];
    wchar_t VAR6[100];
    if(VAR7==5)
    {
        VAR4 = VAR5;
        VAR4[0] = VAR8''; 
    }
    {
        size_t VAR9;
        wchar_t VAR10[100];
        wmemset(VAR10, VAR8'', 100-1); 
        VAR10[100-1] = VAR8''; 
        for (VAR9 = 0; VAR9 < 100; VAR9++)
        {
            VAR4[VAR9] = VAR10[VAR9];
        }
        VAR4[100-1] = VAR8''; 
        FUN2(VAR4);
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN3(NULL) );
    FUN1();
    return 0;
}