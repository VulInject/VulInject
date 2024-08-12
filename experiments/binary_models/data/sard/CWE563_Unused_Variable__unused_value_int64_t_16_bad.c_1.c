#VAR1 ""
#VAR1 <VAR2.VAR3>
void FUN1()
{
    int64_t VAR4;
    while(1)
    {
        VAR4 = 5LL;
        break;
    }
    while(1)
    {
        VAR4 = 10LL;
        FUN2(VAR4);
        break;
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN3(NULL) );
    FUN1();
    return 0;
}