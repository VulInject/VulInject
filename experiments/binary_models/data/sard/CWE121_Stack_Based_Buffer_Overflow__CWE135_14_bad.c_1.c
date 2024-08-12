#VAR1 ""
#VAR1 <VAR2.VAR3>
#define WIDE_STRING VAR4""
#define VAR5 ""
void FUN1()
{
    void * VAR6;
    VAR6 = NULL;
    if(VAR7==5)
    {
        VAR6 = (void *)VAR8;
    }
    if(VAR7==5)
    {
        {
            size_t VAR9 = strlen((char *)VAR6);
            void * VAR10 = (void *)FUN2((VAR9+1) * sizeof(wchar_t));
            (void)wcscpy(VAR10, VAR6);
            FUN3((char *)VAR10);
        }
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN4(NULL) );
    FUN1();
    return 0;
}