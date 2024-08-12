#VAR1 ""
#VAR1 <VAR2.VAR3>
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
            int * VAR4 = (int *)malloc(100*sizeof(int));
            if (VAR4 == NULL) {FUN4(-1);}
            VAR4[0] = 5;
            FUN5(VAR4[0]);
            VAR4 = (int *)realloc(VAR4, (130000)*sizeof(int));
            if (VAR4 != NULL)
            {
                VAR4[0] = 10;
                FUN5(VAR4[0]);
                free(VAR4);
            }
        }
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN6(NULL) );
    FUN3();
    return 0;
}