#VAR1 ""
#VAR1 <VAR2.VAR3>
void FUN1()
{
    goto VAR4;
VAR4:
    {
        wchar_t VAR5[150], VAR6[100];
        wmemset(VAR5, VAR7'', 149);
        VAR5[149] = VAR7'';
        wcsncpy(VAR6, VAR5, 99);
        FUN2(VAR6);
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN3(NULL) );
    FUN1();
    return 0;
}