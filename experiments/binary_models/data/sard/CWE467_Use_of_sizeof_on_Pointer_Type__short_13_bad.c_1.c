#VAR1 ""
void FUN1()
{
    if(VAR2==5)
    {
        {
            short * VAR3 = NULL;
            VAR3 = (short *)malloc(sizeof(VAR3));
            if (VAR3 == NULL) {FUN2(-1);}
            VAR4 = 5;
            FUN3(VAR4);
            free(VAR3);
        }
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN4(NULL) );
    FUN1();
    return 0;
}