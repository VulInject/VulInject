#VAR1 ""
#VAR1 <VAR2.VAR3>
void FUN1()
{
    if(FUN2())
    {
        {
            wchar_t VAR4[150], VAR5[100];
            wmemset(VAR4, VAR6'', 149);
            VAR4[149] = VAR6'';
            memcpy(VAR5, VAR4, 99*sizeof(wchar_t));
            FUN3(VAR5);
        }
    }
    else
    {
        {
            wchar_t VAR4[150], VAR5[100];
            wmemset(VAR4, VAR6'', 149);
            VAR4[149] = VAR6'';
            memcpy(VAR5, VAR4, 99*sizeof(wchar_t));
            VAR5[99] = VAR6''; 
            FUN3(VAR5);
        }
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN4(NULL) );
    FUN1();
    return 0;
}