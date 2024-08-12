#VAR1 ""
#VAR1 <VAR2.VAR3>
#define WIDE_STRING VAR4""
#define VAR5 ""
static const int VAR6 = 1; 
static const int VAR7 = 0; 
void FUN1()
{
    void * VAR8;
    VAR8 = NULL;
    if(VAR6)
    {
        VAR8 = (void *)VAR9;
    }
    if(VAR6)
    {
        {
            size_t VAR10 = strlen((char *)VAR8);
            void * VAR11 = (void *)FUN2((VAR10+1) * sizeof(wchar_t));
            (void)wcscpy(VAR11, VAR8);
            FUN3((char *)VAR11);
        }
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN4(NULL) );
    FUN1();
    return 0;
}