#VAR1 ""
void FUN1()
{
    switch(6)
    {
    case 6:
        FUN2(getenv(""));
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