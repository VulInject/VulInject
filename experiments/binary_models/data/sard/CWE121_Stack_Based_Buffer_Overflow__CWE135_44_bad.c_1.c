#VAR1 ""
#VAR1 <VAR2.VAR3>
#define WIDE_STRING VAR4""
#define VAR5 ""
void FUN1(void * VAR6)
{
    {
        size_t VAR7 = strlen((char *)VAR6);
        void * VAR8 = (void *)FUN2((VAR7+1) * sizeof(wchar_t));
        (void)wcscpy(VAR8, VAR6);
        FUN3((char *)VAR8);
    }
}
void FUN4()
{
    void * VAR6;
    void (*VAR9) (void *) = VAR10;
    VAR6 = NULL;
    VAR6 = (void *)VAR11;
    FUN5(VAR6);
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN6(NULL) );
    FUN4();
    return 0;
}