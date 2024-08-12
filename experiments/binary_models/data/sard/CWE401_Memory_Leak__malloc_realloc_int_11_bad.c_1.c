#VAR1 ""
#VAR1 <VAR2.VAR3>
void FUN1()
{
    if(FUN2())
    {
        {
            int * VAR4 = (int *)malloc(100*sizeof(int));
            if (VAR4 == NULL) {FUN3(-1);}
            VAR4[0] = 5;
            FUN4(VAR4[0]);
            VAR4 = (int *)realloc(VAR4, (130000)*sizeof(int));
            if (VAR4 != NULL)
            {
                VAR4[0] = 10;
                FUN4(VAR4[0]);
                free(VAR4);
            }
        }
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN5(NULL) );
    FUN1();
    return 0;
}