#VAR1 ""
#VAR1 <VAR2.VAR3>
#define VAR4 ""
typedef struct VAR5
{
    char VAR6[16];
    void * VAR7;
    void * VAR8;
} VAR9;
int FUN1()
{
    return 1;
}
int FUN2()
{
    return 0;
}
void FUN3()
{
    if(FUN1())
    {
        {
            VAR9 * VAR10 = (VAR9 *)malloc(sizeof(VAR9));
            if (VAR10 == NULL) {FUN4(-1);}
            VAR10->VAR7 = (void *)VAR4;
            FUN5((char *)VAR10->VAR7);
            memcpy(VAR10->VAR6, VAR4, sizeof(*VAR10));
            VAR10->VAR6[(sizeof(VAR10->VAR6)/sizeof(char))-1] = ''; 
            FUN5((char *)VAR10->VAR6);
            FUN5((char *)VAR10->VAR7);
            free(VAR10);
        }
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN6(NULL) );
    FUN3();
    return 0;
}