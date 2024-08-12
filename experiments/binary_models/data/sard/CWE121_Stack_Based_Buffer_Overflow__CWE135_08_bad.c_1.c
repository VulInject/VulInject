#VAR1 ""
#VAR1 <VAR2.VAR3>
#define WIDE_STRING VAR4""
#define VAR5 ""
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
    void * VAR6;
    VAR6 = NULL;
    if(FUN1())
    {
        VAR6 = (void *)VAR7;
    }
    if(FUN1())
    {
        {
            size_t VAR8 = strlen((char *)VAR6);
            void * VAR9 = (void *)FUN4((VAR8+1) * sizeof(wchar_t));
            (void)wcscpy(VAR9, VAR6);
            FUN5((char *)VAR9);
        }
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN6(NULL) );
    FUN3();
    return 0;
}