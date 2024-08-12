#VAR1 ""
static const int VAR2 = 5;
void FUN1()
{
    if(VAR2==5)
    {
        {
            int VAR3[5] = { 1, 2, 3, 4, 5 };
            char *VAR4 = (char *)VAR3; 
            int VAR5 = (int) (*(VAR4+2));
            FUN2(VAR5);
        }
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN3(NULL) );
    FUN1();
    return 0;
}