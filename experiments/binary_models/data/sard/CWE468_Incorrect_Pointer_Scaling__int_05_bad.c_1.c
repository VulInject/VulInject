#VAR1 ""
int VAR2 = 1; 
int VAR3 = 0; 
void FUN1()
{
    if(VAR2)
    {
        {
            int VAR4[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
            int *VAR5 = VAR4;
            int VAR6 = *(VAR5+(2*sizeof(int)));
            FUN2(VAR6);
        }
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN3(NULL) );
    FUN1();
    return 0;
}