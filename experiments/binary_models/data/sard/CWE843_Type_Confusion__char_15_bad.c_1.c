#VAR1 ""
void FUN1()
{
    void * VAR2;
    VAR2 = NULL;
    switch(6)
    {
    case 6:
    {
        char VAR3 = '';
        VAR2 = &VAR3;
    }
    break;
    default:
        break;
    }
    FUN2(*((int*)VAR2));
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN3(NULL) );
    FUN1();
    return 0;
}