#VAR1 ""
#VAR1 <VAR2.VAR3>
#define WIDE_STRING VAR4""
#define VAR5 ""
void * FUN1(void * VAR6)
{
    VAR6 = (void *)VAR7;
    return VAR6;
}
void FUN2()
{
    void * VAR6;
    VAR6 = NULL;
    VAR6 = FUN1(VAR6);
    {
        size_t VAR8 = strlen((char *)VAR6);
        void * VAR9 = (void *)FUN3((VAR8+1) * sizeof(wchar_t));
        (void)wcscpy(VAR9, VAR6);
        FUN4((char *)VAR9);
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN5(NULL) );
    FUN2();
    return 0;
}