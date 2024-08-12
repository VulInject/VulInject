#VAR1 ""
#VAR1 <VAR2.VAR3>
void FUN1()
{
    wchar_t * VAR4;
    wchar_t VAR5[100];
    wmemset(VAR5, VAR6'', 100-1);
    VAR5[100-1] = VAR6'';
    VAR4 = VAR5 - 8;
    {
        wchar_t * VAR7 = VAR4;
        wchar_t * VAR4 = VAR7;
        {
            wchar_t VAR8[100];
            wmemset(VAR8, VAR6'', 100-1); 
            VAR8[100-1] = VAR6''; 
            wcscpy(VAR4, VAR8);
            FUN2(VAR4);
        }
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN3(NULL) );
    FUN1();
    return 0;
}