#VAR1 ""
void FUN1()
{
    if(FUN2())
    {
        {
            int VAR2[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
            int *VAR3 = VAR2;
            int VAR4 = *(VAR3+(2*sizeof(int)));
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