#VAR1 ""
#VAR1 <VAR2.VAR3>
#define VAR4 ""
void FUN1()
{
    switch(6)
    {
    case 6:
    {
        char VAR5[100] = "";
        char * VAR6 = VAR5;
        if (sscanf(VAR4, "", VAR6) == 0)
        {
        }
    }
    break;
    default:
        break;
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN2(NULL) );
    FUN1();
    return 0;
}