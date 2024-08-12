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
    if(VAR10)
    {
        {
            VAR9 * VAR11 = (VAR9 *)malloc(sizeof(VAR9));
            if (VAR11 == NULL) {FUN2(-1);}
            VAR11->VAR7 = (void *)VAR12;
            FUN3((wchar_t *)VAR11->VAR7);
            memcpy(VAR11->VAR6, VAR12, sizeof(*VAR11));
            VAR11->VAR6[(sizeof(VAR11->VAR6)/sizeof(wchar_t))-1] = VAR4''; 
            FUN3((wchar_t *)VAR11->VAR6);
            FUN3((wchar_t *)VAR11->VAR7);
            free(VAR11);
        }
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN4(NULL) );
    FUN1();
    return 0;
}