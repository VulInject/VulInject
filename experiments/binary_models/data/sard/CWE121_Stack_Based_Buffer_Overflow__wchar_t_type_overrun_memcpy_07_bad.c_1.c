#VAR1 ""
#VAR1 <VAR2.VAR3>
#define SRC_STR VAR4""
typedef struct VAR5
{
    wchar_t VAR6[16];
    void * VAR7;
    void * VAR8;
} VAR9;
int VAR10 = 5;
void FUN1()
{
    if(VAR10==5)
    {
        {
            charVoid VAR11;
            VAR11.VAR7 = (void *)VAR12;
            FUN2((wchar_t *)VAR11.VAR7);
            memcpy(VAR11.VAR6, VAR12, sizeof(VAR11));
            VAR11.VAR6[(sizeof(VAR11.VAR6)/sizeof(wchar_t))-1] = VAR4''; 
            FUN2((wchar_t *)VAR11.VAR6);
            FUN2((wchar_t *)VAR11.VAR7);
        }
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN3(NULL) );
    FUN1();
    return 0;
}