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
    while(1)
    {
        {
            VAR9 * VAR10 = (VAR9 *)malloc(sizeof(VAR9));
            if (VAR10 == NULL) {FUN2(-1);}
            VAR10->VAR7 = (void *)VAR11;
            FUN3((wchar_t *)VAR10->VAR7);
            memmove(VAR10->VAR6, VAR11, sizeof(*VAR10));
            VAR10->VAR6[(sizeof(VAR10->VAR6)/sizeof(wchar_t))-1] = VAR4''; 
            FUN3((wchar_t *)VAR10->VAR6);
            FUN3((wchar_t *)VAR10->VAR7);
        }
        break;
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN4(NULL) );
    FUN1();
    return 0;
}