#VAR1 ""
void FUN1()
{
    if(FUN2())
    {
        {
            int VAR2[5] = { 1, 2, 3, 4, 5 };
            char *VAR3 = (char *)VAR2; 
            int VAR4 = (int) (*(VAR3+2));
            FUN3(VAR4);
        }
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN4(NULL) );
    FUN1();
    return 0;
}