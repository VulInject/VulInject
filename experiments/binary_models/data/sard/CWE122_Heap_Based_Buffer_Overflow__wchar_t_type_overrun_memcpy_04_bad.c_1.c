#VAR1 ""
#VAR1 <VAR2.VAR3>
#define SRC_STR VAR4""
typedef struct VAR5
{
    wchar_t VAR6[16];
    void * VAR7;
    void * VAR8;
} VAR9;
static const int VAR10 = 1; 
static const int VAR11 = 0; 
void FUN1()
{
    if(VAR10)
    {
        {
            VAR9 * VAR12 = (VAR9 *)malloc(sizeof(VAR9));
            if (VAR12 == NULL) {FUN2(-1);}
            VAR12->VAR7 = (void *)VAR13;
            FUN3((wchar_t *)VAR12->VAR7);
            memcpy(VAR12->VAR6, VAR13, sizeof(*VAR12));
            VAR12->VAR6[(sizeof(VAR12->VAR6)/sizeof(wchar_t))-1] = VAR4''; 
            FUN3((wchar_t *)VAR12->VAR6);
            FUN3((wchar_t *)VAR12->VAR7);
            free(VAR12);
        }
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN4(NULL) );
    FUN1();
    return 0;
}