#VAR1 ""
#VAR1 <VAR2.VAR3>
#define SRC_STR VAR4""
typedef struct VAR5
{
    wchar_t VAR6[16];
    void * VAR7;
    void * VAR8;
} VAR9;
void FUN1()
{
    switch(6)
    {
    case 6:
    {
        charVoid VAR10;
        VAR10.VAR7 = (void *)VAR11;
        FUN2((wchar_t *)VAR10.VAR7);
        memmove(VAR10.VAR6, VAR11, sizeof(VAR10));
        VAR10.VAR6[(sizeof(VAR10.VAR6)/sizeof(wchar_t))-1] = VAR4''; 
        FUN2((wchar_t *)VAR10.VAR6);
        FUN2((wchar_t *)VAR10.VAR7);
    }
    break;
    default:
        break;
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN3(NULL) );
    FUN1();
    return 0;
}