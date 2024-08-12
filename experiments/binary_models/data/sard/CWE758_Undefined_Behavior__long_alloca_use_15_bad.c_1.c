#VAR1 ""
void FUN1()
{
    switch(6)
    {
    case 6:
    {
        long * VAR2 = (long *)FUN2(sizeof(long));
        long VAR3 = *VAR2; 
        FUN3(VAR3);
    }
    break;
    default:
        break;
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN4(NULL) );
    FUN1();
    return 0;
}