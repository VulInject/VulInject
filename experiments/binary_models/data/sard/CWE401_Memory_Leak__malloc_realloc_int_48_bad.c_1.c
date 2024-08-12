#VAR1 ""
#VAR1 <VAR2.VAR3>
void FUN1()
{
    if(VAR4==5)
    {
        {
            int * VAR5 = (int *)malloc(100*sizeof(int));
            if (VAR5 == NULL) {FUN2(-1);}
            VAR5[0] = 5;
            FUN3(VAR5[0]);
            VAR5 = (int *)realloc(VAR5, (130000)*sizeof(int));
            if (VAR5 != NULL)
            {
                VAR5[0] = 10;
                FUN3(VAR5[0]);
                free(VAR5);
            }
        }
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN4(NULL) );
    FUN1();
    return 0;
}