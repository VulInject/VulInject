#VAR1 ""
#VAR1 <VAR2.VAR3>
#define SRC_STRING VAR4""
void FUN1()
{
    wchar_t * VAR5;
    wchar_t VAR6[10];
    wchar_t VAR7[10+1];
    switch(6)
    {
    case 6:
        VAR5 = VAR6;
        VAR5[0] = VAR4''; 
        break;
    default:
        break;
    }
    {
        wchar_t VAR8[10+1] = VAR9;
        memmove(VAR5, VAR8, (wcslen(VAR8) + 1) * sizeof(wchar_t));
        FUN2(VAR5);
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN3(NULL) );
    FUN1();
    return 0;
}