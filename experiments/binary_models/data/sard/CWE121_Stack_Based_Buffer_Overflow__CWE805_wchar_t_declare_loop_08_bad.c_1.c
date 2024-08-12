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
    wchar_t * VAR4;
    wchar_t VAR5[50];
    wchar_t VAR6[100];
    if(FUN1())
    {
        VAR4 = VAR5;
        VAR4[0] = VAR7''; 
    }
    {
        size_t VAR8;
        wchar_t VAR9[100];
        wmemset(VAR9, VAR7'', 100-1); 
        VAR9[100-1] = VAR7''; 
        for (VAR8 = 0; VAR8 < 100; VAR8++)
        {
            VAR4[VAR8] = VAR9[VAR8];
        }
        VAR4[100-1] = VAR7''; 
        FUN4(VAR4);
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN5(NULL) );
    FUN3();
    return 0;
}