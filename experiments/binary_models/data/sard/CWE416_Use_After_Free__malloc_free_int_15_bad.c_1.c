#VAR1 ""
#VAR1 <VAR2.VAR3>
void FUN1()
{
    int * VAR4;
    VAR4 = NULL;
    switch(6)
    {
    case 6:
        VAR4 = (int *)malloc(100*sizeof(int));
        if (VAR4 == NULL) {FUN2(-1);}
        {
            size_t VAR5;
            for(VAR5 = 0; VAR5 < 100; VAR5++)
            {
                VAR4[VAR5] = 5;
            }
        }
        free(VAR4);
        break;
    default:
        break;
    }
    switch(7)
    {
    case 7:
        FUN3(VAR4[0]);
        break;
    default:
        break;
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN4(NULL) );
    FUN1();
    return 0;
}