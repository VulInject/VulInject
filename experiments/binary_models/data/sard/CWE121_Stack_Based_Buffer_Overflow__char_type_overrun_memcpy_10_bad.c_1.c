#VAR1 ""
#VAR1 <VAR2.VAR3>
#define VAR4 ""
typedef struct VAR5
{
    char VAR6[16];
    void * VAR7;
    void * VAR8;
} VAR9;
void FUN1()
{
    if(VAR10)
    {
        {
            charVoid VAR11;
            VAR11.VAR7 = (void *)VAR4;
            FUN2((char *)VAR11.VAR7);
            memcpy(VAR11.VAR6, VAR4, sizeof(VAR11));
            VAR11.VAR6[(sizeof(VAR11.VAR6)/sizeof(char))-1] = ''; 
            FUN2((char *)VAR11.VAR6);
            FUN2((char *)VAR11.VAR7);
        }
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN3(NULL) );
    FUN1();
    return 0;
}