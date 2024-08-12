#VAR1 ""
#VAR1 <VAR2.VAR3>
#define WIDE_STRING VAR4""
#define VAR5 ""
void FUN1()
{
    void * VAR6;
    VAR6 = NULL;
    while(1)
    {
        VAR6 = (void *)VAR7;
        break;
    }
    while(1)
    {
        {
            size_t VAR8 = strlen((char *)VAR6);
            void * VAR9 = (void *)FUN2((VAR8+1) * sizeof(wchar_t));
            (void)wcscpy(VAR9, VAR6);
            FUN3((char *)VAR9);
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