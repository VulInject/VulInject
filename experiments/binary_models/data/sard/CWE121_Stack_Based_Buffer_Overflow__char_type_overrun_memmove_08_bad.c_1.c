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
            charVoid VAR10;
            VAR10.VAR7 = (void *)VAR4;
            FUN4((char *)VAR10.VAR7);
            memmove(VAR10.VAR6, VAR4, sizeof(VAR10));
            VAR10.VAR6[(sizeof(VAR10.VAR6)/sizeof(char))-1] = ''; 
            FUN4((char *)VAR10.VAR6);
            FUN4((char *)VAR10.VAR7);
        }
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN5(NULL) );
    FUN3();
    return 0;
}