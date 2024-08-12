#VAR1 ""
#VAR1 <VAR2.VAR3>
#VAR1 <VAR4.VAR3>
void FUN1()
{
    int64_t VAR5;
    VAR5 = 0LL;
    switch(6)
    {
    case 6:
        VAR5 = VAR6;
        break;
    default:
        break;
    }
    switch(7)
    {
    case 7:
    {
        int64_t VAR7 = VAR5 * VAR5;
        FUN2(VAR7);
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