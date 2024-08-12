#VAR1 ""
int VAR2 = 5;
void FUN1()
{
    if(VAR2==5)
    {
        {
            int * VAR3 = (int *)malloc(sizeof(int));
            if (VAR3 == NULL) {FUN2(-1);}
            int VAR4 = *VAR3; 
            free(VAR3);
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