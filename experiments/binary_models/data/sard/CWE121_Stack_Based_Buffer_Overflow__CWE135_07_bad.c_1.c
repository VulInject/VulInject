#VAR1 ""
#VAR1 <VAR2.VAR3>
#define WIDE_STRING VAR4""
#define VAR5 ""
int VAR6 = 5;
void FUN1()
{
    void * VAR7;
    VAR7 = NULL;
    if(VAR6==5)
    {
        VAR7 = (void *)VAR8;
    }
    if(VAR6==5)
    {
        {
            size_t VAR9 = strlen((char *)VAR7);
            void * VAR10 = (void *)FUN2((VAR9+1) * sizeof(wchar_t));
            (void)wcscpy(VAR10, VAR7);
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