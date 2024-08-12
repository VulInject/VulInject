#VAR1 ""
void FUN1()
{
    while(1)
    {
        FUN2(getenv(""));
        break;
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN3(NULL) );
    FUN1();
    return 0;
}