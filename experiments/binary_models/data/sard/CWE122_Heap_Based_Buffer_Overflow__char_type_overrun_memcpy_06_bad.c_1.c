#VAR1 ""
#VAR1 <VAR2.VAR3>
#define VAR4 ""
typedef struct VAR5
{
    char VAR6[16];
    void * VAR7;
    void * VAR8;
} VAR9;
static const int VAR10 = 5;
void FUN1()
{
    if(VAR10==5)
    {
        {
            VAR9 * VAR11 = (VAR9 *)malloc(sizeof(VAR9));
            if (VAR11 == NULL) {FUN2(-1);}
            VAR11->VAR7 = (void *)VAR4;
            FUN3((char *)VAR11->VAR7);
            memcpy(VAR11->VAR6, VAR4, sizeof(*VAR11));
            VAR11->VAR6[(sizeof(VAR11->VAR6)/sizeof(char))-1] = ''; 
            FUN3((char *)VAR11->VAR6);
            FUN3((char *)VAR11->VAR7);
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