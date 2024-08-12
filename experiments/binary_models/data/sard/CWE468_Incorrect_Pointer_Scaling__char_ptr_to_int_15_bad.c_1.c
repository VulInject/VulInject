#VAR1 ""
void FUN1()
{
    switch(6)
    {
    case 6:
    {
        int VAR2[5] = { 1, 2, 3, 4, 5 };
        char *VAR3 = (char *)VAR2; 
        int VAR4 = (int) (*(VAR3+2));
        FUN2(VAR4);
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