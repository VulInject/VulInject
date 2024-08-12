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
            VAR4 * VAR5 = (VAR4 *)malloc(100*sizeof(VAR4));
            if (VAR5 == NULL) {FUN4(-1);}
            VAR5[0].VAR6 = 0;
            VAR5[0].VAR7 = 0;
            FUN5(&VAR5[0]);
            VAR5 = (VAR4 *)realloc(VAR5, (130000)*sizeof(VAR4));
            if (VAR5 != NULL)
            {
                VAR5[0].VAR6 = 1;
                VAR5[0].VAR7 = 1;
                FUN5(&VAR5[0]);
                free(VAR5);
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