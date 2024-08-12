#VAR1 ""
#VAR1 <VAR2.VAR3>
void FUN1()
{
    char * VAR4;
    VAR4 = NULL;
    switch(6)
    {
    case 6:
    {
        char VAR5[] = "";
        VAR4 = strdup(VAR5);
        FUN2(VAR4);
    }
    break;
    default:
        break;
    }
    switch(7)
    {
    case 7:
        ; 
        break;
    default:
        break;
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN3(NULL) );
    FUN1();
    return 0;
}