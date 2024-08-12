#VAR1 ""
#VAR1 <VAR2.VAR3>
#define VAR4 ""
#define SNPRINTF _snprintf
#define SNPRINTF snprintf
void FUN1()
{
    switch(6)
    {
    case 6:
    {
        char VAR5[100] = "";
        char * VAR6 = VAR5;
        FUN2(VAR6,100-strlen(VAR4)-1, "", VAR4);
    }
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