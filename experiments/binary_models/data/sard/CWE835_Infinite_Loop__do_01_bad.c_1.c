#VAR1 ""
void FUN1() 
{
    int VAR2 = 0;
    do
    {
        FUN2(VAR2);
        VAR2 = (VAR2 + 1) % 256;
    } while(VAR2 >= 0);
}
int main(int argc, char * argv[]) 
{
    srand( (unsigned)FUN3(NULL) );
    FUN1();
    return 0;
}