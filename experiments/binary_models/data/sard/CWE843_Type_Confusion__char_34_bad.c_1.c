#VAR1 ""
typedef union
{
    void * VAR2;
    void * VAR3;
} VAR4;
void FUN1()
{
    void * VAR5;
    CWE843_Type_Confusion__char_34_unionType VAR6;
    VAR5 = NULL;
    {
        char VAR7 = '';
        VAR5 = &VAR7;
    }
    VAR6.VAR2 = VAR5;
    {
        void * VAR5 = VAR6.VAR3;
        FUN2(*((int*)VAR5));
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN3(NULL) );
    FUN1();
    return 0;
}