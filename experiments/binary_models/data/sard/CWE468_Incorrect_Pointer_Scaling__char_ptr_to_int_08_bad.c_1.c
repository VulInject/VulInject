#VAR1 ""
int FUN1()
{
    return 1;
}
int FUN2()
{
    return 0;
}
void FUN3()
{
    if(FUN1())
    {
        {
            int VAR2[5] = { 1, 2, 3, 4, 5 };
            char *VAR3 = (char *)VAR2; 
            int VAR4 = (int) (*(VAR3+2));
            FUN4(VAR4);
        }
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN5(NULL) );
    FUN3();
    return 0;
}