#VAR1 ""
#VAR1 <VAR2.VAR3>
void FUN1()
{
    int64_t VAR4;
    switch(6)
    {
    case 6:
        VAR4 = 5LL;
        break;
    default:
        break;
    }
    switch(7)
    {
    case 7:
        VAR4 = 10LL;
        FUN2(VAR4);
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